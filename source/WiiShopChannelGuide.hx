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

class WiiShopChannelGuide extends MusicBeatState
{
	var bg:FlxSprite;
	var back:FlxSprite;
	var guide:FlxSprite;
	var backSelectionSprite:FlxSprite;
	var backSelected:FlxSprite;

	override public function create()
	{
		backSelectionSprite = new FlxSprite(50, 620).loadGraphic(Paths.image('channelsin/wiishop/overlap/bottom'));
		add(backSelectionSprite);

		bg = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/bg'));
		add(bg);

		guide = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/guide'));
		add(guide);

		back = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/back'));
		add(back);

		backSelected = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/selected/back'));

		super.create();
	}

	override function update(elapsed:Float)
	{
		if (FlxG.mouse.overlaps(backSelectionSprite))
		{
			remove(back);
            add(backSelected);
            if (FlxG.mouse.justPressed)  
            {
				WiiShopChannel.backSound.play();
				guideFade();
				new FlxTimer().start(2, function(tmr:FlxTimer)
				{
                    FlxG.switchState(new WiiShopChannel());
				});	
            }
		}
		if (!FlxG.mouse.overlaps(backSelectionSprite))
		{
			add(back);
            remove(backSelected);
		}
	}

	function guideFade()
	{
		new FlxTimer().start(0.1, function(tmr:FlxTimer)
		{
			guide.alpha -= 0.1;
			if (guide.alpha > 0)
			{
				tmr.reset();
			}
		});
	}
}