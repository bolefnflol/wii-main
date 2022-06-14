package;

import flixel.FlxSprite;

class HealthIcon extends FlxSprite
{
	/**
	 * Used for FreeplayState! If you use it elsewhere, prob gonna annoying
	 */
	public var sprTracker:FlxSprite;

	public function new(char:String = 'bf', isPlayer:Bool = false)
	{
		super();

		switch (char)
		{
			case 'bf':
				antialiasing = true;
				loadGraphic(Paths.image('healthIcon/boyfrenddd'), true, 150, 150);
				animation.add('alive', [0], 0, false, isPlayer);
				animation.add('dead', [1], 0, false, isPlayer);
				animation.add('inLead', [2], 0, false, isPlayer);
			case 'wii':
				antialiasing = true;
				frames = Paths.getSparrowAtlas('healthIcon/wii_what');	
				animation.addByPrefix('alive', 'wii alive instance 1', 24, true);
				animation.addByPrefix('dead', 'wii dead instance 1', 24, true);
				animation.addByPrefix('inLead', 'wii lead instance 1', 24, true);
			case 'bfMarioHat':
				antialiasing = true;
				loadGraphic(Paths.image('healthIcon/mario hat bf'), true, 150, 150);
				animation.add('alive', [0], 0, false, isPlayer);
				animation.add('dead', [1], 0, false, isPlayer);
				animation.add('inLead', [2], 0, false, isPlayer);
			case 'gf':
				antialiasing = true;
				loadGraphic(Paths.image('healthIcon/urMom'), true, 150, 150);
				animation.add('alive', [0], 0, false, isPlayer);
				animation.add('dead', [1], 0, false, isPlayer);
				animation.add('inLead', [2], 0, false, isPlayer);
			case 'matt':
				antialiasing = true;
				loadGraphic(Paths.image('healthIcon/matt'), true, 150, 150);
				animation.add('alive', [0], 0, false, isPlayer);
				animation.add('dead', [1], 0, false, isPlayer);
				animation.add('inLead', [2], 0, false, isPlayer);
			case 'oswald':
				antialiasing = true;
				loadGraphic(Paths.image('healthIcon/oswald'), true, 150, 150);
				animation.add('alive', [0], 0, false, isPlayer);
				animation.add('dead', [1], 0, false, isPlayer);
				animation.add('inLead', [2], 0, false, isPlayer);
			case 'mickey':
				antialiasing = true;
				loadGraphic(Paths.image('healthIcon/mickey'), true, 150, 150);
				animation.add('alive', [0], 0, false, isPlayer);
				animation.add('dead', [1], 0, false, isPlayer);
				animation.add('inLead', [2], 0, false, isPlayer);
			case 'eduardo':
				antialiasing = true;
				loadGraphic(Paths.image('healthIcon/wellwellwell'), true, 150, 150);
				animation.add('alive', [0], 0, false, isPlayer);
				animation.add('dead', [1], 0, false, isPlayer);
				animation.add('inLead', [2], 0, false, isPlayer);
			case 'spookyWaluigiWarioHat':
				antialiasing = true;
				loadGraphic(Paths.image('healthIcon/spookyHats'), true, 150, 150);
				animation.add('alive', [0], 0, false, isPlayer);
				animation.add('dead', [1], 0, false, isPlayer);
				animation.add('inLead', [2], 0, false, isPlayer);
			case 'picoLuigiHat':
				antialiasing = true;
				loadGraphic(Paths.image('healthIcon/pico luigi hat'), true, 150, 150);
				animation.add('alive', [0], 0, false, isPlayer);
				animation.add('dead', [1], 0, false, isPlayer);
				animation.add('inLead', [2], 0, false, isPlayer);				
			case 'gfCrown':
				antialiasing = true;
				loadGraphic(Paths.image('healthIcon/gfCrown'), true, 150, 150);
				animation.add('alive', [0], 0, false, isPlayer);
				animation.add('dead', [1], 0, false, isPlayer);
				animation.add('inLead', [2], 0, false, isPlayer);
			case '3-0':
				antialiasing = true;
				loadGraphic(Paths.image('healthIcon/3-'), true, 150, 150);
				animation.add('alive', [0], 0, false, isPlayer);
				animation.add('dead', [1], 0, false, isPlayer);
				animation.add('inLead', [2], 0, false, isPlayer);
		}

		animation.play('alive');

		scrollFactor.set();
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		if (sprTracker != null)
			setPosition(sprTracker.x + sprTracker.width + 10, sprTracker.y - 30);

	}
}