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

class LimitedChars extends MusicBeatState
{
	var bg:FlxSprite;
	var noCurrentSkins:FlxText;
	var noCurrentSkins1:FlxText;
	public var noCurrentSkinsSine:Float = 0;

	override public function create()
	{
		#if windows
		// Updating Discord Rich Presence
		DiscordClient.changePresence("Limited Characters Menu", null);
		#end

		bg = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/characters/bg'));
		add(bg);

		noCurrentSkins = new FlxText("No limited skins available. Come back Later!");
		noCurrentSkins.setFormat(Paths.font("vcr.ttf"), 42, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE,FlxColor.BLACK);
		noCurrentSkins.screenCenter();
		noCurrentSkins.scrollFactor.set();
		noCurrentSkins.borderSize = 4;
		noCurrentSkins.borderQuality = 2;

		noCurrentSkins1 = new FlxText("There is a skin available. aaaaaaaaaaaaaaaa");
		noCurrentSkins1.setFormat(Paths.font("vcr.ttf"), 42, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE,FlxColor.BLACK);
		noCurrentSkins1.screenCenter();
		noCurrentSkins1.scrollFactor.set();
		noCurrentSkins1.borderSize = 4;
		noCurrentSkins1.borderQuality = 2;

		//if (!Main.limitedSkinTime1)
		//{
		//	remove(noCurrentSkins1);
		//	add(noCurrentSkins);
		//}
		//else if (Main.limitedSkinTime1)	
		//{
		//	add(noCurrentSkins1);
		//	remove(noCurrentSkins);
		//}

		super.create();
	}

	override function update(elapsed:Float)
	{
		if(noCurrentSkins.visible) 
		{
			noCurrentSkinsSine += 180 * elapsed;
			noCurrentSkins.alpha = 1 - Math.sin((Math.PI * noCurrentSkinsSine) / 180);
			noCurrentSkins1.alpha = 1 - Math.sin((Math.PI * noCurrentSkinsSine) / 180);
		}

        if (FlxG.keys.justPressed.ESCAPE)   
        {
            FlxG.switchState(new SelectTypeOfChar());
        }

		super.update(elapsed);
	}
}