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

class CreditsPage extends MusicBeatState
{
    var bg:FlxSprite;

    var select:FlxText;

    var descTextCaster:FlxText;
    var descTextBole:FlxText;
    var descTextSimilirity:FlxText;

    var caster:FlxSprite;
    var similirity:FlxSprite;    
    var bole:FlxSprite;

    var casterLogo:FlxSprite;
    var similirityLogo:FlxSprite;    
    var boleLogo:FlxSprite;

	override public function create()
	{
		#if windows
		// Updating Discord Rich Presence
		DiscordClient.changePresence("Viewing Credits :)))", null);
		#end

		if (!FlxG.sound.music.playing)
		{
			FlxG.sound.playMusic(Paths.music('CreditsMusic'), 1, true);
		}

		bg = new FlxSprite(0, 0).loadGraphic(Paths.image('menuBG'));
		add(bg);

		caster = new FlxSprite(20, 140);
        caster.alpha = 0.5;
		caster.frames = Paths.getSparrowAtlas('credits/caster');
		caster.animation.addByPrefix('Normal', 'caster', 24, false);
		caster.animation.play('Normal');
        add(caster);

		similirity = new FlxSprite(470, 210);
        similirity.alpha = 0.5;
		similirity.frames = Paths.getSparrowAtlas('credits/similirity');
		similirity.animation.addByPrefix('Normal', 'similirtiy', 24, false);
		similirity.animation.play('Normal');
        add(similirity);

		bole = new FlxSprite(780, 120);
        bole.alpha = 0.5;
		bole.frames = Paths.getSparrowAtlas('credits/bole');
        bole.setGraphicSize(Std.int(bole.width * 0.65));
		bole.animation.addByPrefix('Normal', 'bole', 24, false);
		bole.animation.play('Normal');
        add(bole);

		casterLogo = new FlxSprite(80, 470).loadGraphic(Paths.image('credits/logo/caster'));
        casterLogo.setGraphicSize(Std.int(casterLogo.width * 0.5));

		boleLogo = new FlxSprite(400, 500).loadGraphic(Paths.image('credits/logo/bole'));
        boleLogo.setGraphicSize(Std.int(boleLogo.width * 0.5));

		similirityLogo = new FlxSprite(90, 470).loadGraphic(Paths.image('credits/logo/similirity'));
        similirityLogo.setGraphicSize(Std.int(similirityLogo.width * 0.5));


		select = new FlxText(50, 100, 1180, "Select Your Favorite Developer", 32);
		select.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		select.scrollFactor.set();
		select.borderSize = 2.4;
		add(select);

		descTextCaster = new FlxText(50, 650, 1180, "Artist", 32);
		descTextCaster.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		descTextCaster.scrollFactor.set();
		descTextCaster.borderSize = 2.4;

		descTextBole = new FlxText(50, 650, 1180, "Coder and designer", 32);
		descTextBole.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		descTextBole.scrollFactor.set();
		descTextBole.borderSize = 2.4;

		descTextSimilirity = new FlxText(50, 650, 1180, "Code helper", 32);
		descTextSimilirity.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		descTextSimilirity.scrollFactor.set();
		descTextSimilirity.borderSize = 2.4;

		super.create();
    }

	override function update(elapsed:Float)
	{
		if (FlxG.mouse.overlaps(caster))
		{
			caster.alpha = 1;
            add(descTextCaster);
            add(casterLogo);
            if (FlxG.mouse.justPressed)  
            {
			    fancyOpenURL("https://www.youtube.com/channel/UCsc8Ntie-VucCdkXRFMgJTw");
            }
		}
		if (!FlxG.mouse.overlaps(caster))
		{
			caster.alpha = 0.5;
            remove(descTextCaster);
            remove(casterLogo);
		}

		if (FlxG.mouse.overlaps(bole))
		{
			bole.alpha = 1;
            add(descTextBole);
            add(boleLogo);
            if (FlxG.mouse.justPressed)  
            {
			    fancyOpenURL("https://www.youtube.com/channel/UCmlrNPWEuOKKI6HmrhycjSg");
            }
		}
		if (!FlxG.mouse.overlaps(bole))
		{
			bole.alpha = 0.5;
            remove(descTextBole);
            remove(boleLogo);
		}

		if (FlxG.mouse.overlaps(similirity))
		{
			similirity.alpha = 1;
            add(descTextSimilirity);
            add(similirityLogo);
            if (FlxG.mouse.justPressed)  
            {
			    fancyOpenURL("https://www.youtube.com/channel/UCZrKO2hfFwvvedhksJuIL8g");
            }
		}
		if (!FlxG.mouse.overlaps(similirity))
		{
			similirity.alpha = 0.5;
            remove(descTextSimilirity);
            remove(similirityLogo);
		}

		if (controls.BACK)
		{
			FlxG.sound.music.fadeOut(0.5);
			FlxG.sound.play(Paths.sound('BackSoundWii'));
            bg.alpha -= 0.5;
            caster.alpha -= 0.5;
            bole.alpha -= 0.5;
            similirity.alpha -= 0.5;
			new FlxTimer().start(1, function(tmr:FlxTimer)
			{
				FlxG.switchState(new WiiMenu());
			    FlxG.sound.music.stop();                
			});	
		}

		super.update(elapsed);
    }
}