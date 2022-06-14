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

class PicoPage extends MusicBeatState
{
    var bg:FlxSprite;
    var buyNow:FlxSprite;
    var owned:FlxSprite;

    var blackScreen:FlxSprite;

    var picoPage:FlxSprite;

	var bought:FlxText;
	var notEnough:FlxText;
	var alreadyBought:FlxText;

	var picoHatAmount:Int = 100;
	public static var boughtPICOWithLUIGIHat:Bool = false;

	override public function create()
	{
		bg = new FlxSprite(-2, 0).loadGraphic(Paths.image('channelsin/wiishop/characters/buyingState/BG'));
		add(bg);

		picoPage = new FlxSprite(50, 170).loadGraphic(Paths.image('channelsin/wiishop/characters/buyingState/chars/PICO'));
		add(picoPage);

		buyNow = new FlxSprite(460, 610).loadGraphic(Paths.image('channelsin/wiishop/characters/buyingState/buyNow'));
        buyNow.alpha = 0.5;
		add(buyNow);

		blackScreen = new FlxSprite(0, 0).makeGraphic(1920, 1920, FlxColor.BLACK);
		blackScreen.alpha = 0.55;

		owned = new FlxSprite(-15, 0).loadGraphic(Paths.image('channelsin/wiishop/owned'));
		owned.alpha = 0.4;

		super.create();
    }

	function Bought()
	{
		add(blackScreen);
		bought = new FlxText("Just bought Pico with the Luigi Hat!");
		bought.setFormat(Paths.font("vcr.ttf"), 60, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE,FlxColor.BLACK);
		bought.screenCenter();
		add(bought);

		new FlxTimer().start(3, function(tmr:FlxTimer)
		{
			remove(bought);
			remove(blackScreen);
		});

		trace("bought");
	}

	function notEnoughFunction()
	{
		add(blackScreen);
		notEnough = new FlxText("Can't buy: " + "You have " + WiiShopChannel.wiiPoints + " Wii Points");
		notEnough.setFormat(Paths.font("vcr.ttf"), 46, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE,FlxColor.BLACK);
		notEnough.screenCenter();
		add(notEnough);

		new FlxTimer().start(3, function(tmr:FlxTimer)
		{
			remove(notEnough);
			remove(blackScreen);
		});

		trace("not enogh");
	}

	function alreadyBoughtFunction()
	{
		add(blackScreen);
		alreadyBought = new FlxText("You Already Bought this Character!");
		alreadyBought.setFormat(Paths.font("vcr.ttf"), 50, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE,FlxColor.BLACK);
		alreadyBought.screenCenter();
		add(alreadyBought);

		new FlxTimer().start(3, function(tmr:FlxTimer)
		{
			remove(blackScreen);
			remove(alreadyBought);
		});

		trace("alredy gbnoh");
	}

	override function update(elapsed:Float)
	{
        if (FlxG.keys.justPressed.ESCAPE)   
        {
			WiiShopChannel.backSound.play();
            FlxG.switchState(new WiiShopCharacters());
        }

		if (FlxG.mouse.overlaps(buyNow))
		{
			buyNow.alpha = 1;
            if (FlxG.mouse.justPressed)  
            {
				if (WiiShopChannel.wiiPoints >= picoHatAmount)
				{
					if (FlxG.save.data.boughtPICOWithLUIGIHat == false)
					{
						Bought();
						boughtPICOWithLUIGIHat = true;
						SelectYourPlayableChar.displayPico = true;
						WiiShopChannel.wiiPoints -= picoHatAmount;
						save();
						FlxG.save.data.displayPico = true;
					}
					else if (FlxG.save.data.boughtPICOWithLUIGIHat == true)
					{
						alreadyBoughtFunction();
					}
				}
				else
				{
					notEnoughFunction();
				}
			}
		}
		if (!FlxG.mouse.overlaps(buyNow))
		{
			buyNow.alpha = 0.5;
		}

		if (boughtPICOWithLUIGIHat == true)
		{
			add(owned);
		}

		super.update(elapsed);

		FlxG.save.data.boughtPICOWithLUIGIHat = boughtPICOWithLUIGIHat;
    }

	public static function checkIfBought():Bool
	{
		if (FlxG.save.data.boughtPICOWithLUIGIHat != null)
			return FlxG.save.data.boughtPICOWithLUIGIHat;

		return boughtPICOWithLUIGIHat;
	}

	function save()
	{
		FlxG.save.data.boughtPICOWithLUIGIHat = boughtPICOWithLUIGIHat;
		// flush() actually saves whatever data you've set to local storage
		FlxG.save.flush();
	}
}