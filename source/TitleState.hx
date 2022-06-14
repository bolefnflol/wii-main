package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.display.FlxGridOverlay;
import flixel.addons.transition.FlxTransitionSprite.GraphicTransTileDiamond;
import flixel.addons.transition.FlxTransitionableState;
import flixel.addons.transition.TransitionData;
import flixel.graphics.FlxGraphic;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxGroup;
import flixel.input.gamepad.FlxGamepad;
import flixel.math.FlxPoint;
import flixel.math.FlxRect;
import flixel.system.FlxSound;
import flixel.system.ui.FlxSoundTray;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import io.newgrounds.NG;
import lime.app.Application;
import openfl.Assets;
import vlc.VideoHandler;
import flixel.addons.api.FlxGameJolt;

#if windows
import Discord.DiscordClient;
#end

#if cpp
import sys.thread.Thread;
#end

using StringTools;

class TitleState extends MusicBeatState
{
	static var initialized:Bool;

	public static var a:Bool;

	override public function create():Void
	{
		#if windows
		DiscordClient.initialize();

		Application.current.onExit.add (function (exitCode) {
			DiscordClient.shutdown();
		 });

		DiscordClient.changePresence("Just booted the game", null);
		#end

		super.create();

		PlayerSettings.init();

		FlxG.save.bind('FunkinOnAWii', 'B.O.L.E');

		KadeEngineData.initSave();

		GamejoltLogInState.saveData();
		Highscore.load();

		if (FlxG.save.data.weekUnlocked != null)
		{
			if (StoryMenuState.weekUnlocked.length < 4)
				StoryMenuState.weekUnlocked.insert(0, true);
			if (!StoryMenuState.weekUnlocked[0])
				StoryMenuState.weekUnlocked[0] = true;
		}

		new FlxTimer().start(1, function(tmr:FlxTimer)
		{
			startIntro();
		});
	}

	var logoBl:FlxSprite;
	var remoteDance:FlxSprite;
	var danceLeft:Bool = false;
	var titleText:FlxSprite;

	function startIntro()
	{
		FlxG.camera.flash(FlxColor.WHITE, 1.3);

		Conductor.changeBPM(175);
		persistentUpdate = true;

		var bg:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		add(bg);

		remoteDance = new FlxSprite(FlxG.width * 0.4, FlxG.height * 0.07);
		remoteDance.frames = Paths.getSparrowAtlas('RemoteTitle');
		remoteDance.animation.addByIndices('danceLeft', 'remote', [0, 1, 2, 3], "", 24, false);
		remoteDance.animation.addByIndices('danceRight', 'remote', [4, 5, 6, 7], "", 24, false);
		remoteDance.x += 250;
		remoteDance.y += 50;
		remoteDance.antialiasing = true;
		add(remoteDance);

		logoBl = new FlxSprite(-20, -10);
		logoBl.frames = Paths.getSparrowAtlas('FunkinOnAWii');
		logoBl.antialiasing = true;
		logoBl.animation.addByPrefix('bump', 'logo bumpin', 24);
		logoBl.animation.play('bump');
		logoBl.updateHitbox();
		add(logoBl);

		titleText = new FlxSprite(100, FlxG.height * 0.8);
		titleText.frames = Paths.getSparrowAtlas('titleEnter');
		titleText.animation.addByPrefix('idle', "Press Enter to Begin", 24);
		titleText.animation.addByPrefix('press', "ENTER PRESSED", 24);
		titleText.antialiasing = true;
		titleText.animation.play('idle');
		titleText.updateHitbox();
		add(titleText);

		if (!initialized)
		{
			var diamond:FlxGraphic = FlxGraphic.fromClass(GraphicTransTileDiamond);
			diamond.persist = true;
			diamond.destroyOnNoUse = false;

			FlxTransitionableState.defaultTransIn = new TransitionData(FADE, FlxColor.BLACK, 1, new FlxPoint(0, -1), {asset: diamond, width: 32, height: 32},
				new FlxRect(-200, -200, FlxG.width * 1.4, FlxG.height * 1.4));
			FlxTransitionableState.defaultTransOut = new TransitionData(FADE, FlxColor.BLACK, 0.7, new FlxPoint(0, 1),
				{asset: diamond, width: 32, height: 32}, new FlxRect(-200, -200, FlxG.width * 1.4, FlxG.height * 1.4));

			transIn = FlxTransitionableState.defaultTransIn;
			transOut = FlxTransitionableState.defaultTransOut;

			FlxG.sound.playMusic(Paths.music('FunkinOnAWii'), 0);

			FlxG.sound.music.fadeIn(4, 0, 0.7);
		}

		initialized = true;

		FlxG.mouse.visible = false;
	}

	var transitioning:Bool = false;

	override function update(elapsed:Float)
	{
		if (FlxG.keys.justPressed.TWO)
		{
			FlxG.sound.music.stop();
			FlxG.switchState(new GamejoltLogInState());
		}

		if (FlxG.keys.justPressed.ONE)
			FlxG.switchState(new FreeplayState());

		if (FlxG.sound.music != null)
			Conductor.songPosition = FlxG.sound.music.time;

		if (FlxG.keys.justPressed.F)
		{
			FlxG.fullscreen = !FlxG.fullscreen;
		}

		var pressedEnter:Bool = controls.ACCEPT;

		if (pressedEnter && !transitioning)
		{
			titleText.animation.play('press');

			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				logoBl.alpha -= 0.08;
				remoteDance.alpha -= 0.08;
				if (logoBl.alpha > 0 && remoteDance.alpha > 0)
				{
					tmr.reset(0.1);
				}
			});

			FlxG.camera.flash(FlxColor.WHITE, 1);
			FlxG.sound.play(Paths.sound('confirmMenu'), 0.7);

			transitioning = true;
			FlxG.sound.music.fadeOut(4);

			new FlxTimer().start(2, function(tmr:FlxTimer)
			{
				FlxG.switchState(new PressA());
			});
		}

		super.update(elapsed);

		FlxG.save.data.a = a;
	}

	override function beatHit()
	{
		super.beatHit();

		logoBl.animation.play('bump');
		danceLeft = !danceLeft;

		if (danceLeft)
			remoteDance.animation.play('danceRight');
		else
			remoteDance.animation.play('danceLeft');
	}
}