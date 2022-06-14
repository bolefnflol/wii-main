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

class EduardoPage extends MusicBeatState
{
    var bg:FlxSprite;
    var buyNow:FlxSprite;
    var owned:FlxSprite;

    var eduardoPage:FlxSprite;
    var blackScreen:FlxSprite;

	var bought:FlxText;

	var notEnough:FlxText;

	var eduardoAmount:Int = 1000;
	var alreadyBought:FlxText;

	public static var boughtEduardo:Bool = false;

	var notEnoughText:FlxText;

	override public function create()
	{
		bg = new FlxSprite(-2, 0).loadGraphic(Paths.image('channelsin/wiishop/characters/buyingState/BG'));
		add(bg);

		eduardoPage = new FlxSprite(50, 170).loadGraphic(Paths.image('channelsin/wiishop/characters/buyingState/chars/EDUARDO'));
		add(eduardoPage);

		buyNow = new FlxSprite(460, 610).loadGraphic(Paths.image('channelsin/wiishop/characters/buyingState/buyNow'));
        buyNow.alpha = 0.5;
		add(buyNow);

		notEnoughText = new FlxText("Not enough Wii Points. You Have: " + WiiShopChannel.wiiPoints + "Wii Points");

		owned = new FlxSprite(-15, 0).loadGraphic(Paths.image('channelsin/wiishop/owned'));
		owned.alpha = 0.4;

		blackScreen = new FlxSprite(0, 0).makeGraphic(1920, 1920, FlxColor.BLACK);
		blackScreen.alpha = 0.55;

		super.create();
    }

	function Bought()
	{
		add(blackScreen);
		bought = new FlxText("Just bought Eduardo!");
		bought.setFormat(Paths.font("vcr.ttf"), 80, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE,FlxColor.BLACK);
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
            FlxG.switchState(new WiiShopCharacters2());
        }

		if (FlxG.mouse.overlaps(buyNow))
		{
			buyNow.alpha = 1;
			if (FlxG.mouse.justPressed)  
			{
				if (WiiShopChannel.wiiPoints >= eduardoAmount)
				{
					if (FlxG.save.data.boughtEduardo == false)
					{
						Bought();
						boughtEduardo = true;
						SelectYourPlayableChar.displayEduardo = true;
						WiiShopChannel.wiiPoints -= eduardoAmount;
						save();
						FlxG.save.data.displayEduardo = true;
					}
					else if (FlxG.save.data.boughtEduardo == true)
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
		if (boughtEduardo == true)
		{
			add(owned);
		}

		super.update(elapsed);

		FlxG.save.data.boughtEduardo = boughtEduardo;
    }

	public static function checkIfBought():Bool
	{
		if (FlxG.save.data.boughtEduardo != null)
			return FlxG.save.data.boughtEduardo;

		return boughtEduardo;
	}

	function save()
	{
		FlxG.save.data.boughtEduardo = boughtEduardo;
		// flush() actually saves whatever data you've set to local storage
		FlxG.save.flush();
	}
}