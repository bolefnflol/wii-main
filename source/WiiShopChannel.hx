package;

import Controls.KeyboardScheme;
import Section.SwagSection;
import Song.SwagSong;
import WiggleEffect.WiggleEffectType;
import flixel.FlxBasic;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxGame;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxSubState;
import flixel.addons.display.FlxGridOverlay;
import flixel.addons.effects.FlxTrail;
import flixel.addons.effects.FlxTrailArea;
import flixel.addons.effects.chainable.FlxEffectSprite;
import flixel.addons.effects.chainable.FlxWaveEffect;
import flixel.addons.transition.FlxTransitionableState;
import flixel.addons.ui.FlxInputText;
import flixel.graphics.FlxGraphic;
import flixel.graphics.atlas.FlxAtlas;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.input.keyboard.FlxKey;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.math.FlxRect;
import flixel.system.FlxAssets;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.ui.FlxBar;
import flixel.util.FlxCollision;
import flixel.util.FlxColor;
import flixel.util.FlxSort;
import flixel.util.FlxStringUtil;
import flixel.util.FlxTimer;
import haxe.EnumTools;
import haxe.Exception;
import haxe.Json;
import lime.app.Application;
import lime.graphics.Image;
import lime.media.AudioContext;
import lime.media.AudioManager;
import lime.utils.Assets;
import openfl.Lib;
import openfl.display.BitmapData;
import openfl.display.BlendMode;
import openfl.display.StageQuality;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import openfl.filters.ShaderFilter;
import openfl.geom.Matrix;
import openfl.ui.KeyLocation;
import openfl.ui.Keyboard;
import openfl.utils.AssetLibrary;
import openfl.utils.AssetManifest;
import openfl.utils.AssetType;

using StringTools;

#if cpp
import webm.WebmPlayer;
#end
#if windows
import Discord.DiscordClient;
#end
#if windows
import Sys;
import sys.FileSystem;
#end

class WiiShopChannel extends MusicBeatState {
	var bg:FlxSprite;
	var selection:FlxSprite;
	var bottomSelection:FlxSprite;

	var songsOverlapsprite:FlxSprite;
	var charactersOverlapsprite:FlxSprite;
	var menuOverlapsprite:FlxSprite;
	var guideOverlapsprite:FlxSprite;

	var songsSelectionsprite:FlxSprite;
	var charactersSelectionsprite:FlxSprite;
	var menuSelectionsprite:FlxSprite;
	var guideSelectionsprite:FlxSprite;

	public static var wiiPoints:Int = 0;

	var wiipointsText:FlxText;
	var blackScreen:FlxSprite;
	var promoCodes:FlxSprite;
	var powerUps:FlxSprite;

	public static var pressSound:FlxSound;
	public static var backSound:FlxSound;

	var passwordText:FlxInputText;
	var enterText:FlxText;

	var blackBox:FlxSprite;

	var shakeCam:Bool;
	var shakeCam2:Bool;

	var isEnteringPassWord:Bool = false;

	var wrongPass:Bool = false;

	// promo codes
	public static var promoCodeConsole:Bool = false;
	public static var promoCodebolefnf:Bool = false;
	public static var promoCodeitswariotime:Bool = false;
	public static var promoCodetypethisone:Bool = false;
	public static var promoCodewahoo:Bool = false;
	public static var promoCodeplayer:Bool = false;
	public static var promoCodeA:Bool = false;

	public static var wiiCursor:FlxSprite;

	override public function create() {
		#if windows
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In The Wii Shop Channel", null);
		#end

		if (!FlxG.sound.music.playing) {
			FlxG.sound.playMusic(Paths.music('WiiShopExtended'), 1, true);
		}

		songsSelectionsprite = new FlxSprite(94, 205).loadGraphic(Paths.image('channelsin/wiishop/overlap/main'));
		add(songsSelectionsprite);
		charactersSelectionsprite = new FlxSprite(708, 206).loadGraphic(Paths.image('channelsin/wiishop/overlap/main'));
		add(charactersSelectionsprite);
		menuSelectionsprite = new FlxSprite(50, 620).loadGraphic(Paths.image('channelsin/wiishop/overlap/bottom'));
		add(menuSelectionsprite);
		guideSelectionsprite = new FlxSprite(910, 615).loadGraphic(Paths.image('channelsin/wiishop/overlap/bottom'));
		add(guideSelectionsprite);

		bg = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/bg'));
		add(bg);

		selection = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/selection'));
		add(selection);

		bottomSelection = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/wiimenuandguide'));
		add(bottomSelection);

		songsOverlapsprite = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/selected/freeplaysongsselected'));
		songsOverlapsprite.visible = false;
		add(songsOverlapsprite);

		charactersOverlapsprite = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/selected/charactersselected'));
		charactersOverlapsprite.visible = false;
		add(charactersOverlapsprite);

		menuOverlapsprite = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/selected/wiimenu'));
		menuOverlapsprite.visible = false;
		add(menuOverlapsprite);

		guideOverlapsprite = new FlxSprite(0, 0).loadGraphic(Paths.image('channelsin/wiishop/selected/guide'));
		guideOverlapsprite.visible = false;
		add(guideOverlapsprite);

		wiipointsText = new FlxText(400, 620, "Wii Points: " + wiiPoints);
		wiipointsText.setFormat(Paths.font("contl.ttf"), 64, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(wiipointsText);

		blackScreen = new FlxSprite(0, 0).makeGraphic(1920, 1920, FlxColor.BLACK);
		blackScreen.alpha = 0;
		add(blackScreen);

		promoCodes = new FlxSprite(-320, 290);
		promoCodes.frames = Paths.getSparrowAtlas('channelsin/wiishop/PromoCodes');
		promoCodes.animation.addByIndices('idle', 'promo codes instance 1', [0], "", 24, true);
		promoCodes.animation.play('idle', true);
		promoCodes.alpha = 0.6;
		add(promoCodes);

		powerUps = new FlxSprite(-330, 400).loadGraphic(Paths.image('channelsin/wiishop/powerup'));
		add(powerUps);

		blackBox = new FlxSprite(-100, -100).makeGraphic(Std.int(FlxG.width * 0.5), Std.int(FlxG.height * 0.5), FlxColor.BLACK);
		blackBox.screenCenter();
		blackBox.scrollFactor.set();
		blackBox.visible = false;
		add(blackBox);

		enterText = new FlxText(0, 0, 0, "Enter Promo Code:", 40);
		enterText.setFormat('Pixel Arial 11 Bold', 40, FlxColor.WHITE, CENTER);
		enterText.screenCenter();
		enterText.y -= 100;
		enterText.visible = false;
		add(enterText);

		passwordText = new FlxInputText(0, 300, 550, '', 36, FlxColor.WHITE, FlxColor.BLACK);
		passwordText.fieldBorderColor = FlxColor.WHITE;
		passwordText.fieldBorderThickness = 3;
		passwordText.maxLength = 20;
		passwordText.screenCenter(X);
		passwordText.y += 75;
		passwordText.visible = false;
		add(passwordText);

		wiiCursor = new FlxSprite().loadGraphic(Paths.image('defaultCursor'));

		FlxG.mouse.load(wiiCursor.pixels);
		FlxG.mouse.visible = true;

		pressSound = new FlxSound().loadEmbedded(Paths.sound('Start'));

		backSound = new FlxSound().loadEmbedded(Paths.sound('BackSoundWii'));

		super.create();
	}

	override function update(elapsed:Float) 
	{
		FlxG.save.data.wiiPoints = wiiPoints;
		// songs
		if (FlxG.mouse.overlaps(songsSelectionsprite)) 
		{
			songsOverlapsprite.visible = true;
			if (FlxG.mouse.justPressed) {}
		}
		if (!FlxG.mouse.overlaps(songsSelectionsprite)) 
		{
			songsOverlapsprite.visible = false;
		}
		// songs end

		// characters
		if (FlxG.mouse.overlaps(charactersSelectionsprite)) 
		{
			charactersOverlapsprite.visible = true;
			if (FlxG.mouse.justPressed) 
			{
				pressSound.play();
				selectionOnlyFade();
				new FlxTimer().start(2, function(tmr:FlxTimer) 
				{
					FlxG.switchState(new SelectTypeOfChar());
				});
			}
		}
		if (!FlxG.mouse.overlaps(charactersSelectionsprite)) 	
		{
			charactersOverlapsprite.visible = false;
		}
		// characters end

		// wiimenu
		if (FlxG.mouse.overlaps(menuSelectionsprite)) 
		{
			menuOverlapsprite.visible = true;
			if (FlxG.mouse.justPressed) 
			{
				backSound.play();
				FlxG.sound.music.fadeOut(2);
				bottomOnlyFade();
				new FlxTimer().start(2, function(tmr:FlxTimer) {
					FlxG.switchState(new WiiMenu());
					FlxG.sound.music.stop();
				});
			}
		}
		if (!FlxG.mouse.overlaps(menuSelectionsprite)) 
		{
			menuOverlapsprite.visible = false;
		}
		// wiimenu end

		// guide
		if (FlxG.mouse.overlaps(guideSelectionsprite)) 
		{
			guideOverlapsprite.visible = true;
			if (FlxG.mouse.justPressed) 
			{
				pressSound.play();
				bottomOnlyFade();
				new FlxTimer().start(2, function(tmr:FlxTimer) {
					FlxG.switchState(new WiiShopChannelGuide());
				});
			}
		}
		if (!FlxG.mouse.overlaps(guideSelectionsprite)) 
		{
			guideOverlapsprite.visible = false;
		}
		// guide end

		// promocodes
		if (FlxG.mouse.overlaps(promoCodes)) 
		{
			FlxTween.tween(promoCodes, {x: -2}, 0.2);
			promoCodes.alpha = 1;
			if (FlxG.mouse.justPressed) 
			{
				pressSound.play();
				isEnteringPassWord = true;
				FlxTween.tween(blackScreen, {alpha: 0.4}, 0.4, {ease: FlxEase.expoOut});
				blackBox.visible = true;
				enterText.visible = true;
				passwordText.visible = true;
			}
		}
		if (!FlxG.mouse.overlaps(promoCodes)) 
		{
			FlxTween.tween(promoCodes, {x: -320}, 0.2);
			promoCodes.alpha = 0.6;
		}
		// promocodes end

		// powerups
		if (FlxG.mouse.overlaps(powerUps)) 
		{
			FlxTween.tween(powerUps, {x: -15}, 0.2);
			powerUps.alpha = 1;
			if (FlxG.mouse.justPressed) 
			{
				pressSound.play();
				FlxG.switchState(new PowerUps());
			}
		}
		if (!FlxG.mouse.overlaps(powerUps)) 
		{
			FlxTween.tween(powerUps, {x: -330}, 0.2);
			powerUps.alpha = 0.6;
		}
		// powerups end

		if (FlxG.keys.justPressed.ONE) {
			wiiPoints += 5000;
			updateWiiPointsText();
			FlxG.save.flush();
		}

		if (FlxG.keys.justPressed.ESCAPE && isEnteringPassWord) {
			backSound.play();
			FlxTween.tween(blackScreen, {alpha: 0}, 0.4, {ease: FlxEase.expoOut});
			isEnteringPassWord = false;
			blackBox.visible = false;
			enterText.visible = false;
			passwordText.visible = false;
			passwordText.text = '';
		}

		// good job on finding this fnf wii players
		if (passwordText.text != "" && FlxG.keys.justPressed.ENTER) {
			isEnteringPassWord = false;
			blackBox.visible = false;
			enterText.visible = false;
			passwordText.visible = false;
			switch (passwordText.text) {
				case 'console':
					if (FlxG.save.data.promoCodeConsole == false) {
						promoCodeValid(100, true, false, false);
						promoCodeConsole = true;
					} else if (FlxG.save.data.promoCodeConsole == true) {
						isUsedPromoCode();
					}
				case 'bolefnf':
					if (FlxG.save.data.promoCodebolefnf == false) {
						promoCodeValid(10, false, true, false);
						promoCodebolefnf = true;
					} else if (FlxG.save.data.promoCodebolefnf == true) {
						isUsedPromoCode();
					}
				case 'itswariotime':
					if (FlxG.save.data.promoCodeitswariotime == false) {
						promoCodeValid(100, true, false, false);
						promoCodeitswariotime = true;
					} else if (FlxG.save.data.promoCodeitswariotime == true) {
						isUsedPromoCode();
					}
				case 'typethisone':
					if (FlxG.save.data.promoCodetypethisone == false) {
						promoCodeValid(-500, false, true, false);
						promoCodetypethisone = true;
					} else if (FlxG.save.data.promoCodetypethisone == true) {
						isUsedPromoCode();
					}
				case 'wahoo':
					if (FlxG.save.data.promoCodewahoo == false) {
						promoCodeValid(150, true, false, false);
						promoCodewahoo = true;
					} else if (FlxG.save.data.promoCodetypewahoo == true) {
						isUsedPromoCode();
					}
				case 'player':
					if (FlxG.save.data.promoCodeplayer == false) {
						promoCodeValid(-100, false, true, false);
						promoCodeplayer = true;
					} else if (FlxG.save.data.promoCodeplayer == true) {
						isUsedPromoCode();
					}
				case 'a':
					if (FlxG.save.data.promoCodeA == false) 
					{
						promoCodeValid(9999, false, false, true);
						promoCodeA = true;
					} 
					else if (FlxG.save.data.promoCodeA == true) 
					{
						isUsedPromoCode();
					}
				default:
					wrongPass = true;
			}
		}

		if (wrongPass) 
		{
			FlxG.sound.play(Paths.sound('WrongCode'));
			passwordText.text = '';
			shakeCam = true;
			wrongPass = false;
			FlxTween.tween(blackScreen, {alpha: 0}, 0.4, {ease: FlxEase.expoOut});
			isEnteringPassWord = false;
			blackBox.visible = false;
			enterText.visible = false;
			passwordText.visible = false;
			passwordText.text = '';
			new FlxTimer().start(0.6, function(tmr:FlxTimer) {
				shakeCam = false;
			});
		}

		if (shakeCam) 
		{
			FlxG.camera.shake(0.05, 0.3);
		}

		if (shakeCam2) 
		{
			FlxG.camera.shake(0.01, 0.05);
		}

		FlxG.save.data.promoCodeConsole = promoCodeConsole;
		FlxG.save.data.promoCodebolefnf = promoCodebolefnf;
		FlxG.save.data.promoCodeitswariotime = promoCodeitswariotime;
		FlxG.save.data.promoCodetypethisone = promoCodetypethisone;
		FlxG.save.data.promoCodewahoo = promoCodewahoo;
		FlxG.save.data.promoCodeplayer = promoCodeplayer;
		FlxG.save.data.promoCodeA = promoCodeA;

		super.update(elapsed);
	}

	function bottomOnlyFade() 
	{
		new FlxTimer().start(0.1, function(tmr:FlxTimer) 
		{
			selection.alpha -= 0.1;
			wiipointsText.alpha -= 0.1;
			if (selection.alpha > 0 && wiipointsText.alpha > 0) 
			{
				tmr.reset();
			}
		});
	}

	function selectionOnlyFade() 
	{
		new FlxTimer().start(0.1, function(tmr:FlxTimer) 
		{
			bottomSelection.alpha -= 0.1;
			wiipointsText.alpha -= 0.1;
			if (bottomSelection.alpha > 0 && wiipointsText.alpha > 0) 
			{
				tmr.reset();
			}
		});
	}

	function updateWiiPointsText() 
	{
		remove(wiipointsText);
		wiipointsText = new FlxText(400, 620, "Wii Points: " + wiiPoints);
		wiipointsText.setFormat(Paths.font("contl.ttf"), 64, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(wiipointsText);
	}

	function promoCodeValid(amount:Int, ?includeGoodSprite:Bool, ?includeBadSprite:Bool, ?includeEpicSprite:Bool) // im proud of this code (bole)
	{
		var goodSprite:FlxSprite = new FlxSprite().loadGraphic(Paths.image('promoCodes/goodSprite'));
		var badSprite:FlxSprite = new FlxSprite().loadGraphic(Paths.image('promoCodes/badSprite'));
		var epicSprite:FlxSprite = new FlxSprite().loadGraphic(Paths.image('promoCodes/epicSprite'));
		var receivedText:FlxText;

		receivedText = new FlxText("You Just Received: " + amount + " Wii Points!");
		receivedText.setFormat('Pixel Arial 11 Bold', 40, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		receivedText.screenCenter(X);
		receivedText.y += 100;
		add(receivedText);

		shakeCam2 = true;

		wiiPoints += amount;
		FlxG.save.flush();

		new FlxTimer().start(0.4, function(tmr:FlxTimer) {
			shakeCam2 = false;
		});

		FlxG.sound.play(Paths.sound('correctCode'));

		updateWiiPointsText();

		if (includeGoodSprite) {
			add(goodSprite);
			remove(badSprite);	
			remove(epicSprite);
		}

		if (includeBadSprite) {
			remove(goodSprite);
			add(badSprite);
			remove(epicSprite);
		}

		if (includeEpicSprite) {
			remove(goodSprite);
			remove(badSprite);
			add(epicSprite);
		}

		new FlxTimer().start(2, function(tmr:FlxTimer) {
			FlxTween.tween(receivedText, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
			FlxTween.tween(goodSprite, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
			FlxTween.tween(badSprite, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
			FlxTween.tween(epicSprite, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
			FlxTween.tween(blackScreen, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
		});
	}

	function isUsedPromoCode() {
		FlxG.sound.play(Paths.sound('WrongCode'));

		var badSprite:FlxSprite = new FlxSprite().loadGraphic(Paths.image('promoCodes/badSprite'));

		var alreadyUsedText:FlxText;

		alreadyUsedText = new FlxText("Code Already Used!");
		alreadyUsedText.setFormat('Pixel Arial 11 Bold', 40, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		alreadyUsedText.screenCenter(X);
		alreadyUsedText.y += 100;
		alreadyUsedText.scrollFactor.set();
		alreadyUsedText.borderSize = 4;
		alreadyUsedText.borderQuality = 2;
		add(alreadyUsedText);

		add(badSprite);

		shakeCam2 = true;

		new FlxTimer().start(0.4, function(tmr:FlxTimer) {
			shakeCam2 = false;
		});

		new FlxTimer().start(2, function(tmr:FlxTimer) {
			FlxTween.tween(alreadyUsedText, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
			FlxTween.tween(badSprite, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
			FlxTween.tween(blackScreen, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
		});
	}

	function getWiiPoints():Int {
		if (FlxG.save.data.wiiPoints != null)
			return FlxG.save.data.wiiPoints;

		return wiiPoints;
	}

	function savePoints(wiiPoints:Int) {
		FlxG.save.data.wiiPoints = wiiPoints;
		// flush() actually saves whatever data you've set to local storage
		FlxG.save.flush();
	}
}
