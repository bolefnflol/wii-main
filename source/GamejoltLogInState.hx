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
import flixel.addons.api.FlxGameJolt;

class GamejoltLogInState extends MusicBeatState
{
	public static var loggedInToGameJolt:Bool;

	public var bg:FlxSprite;

	public var loginButton:FlxSprite;
	public var backButton:FlxSprite;

	public static var userInput:FlxInputText;
	public static var tokenInput:FlxInputText;

	public static var userName:String = FlxGameJolt.username;
	public static var userToken:String = FlxGameJolt.usertoken;

	override function create()
	{
		FlxG.mouse.visible = true;

        bg = new FlxSprite(-30, -20).loadGraphic(Paths.image("gamejolt/loginBg"));
		add(bg);

        loginButton = new FlxSprite(140, 560).loadGraphic(Paths.image("gamejolt/loginButton"));
		loginButton.alpha = 1 / 2;
		add(loginButton);

        backButton = new FlxSprite((loginButton.x * 5), loginButton.y).loadGraphic(Paths.image("gamejolt/backButton"));
		backButton.alpha = loginButton.alpha;
		add(backButton);

		userInput = new FlxInputText(10, 440, 550, '', 36, FlxColor.GREEN, FlxColor.GRAY);//bolefnf
		userInput.fieldBorderColor = FlxColor.WHITE;
		userInput.fieldBorderThickness = 3;
		add(userInput);

		tokenInput = new FlxInputText(720, 440, 550, '', 36, FlxColor.GREEN, FlxColor.GRAY);//QuJDyh
		tokenInput.fieldBorderColor = FlxColor.WHITE;
		tokenInput.fieldBorderThickness = 3;
		add(tokenInput);

		super.create();
	}

	override function update(elapsed:Float)
	{
		if (FlxG.mouse.overlaps(loginButton))
		{
            loginButton.alpha = 1;
            if (FlxG.mouse.justPressed)
            {
				userName = userInput.text;
				userToken = tokenInput.text;
				loggingInShit(userName, userToken);
            }
		}
		if (!FlxG.mouse.overlaps(loginButton))
		{
            loginButton.alpha = 1 / 2;			
		}

		if (FlxG.mouse.overlaps(backButton))
		{
            backButton.alpha = 1;
            if (FlxG.mouse.justPressed)
            {
				FlxG.switchState(new WiiMenu());
            }
		}
		if (!FlxG.mouse.overlaps(backButton))
		{
            backButton.alpha = 1 / 2;			
		}		

		FlxG.save.data.loggedInToGameJolt = loggedInToGameJolt;
		FlxG.save.data.userName = userName;
		FlxG.save.data.userToken = userToken;

		super.update(elapsed);
	}

	function loggingInShit(userThing:String, tokenThing:String)
	{
		userThing = FlxGameJolt.username;
		tokenThing = FlxGameJolt.usertoken;
		if (userThing != null && tokenThing != null)
		{
			trace(FlxGameJolt.username);
			FlxGameJolt.authUser(userThing, tokenThing);
			FlxG.switchState(new ConfirmationLogging());
		}
		else
		{
			var b:FlxSprite = new FlxSprite(0, 0).makeGraphic(1280, 720, FlxColor.BLACK);
			b.alpha = 0.5;
			add(b);
			var e:FlxText = new FlxText(0, 0, 'Username Does not exist.');
			e.screenCenter();
			e.size = 34;
			e.borderColor = FlxColor.BLACK;
			e.borderSize = 3;
			add(e);
			trace("Username Does not exist");

			new FlxTimer().start(2, function(tmr:FlxTimer)
			{
				remove(e);
				remove(b);
			});
		}
	}

	public static function saveData()
	{
		if (FlxG.save.data.loggedInToGameJolt)
		{
			FlxGameJolt.init(711617, "a08bbfbd9dd08867e3bef0e035ec7e5c", false);
			FlxGameJolt.authUser(FlxG.save.data.userName, FlxG.save.data.userToken);
			trace("authUser");
		}
		else 	
			FlxGameJolt.init(711617, "a08bbfbd9dd08867e3bef0e035ec7e5c", false);

		if (FlxG.save.data.loggedInToGameJolt != null)
			loggedInToGameJolt = FlxG.save.data.loggedInToGameJolt;

		if (FlxG.save.data.userName != null)
			userName = FlxG.save.data.userName;

		if (FlxG.save.data.userToken != null)
			userToken = FlxG.save.data.userToken;

		if (FlxG.save.data.loggedInToGameJolt)
			trace("Logged In. Username: " + FlxG.save.data.userName + ", Token: " + FlxG.save.data.userToken);
		else 	
			trace("Not Logged In To GameJolt");

	}
}