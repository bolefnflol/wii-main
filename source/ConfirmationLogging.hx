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

class ConfirmationLogging extends MusicBeatState
{
	public var bg:FlxSprite;
	public var continueButton:FlxSprite;
	public var backButton:FlxSprite;

	public var txt:FlxText;

	override function create()
	{
        bg = new FlxSprite(-30, -20).loadGraphic(Paths.image("gamejolt/loginBg2"));
		add(bg);

        continueButton = new FlxSprite(140, 560).loadGraphic(Paths.image("gamejolt/continueButton"));
		continueButton.alpha = 1 / 2;
		add(continueButton);

        backButton = new FlxSprite((continueButton.x * 5), continueButton.y).loadGraphic(Paths.image("gamejolt/backButton"));
		backButton.alpha = continueButton.alpha;
		add(backButton);

		txt = new FlxText(500, 410, '' + FlxG.save.data.userName);
		txt.color = FlxColor.WHITE;
		txt.size = 70;
		txt.borderColor = FlxColor.BLACK;
		txt.borderSize = 9;
		add(txt);

		super.create();
	}

	override function update(elapsed:Float)
	{
		if (FlxG.mouse.overlaps(continueButton))
		{
            continueButton.alpha = 1;
            if (FlxG.mouse.justPressed)
            {
				FlxG.save.data.loggedInToGameJolt = true;
				if (FlxG.save.data.loggedInToGameJolt)		
					Trophies.unlockTrophy(164455);	
				FlxG.switchState(new WiiMenu());		
            }	
		}
		if (!FlxG.mouse.overlaps(continueButton))
		{
            continueButton.alpha = 1 / 2;			
		}

		if (FlxG.mouse.overlaps(backButton))
		{
            backButton.alpha = 1;
            if (FlxG.mouse.justPressed)
            {
				FlxG.switchState(new GamejoltLogInState());
            }
		}
		if (!FlxG.mouse.overlaps(backButton))
		{
            backButton.alpha = 1 / 2;			
		}	

		super.update(elapsed);
	}
}