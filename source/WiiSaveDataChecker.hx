package;

import flixel.FlxG;

class WiiSaveDataChecker extends MusicBeatState
{
    public static function checkSaveData()
    {
		//currency
		if (FlxG.save.data.wiiPoints != null)
			WiiShopChannel.wiiPoints = FlxG.save.data.wiiPoints;
		if (FlxG.save.data.healthGainers != null)
			PowerUps.healthGainers = FlxG.save.data.healthGainers;

		//characters!!!
		if (FlxG.save.data.boughtBfWithMarioHat != null)
			BfBuyingPage.boughtBfWithMarioHat = FlxG.save.data.boughtBfWithMarioHat;

		if (FlxG.save.data.boughtPICOWithLUIGIHat != null)
			PicoPage.boughtPICOWithLUIGIHat = FlxG.save.data.boughtPICOWithLUIGIHat;

		if (FlxG.save.data.boughtSPOOKYHats != null)
			SpookyPage.boughtSPOOKYHats = FlxG.save.data.boughtSPOOKYHats;

		if (FlxG.save.data.boughtEduardo != null)
			EduardoPage.boughtEduardo = FlxG.save.data.boughtEduardo;

		if (FlxG.save.data.boughtgfCrown != null)
			GFPage.boughtgfCrown = FlxG.save.data.boughtgfCrown;


		//displaying characters
		if (FlxG.save.data.displayBf != null)
			SelectYourPlayableChar.displayBf = FlxG.save.data.displayBf;

		if (FlxG.save.data.displayPico != null)
			SelectYourPlayableChar.displayPico = FlxG.save.data.displayPico;

		if (FlxG.save.data.displaySpooky != null)
			SelectYourPlayableChar.displaySpooky = FlxG.save.data.displaySpooky;

		if (FlxG.save.data.displayEduardo != null)
			SelectYourPlayableChar.displayEduardo = FlxG.save.data.displayEduardo;

		if (FlxG.save.data.displayGf != null)
			SelectYourPlayableChar.displayGf = FlxG.save.data.displayGf;

		//actually owning characters lol

		//promo codes
		if (FlxG.save.data.promoCodeConsole != null)
			WiiShopChannel.promoCodeConsole = FlxG.save.data.promoCodeConsole;

		if (FlxG.save.data.promoCodebolefnf != null)
			WiiShopChannel.promoCodebolefnf = FlxG.save.data.promoCodebolefnf;

		if (FlxG.save.data.promoCodeitswariotime != null)
			WiiShopChannel.promoCodeitswariotime = FlxG.save.data.promoCodeitswariotime;

		if (FlxG.save.data.promoCodewahoo != null)
			WiiShopChannel.promoCodewahoo = FlxG.save.data.promoCodewahoo;

		if (FlxG.save.data.promoCodeplayer != null)
			WiiShopChannel.promoCodeplayer = FlxG.save.data.promoCodeplayer;

		if (FlxG.save.data.promoCodeA != null)
			WiiShopChannel.promoCodeA = FlxG.save.data.promoCodeA;

		limitedCharSaveChecker();
    }

    public static function limitedCharSaveChecker()
	{
		if (FlxG.save.data.promoCodeplayer != null)
			WiiShopChannel.promoCodeplayer = FlxG.save.data.promoCodeplayer;
	}
}