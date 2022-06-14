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

class WiiShopCharacters extends MusicBeatState
{
	var bg:FlxSprite;

	var bf:FlxSprite;
	var pico:FlxSprite;
	var spooky:FlxSprite;

	var descText:FlxText;
	var arrowRight:FlxSprite;

	override public function create()
	{
		bg = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/characters/bg'));
		add(bg);

		bf = new FlxSprite(240, 150).loadGraphic(Paths.image('channelsin/wiishop/characters/buy/bf_mariohat'));
		bf.alpha = 0.5;
		add(bf);

		pico = new FlxSprite(240, 350).loadGraphic(Paths.image('channelsin/wiishop/characters/buy/pico_luigihat'));
		pico.alpha = 0.5;
		add(pico);

		spooky = new FlxSprite(240, 525).loadGraphic(Paths.image('channelsin/wiishop/characters/buy/spooky_ww'));
		spooky.alpha = 0.5;
		add(spooky);

		arrowRight = new FlxSprite(1170, 330).loadGraphic(Paths.image('channelsin/wiishop/characters/arrowRight'));
		arrowRight.alpha = 0.5;
		add(arrowRight);

		super.create();
	}

	override function update(elapsed:Float)
	{
		if (FlxG.mouse.overlaps(bf))
		{
			bf.alpha = 1;
            if (FlxG.mouse.justPressed)  
            {
				WiiShopChannel.pressSound.play();
                FlxG.switchState(new BfBuyingPage());				
			}
		}
		if (!FlxG.mouse.overlaps(bf))
		{
			bf.alpha = 0.5;
		}

		if (FlxG.mouse.overlaps(pico))
		{
			pico.alpha = 1;
            if (FlxG.mouse.justPressed)  
            {
				WiiShopChannel.pressSound.play();
                FlxG.switchState(new PicoPage());				
			}
		}
		if (!FlxG.mouse.overlaps(pico))
		{
			pico.alpha = 0.5;
		}

		if (FlxG.mouse.overlaps(spooky))
		{
			spooky.alpha = 1;
            if (FlxG.mouse.justPressed)  
            {
				WiiShopChannel.pressSound.play();
                FlxG.switchState(new SpookyPage());				
			}
		}
		if (!FlxG.mouse.overlaps(spooky))
		{
			spooky.alpha = 0.5;
		}

		if (FlxG.mouse.overlaps(arrowRight))
		{
			arrowRight.alpha = 1;
            if (FlxG.mouse.justPressed)  
            {
				WiiShopChannel.pressSound.play();
                FlxG.switchState(new WiiShopCharacters2());				
			}
		}
		if (!FlxG.mouse.overlaps(arrowRight))
		{
			arrowRight.alpha = 0.5;
		}

		if (controls.RIGHT)
		{
			WiiShopChannel.pressSound.play();
        	FlxG.switchState(new WiiShopCharacters2());		
		}

        if (FlxG.keys.justPressed.ESCAPE)   
        {
            FlxG.switchState(new SelectTypeOfChar());
        }

		super.update(elapsed);
	}
}