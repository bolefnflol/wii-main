package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.effects.FlxFlicker;

#if windows
import Discord.DiscordClient;
#end

class FNFmenu extends MusicBeatState
{
    var bg:FlxSprite;

    var storyMode:FlxSprite;
    var freeplay:FlxSprite;
    var ost:FlxSprite;

	var camZoom:FlxTween;

	override function create()
	{
		#if windows
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In the FNF Menus", null);
		#end

		if (!FlxG.sound.music.playing)
		{
            FlxG.sound.playMusic(Paths.soundRandomMusic('freakyMenu', 1, 2));
		    Conductor.changeBPM(102);
		}

		bg = new FlxSprite().loadGraphic(Paths.image('menuBG'));
		bg.color = 0xFFfde871;
		bg.updateHitbox();
		bg.screenCenter();
		bg.antialiasing = true;
		add(bg);

        storyMode = new FlxSprite(80, 20);
        storyMode.alpha = 1;
        storyMode.frames = Paths.getSparrowAtlas('fnf/story');
        storyMode.animation.addByPrefix('bop', 'story mode instance 1', 24, false);
        storyMode.animation.addByPrefix('bop2', 'story mode instance 1', 24, false);
        add(storyMode);

        freeplay = new FlxSprite(50, 280);
        freeplay.alpha = 0.5;
        freeplay.frames = Paths.getSparrowAtlas('fnf/freeplay');
        freeplay.animation.addByPrefix('bop', 'freeplay instance 1', 24, false);
        freeplay.animation.addByPrefix('bop2', 'freeplay instance 1', 24, false);
        add(freeplay);

        ost = new FlxSprite(140, 445);
        ost.alpha = 0.5;
        ost.frames = Paths.getSparrowAtlas('fnf/ost');
        ost.animation.addByPrefix('bop', 'bump', 24, false);
        ost.animation.addByPrefix('bop2', 'bump', 24, false);
        add(ost);

        camZoom = FlxTween.tween(this, {}, 0);

		super.create();
    }

	var danceLeft:Bool = false;
    var shouldBop:Bool = true;

	override function beatHit()
	{
		super.beatHit();

		danceLeft = !danceLeft;

		if (danceLeft)
        {
            storyMode.animation.play('bop', true);
            freeplay.animation.play('bop', true);
            ost.animation.play('bop', true);
        }
		else
        {
            storyMode.animation.play('bop2', true);
            freeplay.animation.play('bop2', true);
            ost.animation.play('bop2', true);
        }

        if (shouldBop)
        {
            FlxG.camera.zoom += 0.035;
            camZoom = FlxTween.tween(FlxG.camera, {zoom: 1}, 0.1);
        }
	}

	override function update(elapsed:Float)
	{
		if (FlxG.sound.music != null)
			Conductor.songPosition = FlxG.sound.music.time;

        if (FlxG.keys.justPressed.ONE)
		    shouldBop = !shouldBop;

        if (FlxG.keys.justPressed.UP)
        {
	        FlxG.sound.play(Paths.sound('scrollMenu'), 0.4);
            if (storyMode.alpha >= 1)//if story mode is selected and is going up
            {
                storyMode.alpha = 0.5;
                freeplay.alpha = 0.5;
                ost.alpha = 1;
                FlxTween.tween(ost.scale, {x:1.1, y:1.1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                if (storyMode.alpha >= 0.5 && freeplay.alpha >= 0.5)
                {
                    FlxTween.tween(storyMode.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                    FlxTween.tween(freeplay.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                }
            }
            else if (freeplay.alpha >= 1)//if freeplay is selected and is going up
            {
                freeplay.alpha = 0.5;
                storyMode.alpha = 1;
                ost.alpha = 0.5;
                FlxTween.tween(storyMode.scale, {x:1.1, y:1.1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                if (freeplay.alpha >= 0.5 && ost.alpha >= 0.5)
                {
                    FlxTween.tween(freeplay.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                    FlxTween.tween(ost.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                }
            }
            else if (ost.alpha >= 1)//if ost is selected and is going up
            {
                freeplay.alpha = 1;
                storyMode.alpha = 0.5;
                ost.alpha = 0.5;
                FlxTween.tween(freeplay.scale, {x:1.1, y:1.1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                if (storyMode.alpha >= 0.5 && ost.alpha >= 0.5)
                {
                    FlxTween.tween(storyMode.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                    FlxTween.tween(ost.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                }
            }
        }
        if (FlxG.keys.justPressed.DOWN)
        {
	        FlxG.sound.play(Paths.sound('scrollMenu'), 0.4);
            if (storyMode.alpha >= 1)//if story mode is selected and is going down
            {
                storyMode.alpha = 0.5;
                ost.alpha = 0.5;
                freeplay.alpha = 1;
                FlxTween.tween(freeplay.scale, {x:1.1, y:1.1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                if (storyMode.alpha >= 0.5 && ost.alpha >= 0.5)
                {
                    FlxTween.tween(storyMode.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                    FlxTween.tween(ost.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                }
            }
            else if (freeplay.alpha >= 1)//if freeplay is selected and is going down
            {
                freeplay.alpha = 0.5;
                storyMode.alpha = 0.5;
                ost.alpha = 1;
                FlxTween.tween(ost.scale, {x:1.1, y:1.1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                if (freeplay.alpha >= 0.5 && storyMode.alpha >= 0.5)
                {
                    FlxTween.tween(freeplay.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                    FlxTween.tween(storyMode.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                }
            }
            else if (ost.alpha >= 1)//if ost is selected and is going down
            {
                freeplay.alpha = 0.5;
                storyMode.alpha = 1;
                ost.alpha = 0.5;
                FlxTween.tween(storyMode.scale, {x:1.1, y:1.1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                if (freeplay.alpha >= 0.5 && ost.alpha >= 0.5)
                {
                    FlxTween.tween(freeplay.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                    FlxTween.tween(ost.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
                }
            }
        }

        if (controls.ACCEPT)
        {
            if (storyMode.alpha >= 1)
            {
                FlxFlicker.flicker(storyMode, 1, 0.05, false);
	            FlxG.sound.play(Paths.sound('confirmMenu'), 0.4);
                fadeStory();
                new FlxTimer().start(1, function(tmr:FlxTimer)
                {
                    FlxG.switchState(new StoryMenuState());
                });
            }
            else if (freeplay.alpha >= 1)
            {
                FlxFlicker.flicker(freeplay, 1, 0.05, false);
	            FlxG.sound.play(Paths.sound('confirmMenu'), 0.4);
                fadeFreeplay();
                FlxG.sound.music.fadeOut(2);
                new FlxTimer().start(1, function(tmr:FlxTimer)
                {
                    FlxG.switchState(new FreeplayState());
                    FlxG.sound.music.stop();
                });
            }
        }
        if (controls.BACK)
        {
	        FlxG.sound.play(Paths.sound('cancelMenu'), 0.4);
			FlxG.sound.music.fadeOut(2);
			new FlxTimer().start(2, function(tmr:FlxTimer)
			{
				FlxG.switchState(new WiiMenu());
				FlxG.sound.music.stop();
			});
        }
		super.update(elapsed);
    }

	function fadeFreeplay()
	{
		new FlxTimer().start(0.1, function(tmr:FlxTimer)
		{
			storyMode.alpha -= 0.3;
			ost.alpha -= 0.3;

			if (storyMode.alpha > 0 && ost.alpha > 0)
			{
				tmr.reset();
			}
		});
	}

	function fadeStory()
	{
		new FlxTimer().start(0.1, function(tmr:FlxTimer)
		{
			freeplay.alpha -= 0.3;
			ost.alpha -= 0.3;

			if (storyMode.alpha > 0 && ost.alpha > 0)
			{
				tmr.reset();
			}
		});
	}

	function offsetShit(object:FlxSprite, amount:Int)
	{
        if (FlxG.keys.justPressed.S)
        {
            object.y += amount;
            trace(object.y);
        }

        if (FlxG.keys.justPressed.W)
        {
            object.y -= amount;
            trace(object.y);
        }

        if (FlxG.keys.justPressed.A)
        {
            object.x -= amount;
            trace(object.x);
        }

        if (FlxG.keys.justPressed.D)
        {
            object.x += amount;
            trace(object.x);
        }
	}
}