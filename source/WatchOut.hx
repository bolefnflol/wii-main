package;

import flixel.FlxG;
import flixel.text.FlxText;
import flixel.util.FlxTimer;
#if windows
import sys.FileSystem;
import sys.io.File;
#end
import flixel.effects.FlxFlicker;
import flixel.graphics.FlxGraphic;
import flixel.util.FlxColor;
import flixel.math.FlxRect;
import flixel.addons.transition.FlxTransitionableState;
import flixel.addons.transition.TransitionData;
import flixel.math.FlxPoint;
import flixel.FlxSprite;
import flixel.addons.transition.FlxTransitionSprite.GraphicTransTileDiamond;

class WatchOut extends MusicBeatState
{
    var txt:FlxText;
	var bg:FlxSprite;
	static var initialized:Bool = false;

	override function create()
	{
		if (FlxG.save.data.comeDead == true)
		{
			FlxG.switchState(new Dead());
		}

		bg = new FlxSprite(0, 0).makeGraphic(1280, 780);
		bg.alpha = 0;
		add(bg);

        FlxG.mouse.visible = false;
		super.create();

		txt = new FlxText(0, 0, FlxG.width,
			"Hello there :)"
			+ "\nBefore playing, you must know:"
			+ "\nThis mod contains flashing lights!"
			+ "\nTo turn this off, go to the settings."
			+ "\nPress Escape to exit, or Enter if you want to continue",
			32);

		txt.setFormat("VCR OSD Mono", 32, CENTER);
		txt.borderColor = FlxColor.BLACK;
		txt.borderSize = 3;
		txt.borderStyle = FlxTextBorderStyle.OUTLINE;
		txt.screenCenter();
		add(txt);
	}

	override function update(elapsed:Float)
	{
		WiiSaveDataChecker.checkSaveData();

		if (FlxG.keys.justPressed.ENTER)
		{
            FlxFlicker.flicker(txt, 2, 0.2, false);
	        FlxG.sound.play(Paths.sound('confirmMenu'), 0.4);
            new FlxTimer().start(1.5, function(tmr:FlxTimer)
		    {
                FlxG.switchState(new Caching());
            });
		}

		#if windows
		if (FlxG.keys.justPressed.ESCAPE)
		{
            Sys.exit(1);
		}
		#end
		super.update(elapsed);
	}
}
