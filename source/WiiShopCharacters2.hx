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

class WiiShopCharacters2 extends MusicBeatState
{
	var bg:FlxSprite;

	var eduardo:FlxSprite;
	var gf:FlxSprite;

	var descText:FlxText;
	var arrowRight:FlxSprite;
	var arrowLeft:FlxSprite;

	override public function create()
	{
		bg = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/characters/bg'));
		add(bg);

		eduardo = new FlxSprite(240, 150).loadGraphic(Paths.image('channelsin/wiishop/characters/buy/eduardo'));
		eduardo.alpha = 0.5;
		add(eduardo);

		gf = new FlxSprite(225, 350).loadGraphic(Paths.image('channelsin/wiishop/characters/buy/gf_peachcrown'));
		gf.alpha = 0.5;
		add(gf);

		arrowRight = new FlxSprite(1170, 330).loadGraphic(Paths.image('channelsin/wiishop/characters/arrowRight'));
		arrowRight.alpha = 0.5;
		//add(arrowRight);

		arrowLeft = new FlxSprite(20, 330).loadGraphic(Paths.image('channelsin/wiishop/characters/arrowLeft'));
		arrowLeft.alpha = 0.5;
		add(arrowLeft);

		super.create();
	}

	override function update(elapsed:Float)
	{
		if (FlxG.mouse.overlaps(eduardo))
		{
			eduardo.alpha = 1;
            if (FlxG.mouse.justPressed)  
            {
				WiiShopChannel.pressSound.play();
                FlxG.switchState(new EduardoPage());				
			}
		}
		if (!FlxG.mouse.overlaps(eduardo))
		{
			eduardo.alpha = 0.5;
		}

		if (FlxG.mouse.overlaps(gf))
		{
			gf.alpha = 1;
            if (FlxG.mouse.justPressed)  
            {
				WiiShopChannel.pressSound.play();
                FlxG.switchState(new GFPage());				
			}
		}
		if (!FlxG.mouse.overlaps(gf))
		{
			gf.alpha = 0.5;
		}

		if (FlxG.mouse.overlaps(arrowLeft))
		{
			arrowRight.alpha = 1;
            if (FlxG.mouse.justPressed)  
            {
				WiiShopChannel.pressSound.play();
                FlxG.switchState(new WiiShopCharacters());				
			}
		}
		if (!FlxG.mouse.overlaps(arrowLeft))
		{
			arrowLeft.alpha = 0.5;
		}

		if (controls.LEFT)
		{
			WiiShopChannel.pressSound.play();
        	FlxG.switchState(new WiiShopCharacters());	
		}

		super.update(elapsed);
	}
}