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

class BfBuyingPage extends MusicBeatState
{
    var bg:FlxSprite;
    var buyNow:FlxSprite;
    public static var owned:FlxSprite;

    var bfPage:FlxSprite;

    var blackScreen:FlxSprite;
	var bought:FlxText;
	var notEnough:FlxText;
	var alreadyBought:FlxText;

	public static var bfHatAmount:Int = 50;

	public static var pointsIsEnough:Bool = WiiShopChannel.wiiPoints == bfHatAmount;

	public static var boughtBfWithMarioHat:Bool = false;

	var bfText:FlxText;
	var notEnoughText:FlxText;

	override public function create()
	{
		bg = new FlxSprite(-2, 0).loadGraphic(Paths.image('channelsin/wiishop/characters/buyingState/BG'));
		add(bg);

		bfPage = new FlxSprite(50, 160).loadGraphic(Paths.image('channelsin/wiishop/characters/buyingState/chars/BF'));
		add(bfPage);

		buyNow = new FlxSprite(460, 610).loadGraphic(Paths.image('channelsin/wiishop/characters/buyingState/buyNow'));
        buyNow.alpha = 0.5;
		add(buyNow);

		bfText = new FlxText("BF with a Mario Hat!");

		owned = new FlxSprite(-15, 0).loadGraphic(Paths.image('channelsin/wiishop/owned'));
		owned.alpha = 0.4;

		blackScreen = new FlxSprite(0, 0).makeGraphic(1920, 1920, FlxColor.BLACK);
		blackScreen.alpha = 0.55;

		super.create();
    }

	function Bought()
	{
		add(blackScreen);
		bought = new FlxText("Just bought BF with a Mario Hat!");
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
				if (WiiShopChannel.wiiPoints >= bfHatAmount)
				{
					if (FlxG.save.data.boughtBfWithMarioHat == false)
					{
						Bought();
						boughtBfWithMarioHat = true;
						SelectYourPlayableChar.displayBf = true;
						WiiShopChannel.wiiPoints -= bfHatAmount;
						save();
						FlxG.save.data.displayBf = true;
					}
					else if (FlxG.save.data.boughtBfWithMarioHat == true)
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

		if (boughtBfWithMarioHat == true)
		{
			add(owned);
		}
		super.update(elapsed);

		FlxG.save.data.boughtBfWithMarioHat = boughtBfWithMarioHat;
    }

	public static function checkIfBought():Bool
	{
		if (FlxG.save.data.boughtBfWithMarioHat != null)
			return FlxG.save.data.boughtBfWithMarioHat;

		return boughtBfWithMarioHat;
	}

	function save()
	{
		FlxG.save.data.boughtBfWithMarioHat = boughtBfWithMarioHat;
		// flush() actually saves whatever data you've set to local storage
		FlxG.save.flush();
	}
}