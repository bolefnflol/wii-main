package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.animation.FlxBaseAnimation;
import flixel.graphics.frames.FlxAtlasFrames;

using StringTools;

class Character extends FlxSprite
{
	public var animOffsets:Map<String, Array<Dynamic>>;
	public var debugMode:Bool = false;

	public var isPlayer:Bool = false;
	public var curCharacter:String = 'bf';
	public var playerColor:String = "31B0D1";

	public var holdTimer:Float = 0;

	public function new(x:Float, y:Float, ?character:String = "bf", ?isPlayer:Bool = false)
	{
		super(x, y);

		animOffsets = new Map<String, Array<Dynamic>>();
		curCharacter = character;
		this.isPlayer = isPlayer;

		var tex:FlxAtlasFrames;
		antialiasing = true;

		switch (curCharacter)
		{
			case 'gf':
				tex = Paths.getSparrowAtlas('characters/GF_assets');
				frames = tex;
				animation.addByPrefix('cheer', 'GF Cheer', 24, false);
				animation.addByPrefix('singLEFT', 'GF left note', 24, false);
				animation.addByPrefix('singRIGHT', 'GF Right Note', 24, false);
				animation.addByPrefix('singUP', 'GF Up Note', 24, false);
				animation.addByPrefix('singDOWN', 'GF Down Note', 24, false);
				animation.addByIndices('sad', 'gf sad', [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12], "", 24, false);
				animation.addByIndices('danceLeft', 'GF Dancing Beat', [30, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14], "", 24, false);
				animation.addByIndices('danceRight', 'GF Dancing Beat', [15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29], "", 24, false);
				animation.addByIndices('hairBlow', "GF Dancing Beat Hair blowing", [0, 1, 2, 3], "", 24);
				animation.addByIndices('hairFall', "GF Dancing Beat Hair Landing", [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11], "", 24, false);
				animation.addByPrefix('scared', 'GF FEAR', 24);

				addOffset('cheer');
				addOffset('sad', -2, -2);
				addOffset('danceLeft', 0, -9);
				addOffset('danceRight', 0, -9);

				addOffset("singUP", 0, 4);
				addOffset("singRIGHT", 0, -20);
				addOffset("singLEFT", 0, -19);
				addOffset("singDOWN", 0, -20);
				addOffset('hairBlow', 45, -8);
				addOffset('hairFall', 0, -9);

				addOffset('scared', -2, -17);

				playAnim('danceRight');
				playerColor = "A5004D";

			case 'bf':
				var tex = Paths.getSparrowAtlas('characters/BOYFRIEND', 'shared');
				frames = tex;
				animation.addByPrefix('idle', 'BF idle dance', 24, false);
				animation.addByPrefix('singUP', 'BF NOTE UP0', 24, false);
				animation.addByPrefix('singLEFT', 'BF NOTE LEFT0', 24, false);
				animation.addByPrefix('singRIGHT', 'BF NOTE RIGHT0', 24, false);
				animation.addByPrefix('singDOWN', 'BF NOTE DOWN0', 24, false);
				animation.addByPrefix('singUPmiss', 'BF NOTE UP MISS', 24, false);
				animation.addByPrefix('singLEFTmiss', 'BF NOTE LEFT MISS', 24, false);
				animation.addByPrefix('singRIGHTmiss', 'BF NOTE RIGHT MISS', 24, false);
				animation.addByPrefix('singDOWNmiss', 'BF NOTE DOWN MISS', 24, false);
				animation.addByPrefix('hey', 'BF HEY', 24, false);
				animation.addByPrefix('firstDeath', "BF dies", 24, false);
				animation.addByPrefix('deathLoop', "BF Dead Loop", 24, true);
				animation.addByPrefix('deathConfirm', "BF Dead confirm", 24, false);
				animation.addByPrefix('scared', 'BF idle shaking', 24, false);
				animation.addByPrefix('hit', 'BF hit', 24, false);
				animation.addByPrefix('preAttack', 'bf pre attack', 24, false);
				animation.addByPrefix('attack', 'boyfriend attack', 24, false);
				animation.addByPrefix('dodge', 'boyfriend dodge', 24, false);
				addOffset('idle', -5);
				addOffset("singUP", -29, 27);
				addOffset("singRIGHT", -38, -7);
				addOffset("singLEFT", 12, -6);
				addOffset("singDOWN", -10, -50);
				addOffset("singUPmiss", -29, 27);
				addOffset("singRIGHTmiss", -30, 21);
				addOffset("singLEFTmiss", 12, 24);
				addOffset("singDOWNmiss", -11, -19);
				addOffset("hey", 7, 4);
				addOffset('firstDeath', 37, 11);
				addOffset('deathLoop', 37, 5);
				addOffset('deathConfirm', 37, 69);
				addOffset('scared', -4);
				addOffset('hit', 24, 19);
				addOffset('preAttack', -14, -40);
				addOffset('attack', 296, 270);
				addOffset('dodge', -4, 1);
				playAnim('idle');
				flipX = true;
				playerColor = "31b0d1";
			case 'wii':
				frames = Paths.getSparrowAtlas('characters/WiiAssets');
				animation.addByPrefix('idle', 'wii idle', 24);
				animation.addByPrefix('idleAlt', 'wii idle', 24);
				animation.addByPrefix('singUP', 'wii up', 24);
				animation.addByPrefix('singRIGHT', 'wii right', 24);
				animation.addByPrefix('singDOWN', 'wii down', 24);
				animation.addByPrefix('singLEFT', 'wii left', 24);
				animation.addByIndices('wiiThrowStart', 'wii throw', [0, 1, 2, 3, 4, 5], "", 24, false);
				animation.addByIndices('wiiThrow', 'wii throw', [6, 7, 8, 9, 10, 11], "", 24, false);
				animation.addByIndices('wiiThrowBringBack', 'wii throw', [11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0], "", 24, false);
				addOffset('idle');
				addOffset("singUP", 5, 80);
				addOffset("singRIGHT", -45, 27);
				addOffset("singLEFT", 60, 20);
				addOffset("singDOWN", -10, -70);
				addOffset("wiiThrowStart", 57, 12);
				addOffset("wiiThrow", 57, 12);
				addOffset("wiiThrowBringBack", 57, 12);
				playAnim('idle');
				playerColor = "c8dee2";
			case 'bfMarioHat':
				var tex = Paths.getSparrowAtlas('characters/wii_shop_chars/BoyFriend_Assets_WiiHat', 'shared');
				frames = tex;
				animation.addByPrefix('idle', 'BF idle dance', 24, false);
				animation.addByPrefix('singUP', 'BF NOTE UP0', 24, false);
				animation.addByPrefix('singLEFT', 'BF NOTE LEFT0', 24, false);
				animation.addByPrefix('singRIGHT', 'BF NOTE RIGHT0', 24, false);
				animation.addByPrefix('singDOWN', 'BF NOTE DOWN0', 24, false);
				animation.addByPrefix('singUPmiss', 'BF NOTE UP MISS', 24, false);
				animation.addByPrefix('singLEFTmiss', 'BF NOTE LEFT MISS', 24, false);
				animation.addByPrefix('singRIGHTmiss', 'BF NOTE RIGHT MISS', 24, false);
				animation.addByPrefix('singDOWNmiss', 'BF NOTE DOWN MISS', 24, false);
				animation.addByPrefix('hey', 'BF HEY', 24, false);
				animation.addByPrefix('firstDeath', "BF dies", 24, false);
				animation.addByPrefix('deathLoop', "BF Dead Loop", 24, true);
				animation.addByPrefix('deathConfirm', "BF Dead confirm", 24, false);
				animation.addByPrefix('scared', 'BF idle shaking', 24, false);
				animation.addByPrefix('hit', 'BF hit', 24, false);
				animation.addByPrefix('preAttack', 'bf pre attack', 24, false);
				animation.addByPrefix('attack', 'boyfriend attack', 24, false);
				animation.addByPrefix('dodge', 'boyfriend dodge', 24, false);
				addOffset('idle', -5);
				addOffset("singUP", -41, 76);
				addOffset("singRIGHT", -38, -7);
				addOffset("singLEFT", 6, 10);
				addOffset("singDOWN", -5, -62);
				addOffset("singUPmiss", -30, 77);
				addOffset("singRIGHTmiss", -24, -18);
				addOffset("singLEFTmiss", 7, 19);
				addOffset("singDOWNmiss", 244, -60);
				addOffset("hey", 17, 15);
				addOffset('firstDeath', 37, -110);
				addOffset('deathLoop', 37, -116);
				addOffset('deathConfirm', 37, -52);
				addOffset('scared', 15, 9);
				addOffset('hit', 34, 27);
				addOffset('preAttack', -10, -150);
				addOffset('attack', 304, 157);
				addOffset('dodge', 10, -126);
				playAnim('idle');
				flipX = true;
				playerColor = "31b0d1";
			case 'eduardo':
				frames = Paths.getSparrowAtlas('characters/wii_shop_chars/EduardoAssets');
				animation.addByPrefix('idle', 'EduardoIdle', 24);
				animation.addByPrefix('singUP', 'EduardoUp', 24);
				animation.addByPrefix('singRIGHT', 'EduardoRight', 24);
				animation.addByPrefix('singLEFT', 'EduardoLeft', 24);
				animation.addByPrefix('singDOWN', 'EduardoDown', 24);
				animation.addByPrefix('well', 'EduardoWell', 24);
				if (isPlayer)
				{
					addOffset('idle');
					addOffset("singUP", -26, 18);
					addOffset("singRIGHT", 10, -6);
					addOffset("singLEFT", -9, -7);
					addOffset("singDOWN", 18, -20);
					addOffset("well");
					playAnim('idle');
				}
				else
				{
					addOffset('idle');
					addOffset("singUP", -26, 18);
					addOffset("singRIGHT", -10, -7);
					addOffset("singLEFT", 1, -7);
					addOffset("singDOWN", 18, -20);
					addOffset("well");
					playAnim('idle');
				}
				playerColor = "106e2a";
			case 'matt':
				tex = Paths.getSparrowAtlas('characters/freeplay/matt_assets');
				frames = tex;
				animation.addByPrefix('idle', "matt idle", 24);
				animation.addByPrefix('singUP', 'matt up note', 24, false);
				animation.addByPrefix('singDOWN', 'matt down note', 24, false);
				animation.addByPrefix('singLEFT', 'matt left note', 24, false);
				animation.addByPrefix('singRIGHT', 'matt right note', 24, false);
				animation.addByPrefix('singUPmiss', 'miss up', 24, false);
				animation.addByPrefix('singDOWNmiss', 'miss down', 24, false);
				animation.addByPrefix('singLEFTmiss', 'miss left', 24, false);
				animation.addByPrefix('singRIGHTmiss', 'miss right', 24, false);

				addOffset('idle');
				addOffset("singUP", -41, 21);
				addOffset("singRIGHT", -10, -14);
				addOffset("singLEFT", 63, -24);
				addOffset("singDOWN", -62, -19);

				if (isPlayer)
				{
					addOffset("singUP", -21, 21);
					addOffset("singRIGHT", -40, -14);
					addOffset("singLEFT", 63, -24);
					addOffset("singDOWN", -30, -19);
				}

				addOffset("singUPmiss", -21, 21);
				addOffset("singRIGHTmiss", -40, -14);
				addOffset("singLEFTmiss", 63, -24);
				addOffset("singDOWNmiss", -15, -28);

				playAnim('idle');
				playerColor = "fe9641";

			case 'oswald':
				frames = Paths.getSparrowAtlas('characters/freeplay/Oswald');
				animation.addByPrefix('idle', 'oswald idle', 24);
				animation.addByPrefix('idleAlt', 'oswald idle', 24);
				animation.addByPrefix('singUP', 'oswald up', 24);
				animation.addByPrefix('singRIGHT', 'oswald right', 24);
				animation.addByPrefix('singDOWN', 'oswald down', 24);
				animation.addByPrefix('singLEFT', 'oswald left', 24);
				if (isPlayer)
				{
					addOffset('idle');
					addOffset('idleAlt');
					addOffset("singUP", 20, -1);
					addOffset("singRIGHT", 48, 0);
					addOffset("singLEFT", -11, -3);
					addOffset("singDOWN", -10, -3);
				}
				else
				{
					addOffset('idle');
					addOffset('idleAlt');
					addOffset("singUP", 29, -1);
					addOffset("singRIGHT", -70, 0);
					addOffset("singLEFT", 111, -3);
					addOffset("singDOWN", -21, -2);
				}
				playAnim('idle');
				playerColor = "008af5";

			case 'mickey':
				frames = Paths.getSparrowAtlas('characters/freeplay/Mickey');
				animation.addByPrefix('idle', 'mickey idle', 24);
				animation.addByPrefix('idleAlt', 'mickey idle', 24);
				animation.addByPrefix('singUP', 'mickey up', 24);
				animation.addByPrefix('singRIGHT', 'mickey right', 24);
				animation.addByPrefix('singLEFT', 'mickey left', 24);
                if (isPlayer)
                {
					animation.addByPrefix('singRIGHT', 'mickey left', 24);
					animation.addByPrefix('singLEFT', 'mickey right', 24);
                }
				animation.addByPrefix('singDOWN', 'mickey down', 24);
				if (isPlayer)
				{
					addOffset('idle');
					addOffset('idleAlt');
					addOffset("singUP", -119, 20);
					addOffset("singRIGHT", 64, 15);
					addOffset("singLEFT", -4, 8);
					addOffset("singDOWN", -213, 6);
				}
				else
				{
					addOffset('idle');
					addOffset('idleAlt');
					addOffset("singUP", -49, 20);
					addOffset("singRIGHT", -42, 15);
					addOffset("singLEFT", 14, 8);
					addOffset("singDOWN", -2, 6);
				}
				playAnim('idle');
				flipX = true;
				playerColor = "b70103";
			case 'picoLuigiHat':
				frames = Paths.getSparrowAtlas('characters/wii_shop_chars/Pico_FNF_assetssLuigiHat');
				animation.addByPrefix('idle', 'Pico Idle Dance', 24);
				animation.addByPrefix('singUP', 'pico Up note', 24);
				animation.addByPrefix('singRIGHT', 'Pico Note Right', 24);
				animation.addByPrefix('singLEFT', 'Pico NOTE LEFT', 24);
				if (isPlayer)
				{
					animation.addByPrefix('singRIGHT', 'Pico NOTE LEFT', 24);
					animation.addByPrefix('singLEFT', 'Pico Note Right', 24);
				}
				animation.addByPrefix('singDOWN', 'Pico Down Note', 24);
				if (isPlayer)
				{
					addOffset('idle');
					addOffset("singUP", 21, 44);
					addOffset("singRIGHT", -44, -28);
					addOffset("singLEFT", 92, -10);
					addOffset("singDOWN", 86, -105);
				}
				else
				{
					addOffset('idle');
					addOffset("singUP", 64, 40);
					addOffset("singRIGHT", 60, -30);
					addOffset("singLEFT", -62, -8);
					addOffset("singDOWN", 206, -105);
				}
				playAnim('idle');
				flipX = true;
				playerColor = "b2d252";

			case 'spookyWaluigiWarioHat':
				tex = Paths.getSparrowAtlas('characters/wii_shop_chars/spooky_kids_assetsWARIOnWALUIGI');
				frames = tex;
				animation.addByPrefix('idle', 'spooky dance idle', 24, false);
				animation.addByPrefix('singUP', 'spooky UP NOTE', 24, false);
				animation.addByPrefix('singDOWN', 'spooky DOWN note', 24, false);
				animation.addByPrefix('singLEFT', 'note sing left', 24, false);
				animation.addByPrefix('singRIGHT', 'spooky sing right', 24, false);
				if (isPlayer)
				{
				animation.addByPrefix('singLEFT', 'spooky sing right', 24, false);
				animation.addByPrefix('singRIGHT', 'note sing left', 24, false);
				}
				animation.addByIndices('danceLeft', 'spooky dance idle', [0, 2, 6], "", 12, false);
				animation.addByIndices('danceRight', 'spooky dance idle', [8, 10, 12, 14], "", 12, false);

				addOffset('idle', 43, 22);
				addOffset('danceLeft', 43, 22);
				addOffset('danceRight', 43, 22);

				if (isPlayer)//IF ITS BF
				{
					addOffset("singUP", -10, 36);
					addOffset("singRIGHT", 130, 20);
					addOffset("singLEFT", -130, -14);
					addOffset("singDOWN", 30, -135);
				}
				else//IF ITS DAD
				{
					addOffset("singUP", -80, 36);
					addOffset("singRIGHT", -34, 26);
					addOffset("singLEFT", 89, -12);
					addOffset("singDOWN", 60, -135);
				}

				playAnim('danceRight');
				playerColor = "d57e00";

			case '3-0':
				frames = Paths.getSparrowAtlas('characters/freeplay/3-');
				animation.addByPrefix('idle', 'idle', 24);
				animation.addByPrefix('singUP', 'up', 24);
				animation.addByPrefix('singRIGHT', 'right', 24);
				animation.addByPrefix('singDOWN', 'down', 24);
				animation.addByPrefix('singLEFT', 'left', 24);
				addOffset('idle');
				addOffset("singUP", 14, 88);
				addOffset("singRIGHT", -16, 12);
				addOffset("singLEFT", 71, 7);
				addOffset("singDOWN", 112, -309);
				playAnim('idle');
				playerColor = "fcc09f";
		}

		dance();

		if (isPlayer)
		{
			flipX = !flipX;

			if (!curCharacter.startsWith('bf'))
			if (!curCharacter.startsWith('matt'))
			{
				var oldRight = animation.getByName('singRIGHT').frames;
				animation.getByName('singRIGHT').frames = animation.getByName('singLEFT').frames;
				animation.getByName('singLEFT').frames = oldRight;

				if (animation.getByName('singRIGHTmiss') != null)
				{
					var oldMiss = animation.getByName('singRIGHTmiss').frames;
					animation.getByName('singRIGHTmiss').frames = animation.getByName('singLEFTmiss').frames;
					animation.getByName('singLEFTmiss').frames = oldMiss;
				}
			}
		}
	}

	override function update(elapsed:Float)
	{
		if (!curCharacter.startsWith('bf'))
		if (!curCharacter.startsWith('mickey'))
		if (!curCharacter.startsWith('bfMarioHat'))
		if (!curCharacter.startsWith('eduardo'))
		if (!curCharacter.startsWith('picoLuigiHat'))
		if (!curCharacter.startsWith('spookyWaluigiWarioHat'))
		{
			if (animation.curAnim.name.startsWith('sing'))
			{
				holdTimer += elapsed;
			}

			var dadVar:Float = 4;

			if (curCharacter == 'dad')
				dadVar = 6.1;
			if (holdTimer >= Conductor.stepCrochet * dadVar * 0.001)
			{
				dance();
				holdTimer = 0;
			}
		}

		switch (curCharacter)
		{
			case 'gf':
				if (animation.curAnim.name == 'hairFall' && animation.curAnim.finished)
					playAnim('danceRight');
		}

		super.update(elapsed);
	}

	private var danced:Bool = false;

	public function dance()
	{
		if (!debugMode)
		{
			switch (curCharacter)
			{
				case 'gf':
					if (!animation.curAnim.name.startsWith('hair'))
					{
						danced = !danced;
							if (danced)
							playAnim('danceRight');
						else
							playAnim('danceLeft');
					}
				case 'wii':
					danced = !danced;
					if (danced)
						playAnim('idle');
					else
						playAnim('idleAlt');
				case 'oswald':
					danced = !danced;
					if (danced)
						playAnim('idle');
					else
						playAnim('idleAlt');
				default:
					playAnim('idle');
			}
		}
	}

	public function playAnim(AnimName:String, Force:Bool = false, Reversed:Bool = false, Frame:Int = 0):Void
	{
		animation.play(AnimName, Force, Reversed, Frame);

		var daOffset = animOffsets.get(AnimName);
		if (animOffsets.exists(AnimName))
		{
			offset.set(daOffset[0], daOffset[1]);
		}
		else
			offset.set(0, 0);

		if (curCharacter == 'gf')
		{
			if (AnimName == 'singLEFT')
			{
				danced = true;
			}
			else if (AnimName == 'singRIGHT')
			{
				danced = false;
			}

			if (AnimName == 'singUP' || AnimName == 'singDOWN')
			{
				danced = !danced;
			}
		}
	}

	public function addOffset(name:String, x:Float = 0, y:Float = 0)
	{
		animOffsets[name] = [x, y];
	}
}