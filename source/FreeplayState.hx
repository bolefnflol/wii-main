package;

import flixel.input.gamepad.FlxGamepad;
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import lime.utils.Assets;


#if windows
import Discord.DiscordClient;
#end

using StringTools;

class FreeplayState extends MusicBeatState
{
	var songs:Array<SongMetadata> = [];

	public static var curSelected:Int = 0;
	var curDifficulty:Int = 1;

	var scoreText:FlxText;
	var comboText:FlxText;
	var diffText:FlxText;
	var lerpScore:Int = 0;
	var intendedScore:Int = 0;
	var combo:String = '';

	public static var bpms:Array<Float> = [];
	private var grpSongs:FlxTypedGroup<Alphabet>;
	private var curPlaying:Bool = false;

	private var iconArray:Array<HealthIcon> = [];

	public var curCol:FlxColor = 0xFFFFFFFF;
	public var songCol:FlxColor = 0xFFE78B07;
	public var colorTween:FlxTween;
	public var background:FlxSprite;
	var camZoom:FlxTween;

	var notSupport:FlxSprite;

	override function create()//FINALLY GOT THE GAME TO NOT DUPLICATE SONGS (reminder: If songs duplicate, check your variables :])
	{
		#if windows
		DiscordClient.changePresence("In the Freeplay Menu", null);
		#end

		addSong('Wii-Are-Fun', 1, 'wii');
		addSong('Motion-Controls', 1, 'wii');
		addSong('Lets-Play', 1, 'wii');
		addSong('Heat-Upheaval', 1, 'wii');
		addSong('Console-Entropy', 1, 'wii');
		addSong('Bowling-Mayhem', 1, 'matt');
		addSong('Wasteland', 1, 'oswald');
		addSong('Eyem-To-Widdel', 1, '3-0');

		background = new FlxSprite().loadGraphic(Paths.image('menuBG'));
		background.color = curCol;
		add(background);

		grpSongs = new FlxTypedGroup<Alphabet>();
		add(grpSongs);

		for (i in 0...songs.length)
		{
			var songText:Alphabet = new Alphabet(0, (70 * i) + 30, songs[i].songName, true, false, true);
			songText.isMenuItem = true;
			songText.targetY = i;
			grpSongs.add(songText);

			var icon:HealthIcon = new HealthIcon(songs[i].songCharacter);
			icon.sprTracker = songText;

			iconArray.push(icon);
			add(icon);
		}

		scoreText = new FlxText(FlxG.width * 0.7, 5, 0, "", 32);
		scoreText.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, RIGHT);

		var scoreBG:FlxSprite = new FlxSprite(scoreText.x - 6, 0).makeGraphic(Std.int(FlxG.width * 0.35), 66, 0xFF000000);
		scoreBG.alpha = 0.6;
		add(scoreBG);

		diffText = new FlxText(scoreText.x, scoreText.y + 36, 0, "", 24);
		diffText.font = scoreText.font;
		add(diffText);

		comboText = new FlxText(diffText.x + 100, diffText.y, 0, "", 24);
		comboText.font = diffText.font;
		add(comboText);

		add(scoreText);

		changeSelection();
		changeDiff();
		changeBGColor();

		notSupport = new FlxSprite(760.25, 637.3).loadGraphic(Paths.image("not support"));
		notSupport.alpha = 0;
		add(notSupport);

		super.create();
	}

	public function changeBGColor():Void
	{
		switch (songs[curSelected].songName.toLowerCase())
		{
			case 'wii-are-fun' | 'motion-controls' | 'lets-play' | 'heat-upheaval' | 'console-entropy':
				songCol = 0xFFc8dee2;
			case 'bowling-mayhem':
				songCol = 0xFFfe9641;
			case 'wasteland':
				songCol = 0xFF008af5;
			case 'eyem-to-widdel':
				songCol = 0xFFfe9641;
		}

		if(colorTween != null)
		{
			colorTween.cancel();
		}

		colorTween = FlxTween.color(background, 1, curCol, songCol,
		{
			onComplete: function(twn:FlxTween)
			{
				colorTween = null;
			}
		});
	}

	override function beatHit()
	{
		super.beatHit();

		FlxG.camera.zoom += 0.015;
		camZoom = FlxTween.tween(FlxG.camera, {zoom: 1}, 0.1);
	}

	public function addSong(songName:String, weekNum:Int, songCharacter:String)
	{
		songs.push(new SongMetadata(songName, weekNum, songCharacter));
		bpms.push(Song.loadFromJson(songName, songName.toLowerCase()).bpm);
	}

	public function addWeek(songs:Array<String>, weekNum:Int, ?songCharacters:Array<String>)
	{
		if (songCharacters == null)
			songCharacters = ['dad'];

		var num:Int = 0;
		for (song in songs)
		{
			addSong(song, weekNum, songCharacters[num]);

			if (songCharacters.length != 1)
				num++;
		}
	}

	function noSupport(e:Bool, e2:Bool)
	{
		if (e)
			notSupport.alpha = 0;
		else if (e2)
			FlxTween.tween(notSupport, {alpha: 0.7}, 0.1, {ease: FlxEase.expoOut});
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		switch (songs[curSelected].songName.toLowerCase())
		{
			case 'wii-are-fun' | 'motion-controls' | 'lets-play' | 'heat-upheaval' | 'console-entropy' | 'bowling-mayhem':
				noSupport(true, false);
			case 'eyem-to-widdel' | 'wasteland':
				noSupport(false, true);
		}

		if (FlxG.sound.music.volume < 0.7)
		{
			FlxG.sound.music.volume += 0.5 * FlxG.elapsed;
		}

		if (FlxG.sound.music != null)
			Conductor.songPosition = FlxG.sound.music.time;

		curCol = background.color;

		lerpScore = Math.floor(FlxMath.lerp(lerpScore, intendedScore, 0.4));

		if (Math.abs(lerpScore - intendedScore) <= 10)
			lerpScore = intendedScore;

		scoreText.text = "PERSONAL BEST:" + lerpScore;
		comboText.text = combo + '\n';

		var upP = FlxG.keys.justPressed.UP;
		var downP = FlxG.keys.justPressed.DOWN;
		var gamepad:FlxGamepad = FlxG.gamepads.lastActive;

		if (gamepad != null)
		{
			if (gamepad.justPressed.DPAD_UP)
			{
				changeSelection(-1);
			}
			if (gamepad.justPressed.DPAD_DOWN)
			{
				changeSelection(1);
			}
			if (gamepad.justPressed.DPAD_LEFT)
			{
				changeDiff(-1);
			}
			if (gamepad.justPressed.DPAD_RIGHT)
			{
				changeDiff(1);
			}
		}

		if (upP)
		{
			changeSelection(-1);
			changeBGColor();
		}
		if (downP)
		{
			changeSelection(1);
			changeBGColor();
		}

		if (FlxG.keys.justPressed.LEFT)
			changeDiff(-1);
		if (FlxG.keys.justPressed.RIGHT)
			changeDiff(1);

		if (controls.BACK)
		{
			if(colorTween != null)
			{
				colorTween.cancel();
			}
			FlxG.switchState(new FNFmenu());
		}

		if (controls.ACCEPT)
		{
			if (FlxG.save.data.boughtBfWithMarioHat || FlxG.save.data.boughtPICOWithLUIGIHat || FlxG.save.data.boughtSPOOKYHats || FlxG.save.data.boughtEduardo)
			{
				var songFormat = StringTools.replace(songs[curSelected].songName, " ", "-");
				switch (songFormat) {
					case 'Dad-Battle': songFormat = 'Dadbattle';
					case 'Philly-Nice': songFormat = 'Philly';
				}

				trace(songs[curSelected].songName);

				var poop:String = Highscore.formatSong(songFormat, curDifficulty);

				trace(poop);

				PlayState.SONG = Song.loadFromJson(poop, songs[curSelected].songName);
				PlayState.isStoryMode = false;
				PlayState.storyDifficulty = curDifficulty;
				PlayState.storyWeek = songs[curSelected].week;
				trace('CUR WEEK' + PlayState.storyWeek);

				if (songs[curSelected].songName.toLowerCase() == 'wasteland' || songs[curSelected].songName.toLowerCase() == 'eyem-to-widdel')
				{
					LoadingState.loadAndSwitchState(new PlayState());
				}
				else if (songs[curSelected].songName.toLowerCase() != 'wasteland' || songs[curSelected].songName.toLowerCase() != 'eyem-to-widdel')
				{
					FlxG.switchState(new SelectPlayable());
				}
			}
			else
			{
				var songFormat = StringTools.replace(songs[curSelected].songName, " ", "-");
				switch (songFormat) {
					case 'Dad-Battle': songFormat = 'Dadbattle';
					case 'Philly-Nice': songFormat = 'Philly';
				}

				trace(songs[curSelected].songName);

				var poop:String = Highscore.formatSong(songFormat, curDifficulty);

				trace(poop);

				PlayState.SONG = Song.loadFromJson(poop, songs[curSelected].songName);
				PlayState.isStoryMode = false;
				PlayState.storyDifficulty = curDifficulty;
				PlayState.storyWeek = songs[curSelected].week;
				trace('CUR WEEK' + PlayState.storyWeek);
				LoadingState.loadAndSwitchState(new PlayState());

				if(colorTween != null)
				{
					colorTween.cancel();
				}
			}
		}
	}

	function changeDiff(change:Int = 0)
	{
		curDifficulty += change;

		if (curDifficulty < 0)
			curDifficulty = 2;
		if (curDifficulty > 2)
			curDifficulty = 0;

		var songHighscore = StringTools.replace(songs[curSelected].songName, " ", "-");
		switch (songHighscore) {
			case 'Dad-Battle': songHighscore = 'Dadbattle';
			case 'Philly-Nice': songHighscore = 'Philly';
		}

		#if !switch
		intendedScore = Highscore.getScore(songHighscore, curDifficulty);
		combo = Highscore.getCombo(songHighscore, curDifficulty);
		#end

		diffText.text = CoolUtil.difficultyFromInt(curDifficulty).toUpperCase();
	}

	function changeSelection(change:Int = 0)
	{
		FlxG.sound.play(Paths.sound('scrollMenu'), 0.4);

		curSelected += change;

		if (curSelected < 0)
			curSelected = songs.length - 1;
		if (curSelected >= songs.length)
			curSelected = 0;

		var songHighscore = StringTools.replace(songs[curSelected].songName, " ", "-");
		switch (songHighscore) {
			case 'Dad-Battle': songHighscore = 'Dadbattle';
			case 'Philly-Nice': songHighscore = 'Philly';
		}

		#if !switch
		intendedScore = Highscore.getScore(songHighscore, curDifficulty);
		combo = Highscore.getCombo(songHighscore, curDifficulty);
		#end

		#if PRELOAD_ALL
		FlxG.sound.playMusic(Paths.inst(songs[curSelected].songName), 0);
		#end

		Conductor.changeBPM(bpms[curSelected]);

		var bullShit:Int = 0;

		for (i in 0...iconArray.length)
		{
			iconArray[i].alpha = 0.6;
		}

		iconArray[curSelected].alpha = 1;

		for (item in grpSongs.members)
		{
			item.targetY = bullShit - curSelected;
			bullShit++;

			item.alpha = 0.6;

			if (item.targetY == 0)
			{
				item.alpha = 1;
			}
		}
	}
}

class SongMetadata
{
	public var songName:String = "";
	public var week:Int = 0;
	public var songCharacter:String = "";

	public function new(song:String, week:Int, songCharacter:String)
	{
		this.songName = song;
		this.week = week;
		this.songCharacter = songCharacter;
	}
}