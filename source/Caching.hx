package;

import haxe.Exception;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
#if windows
import sys.FileSystem;
import sys.io.File;
#end
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.transition.FlxTransitionSprite.GraphicTransTileDiamond;
import flixel.addons.transition.FlxTransitionableState;
import flixel.addons.transition.TransitionData;
import flixel.graphics.FlxGraphic;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.math.FlxPoint;
import flixel.math.FlxRect;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.text.FlxText;

using StringTools;

class Caching extends MusicBeatState
{
    var toBeDone = 0;
    var done = 0;

    var text:FlxText;
    var foawLogo:FlxSprite;

	override function create()
	{
        FlxG.mouse.visible = false;

        FlxG.worldBounds.set(0,0);

        text = new FlxText(FlxG.width / 2, FlxG.height / 2 + 300,0,"Loading...");
        text.size = 34;
        text.alignment = FlxTextAlign.CENTER;
        text.alpha = 0;

        foawLogo = new FlxSprite(FlxG.width / 2, FlxG.height / 2).loadGraphic(Paths.image('FOAWlogo'));
        foawLogo.y += 100;
        foawLogo.x -= foawLogo.width / 2;
        foawLogo.y -= foawLogo.height / 2 + 100;
        text.y -= foawLogo.height / 2 - 125;
        text.x -= 170;
        foawLogo.setGraphicSize(Std.int(foawLogo.width * 0.6));

        foawLogo.alpha = 0;

        add(foawLogo);
        add(text);

        trace('starting caching..');
        
        #if windows
        sys.thread.Thread.create(() -> {
            cache();
        });
        #end

        super.create();
    }

    var calledDone = false;

    override function update(elapsed) 
    {

        if (toBeDone != 0 && done != toBeDone)
        {
            var alpha = HelperFunctions.truncateFloat(done / toBeDone * 100,2) / 100;
            foawLogo.alpha = alpha;
            text.alpha = alpha;
            text.text = "Loading... (" + done + "/" + toBeDone + ")";
        }

        super.update(elapsed);
    }


    function cache()
    {

        var images = [];
        var music = [];

        trace("caching images...");

        #if windows
        for (i in FileSystem.readDirectory(FileSystem.absolutePath("assets/shared/images/characters")))
        {
            if (!i.endsWith(".png"))
                continue;
            images.push(i);
        }

        trace("caching music...");

        for (i in FileSystem.readDirectory(FileSystem.absolutePath("assets/songs")))
        {
            music.push(i);
        }
        #end

        toBeDone = Lambda.count(images) + Lambda.count(music);

        trace("LOADING: " + toBeDone + " OBJECTS.");

        for (i in images)
        {
            var replaced = i.replace(".png","");
            FlxG.bitmap.add(Paths.image("characters/" + replaced,"shared"));
            trace("cached " + replaced);
            done++;
        }

        for (i in music)
        {
            FlxG.sound.cache(Paths.inst(i));
            FlxG.sound.cache(Paths.voices(i));
            trace("cached " + i);
            done++;
        }

        trace("Finished caching...");

		if (Dead.hello == true)	
        {
			FlxG.switchState(new Dead());
        }
        else if (Dead.hello == false)	
        {
            FlxG.switchState(new TitleState());
        }
    }

}