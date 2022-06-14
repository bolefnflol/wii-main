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

class PressA extends MusicBeatState
{
	var bg:FlxSprite;
	var pressA:FlxSprite;
	var pressAsound:FlxSound;

	public var aSine:Float = 0;

	override public function create()
	{
		#if windows
		// Updating Discord Rich Presence
		DiscordClient.changePresence("Pressing A", null);
		#end

		FlxG.sound.music.stop();

		bg = new FlxSprite(0, 0).loadGraphic(Paths.image('startup/pressABG'));
		add(bg);

		pressA = new FlxSprite(0, 0);
		pressA.frames = Paths.getSparrowAtlas('startup/pressA');
		pressA.animation.addByPrefix('waiting', 'press a instance 1', 24, true);
		pressA.animation.play('waiting');
		pressA.antialiasing = true;
		add(pressA);

		pressAsound = new FlxSound().loadEmbedded(Paths.sound('a-button'));

		super.create();
	}

	override function update(elapsed:Float)
	{
		if(pressA.visible) {
			aSine += 180 * elapsed;
			pressA.alpha = 1 - Math.sin((Math.PI * aSine) / 180);
		}

		if (FlxG.keys.justPressed.A)
		{
			remove(pressA, true);
			pressAsound.play();
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				bg.alpha -= 0.09;
				if (bg.alpha > 0)
				{
					tmr.reset(0.1);
				}

  			    new FlxTimer().start(2, function(tmr:FlxTimer)
			    {
                    FlxG.switchState(new WiiMenu());
                });              
			});
		}
	}
}