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

class SelectTypeOfChar extends MusicBeatState
{
    var bg:FlxSprite;
    
    var normal:FlxSprite;
    var limited:FlxSprite;

	override public function create()
	{
		#if windows
		// Updating Discord Rich Presence
		DiscordClient.changePresence("Type of Character to unlock?", null);
		#end

		bg = new FlxSprite(-15, 0).loadGraphic(Paths.image('channelsin/wiishop/charselectionbg'));
		add(bg);

		normal = new FlxSprite(93, 218).loadGraphic(Paths.image('channelsin/wiishop/normalchar'));
        normal.alpha = 1 / 2;
		add(normal);

		limited = new FlxSprite(734, 221).loadGraphic(Paths.image('channelsin/wiishop/limited'));
        limited.alpha = 1 / 2;
		add(limited);

		super.create();
	}

	override function update(elapsed:Float)
	{
        if (FlxG.mouse.overlaps(normal))
        {
            normal.alpha = 1;
            FlxTween.tween(normal.scale, {x:1.1, y:1.1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
            if (FlxG.mouse.justPressed)
            {
                remove(limited);
                WiiShopChannel.pressSound.play();
                new FlxTimer().start(1, function(tmr:FlxTimer)
                {
                    FlxG.switchState(new WiiShopCharacters());
                });	     
            }          
        }
        else if (!FlxG.mouse.overlaps(normal))
        {
            normal.alpha = 0.5;
            FlxTween.tween(normal.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});     
        }

        if (FlxG.mouse.overlaps(limited))
        {
            limited.alpha = 1;
            FlxTween.tween(limited.scale, {x:1.1, y:1.1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});
            if (FlxG.mouse.justPressed)
            {
                remove(normal);
                WiiShopChannel.pressSound.play();
                new FlxTimer().start(1, function(tmr:FlxTimer)
                {
                    FlxG.switchState(new LimitedChars());
                });	     
            }           
        }
        else if (!FlxG.mouse.overlaps(limited))
        {
            limited.alpha = 0.5;
            FlxTween.tween(limited.scale, {x:1, y:1}, 0.2, {ease: FlxEase.quadInOut, type: FlxTween.ONESHOT});       
        }

        if (FlxG.keys.justPressed.ESCAPE)   
        {
            FlxG.switchState(new WiiShopChannel());
        }
	}
}