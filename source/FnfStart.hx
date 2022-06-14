package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

#if windows
import Discord.DiscordClient;
#end

class FnfStart extends MusicBeatState
{
	var fnf:FlxSprite;
	var bottom:FlxSprite;
	var bottomOptions:FlxSprite;

	var hover1:FlxSprite;
	var hover2:FlxSprite;

	var wiimenubigger:FlxSprite;
	var startbigger:FlxSprite;

	var pressSound:FlxSound;

	override public function create()
	{
		hover1 = new FlxSprite(240, 570).loadGraphic(Paths.image('channels/wiishop/hover'));
		add(hover1);

		hover2 = new FlxSprite(670, 570).loadGraphic(Paths.image('channels/wiishop/hover'));
		add(hover2);

		fnf = new FlxSprite(0, 0);
		fnf.frames = Paths.getSparrowAtlas('channels/fnf/EnteringFNF');
		fnf.animation.addByPrefix('fnf', 'fnf', 24, true);
		fnf.animation.play('fnf');
		fnf.antialiasing = true;
		add(fnf);

		bottom = new FlxSprite(0, 0).loadGraphic(Paths.image('channels/wiishop/bottom'));
		add(bottom);

		bottomOptions = new FlxSprite(0, 0).loadGraphic(Paths.image('channels/wiishop/bottom_options'));
		add(bottomOptions);

		wiimenubigger = new FlxSprite(0, 0).loadGraphic(Paths.image('channels/wiishop/wiimenuBigger'));

		startbigger = new FlxSprite(0, 0).loadGraphic(Paths.image('channels/wiishop/startBigger'));

		FlxG.sound.playMusic(Paths.music('freakyMenu1'), 1, true);

		pressSound = new FlxSound().loadEmbedded(Paths.sound('Start'));

		super.create();
	}

	override function update(elapsed:Float)
	{
		if (FlxG.mouse.overlaps(hover1))
		{
			add(wiimenubigger);
			if (FlxG.mouse.justPressed)
			{
				FlxG.sound.music.stop();
				FlxG.sound.play(Paths.sound('ReturnMenu'));
				FlxG.switchState(new WiiMenu());
			}
		}
		if (!FlxG.mouse.overlaps(hover1))
		{
			remove(wiimenubigger);
		}
		if (FlxG.mouse.overlaps(hover2))
		{
			add(startbigger);
			if (FlxG.mouse.justPressed)
			{	
                FlxG.sound.music.fadeOut(2);
				pressSound.play();		
  			    new FlxTimer().start(2, function(tmr:FlxTimer)
			    {
                    FlxG.switchState(new FNFmenu());
                    FlxG.sound.music.stop();
                    FlxG.mouse.visible = false;
                });     
			}
		}
		if (!FlxG.mouse.overlaps(hover2))
		{
			remove(startbigger);
		}
	}
}