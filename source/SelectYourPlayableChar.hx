package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.FlxObject;

#if windows
import Discord.DiscordClient;
#end

class SelectYourPlayableChar extends MusicBeatState
{
	var bg:FlxSprite;

    public static var displayBf:Bool = false;
    public static var displayPico:Bool = false;
    public static var displaySpooky:Bool = false;
    public static var displayEduardo:Bool = false;
    public static var displayGf:Bool = false;

    public static var saveDisplayBf:Bool;
    public static var saveDisplayPico:Bool;
    public static var saveDisplaySpooky:Bool;
    public static var saveDisplayEduardo:Bool;
    public static var saveDisplayGf:Bool;

    var bf:FlxSprite;
    var pico:FlxSprite;
    var spooky:FlxSprite;
    var eduardo:FlxSprite;
    var gf:FlxSprite;

	var mark1:FlxSprite; //char
	var mark2:FlxSprite; //char
	var mark3:FlxSprite; //char
	var mark4:FlxSprite; //char
	var mark5:FlxSprite; //gf

	public static var mark1Selected:Bool = false;
	public static var mark2Selected:Bool = false;
	public static var mark3Selected:Bool = false;
	public static var mark4Selected:Bool = false;
	public static var mark5Selected:Bool = false;

	public static var charactersInt:Int = 0;
	
	var text:FlxText;
	var text2:FlxText;
	var wiiCursor:FlxSprite;

	override public function create()
	{
		if (!FlxG.sound.music.playing)
		{
        	FlxG.sound.playMusic(Paths.music('CharacterSelection'));
		}

		wiiCursor = new FlxSprite().loadGraphic(Paths.image('defaultCursor'));
		FlxG.mouse.load(wiiCursor.pixels);
		FlxG.mouse.visible = true;

		bg = new FlxSprite(0, 0).loadGraphic(Paths.image('unlockables/bg'));
		add(bg);

		bf = new FlxSprite(19, 133).loadGraphic(Paths.image('unlockables/characters/bf'));
		pico = new FlxSprite(449, 132).loadGraphic(Paths.image('unlockables/characters/pico'));
		spooky = new FlxSprite(920, 131).loadGraphic(Paths.image('unlockables/characters/spooky'));
		eduardo = new FlxSprite(139, 446).loadGraphic(Paths.image('unlockables/characters/eduardo'));
		gf = new FlxSprite(794, 454).loadGraphic(Paths.image('unlockables/characters/gf'));

		super.create();
    }

	override function update(elapsed:Float)
	{
        check();

		if (controls.BACK)
		{
			FlxG.sound.music.fadeOut(0.5);
			FlxG.sound.play(Paths.sound('BackSoundWii'));
			new FlxTimer().start(1, function(tmr:FlxTimer)
			{
				FlxG.switchState(new WiiMenu());
			    FlxG.sound.music.stop();                
			});	
		}

		super.update(elapsed);
    }

	public function check()
	{
        if (displayBf == true)
        {
            add(bf);
            saveBF();
        }

        if (displayPico == true)
        {
            add(pico);
			savePico();
        }

        if (displaySpooky == true)
        {
            add(spooky);
			saveSpooky();
        }

        if (displayEduardo == true)
        {
            add(eduardo);
			saveEduardo();
        }

        if (displayGf == true)
        {
            add(gf);
			saveGF();
        }
	}
	public static function checkIfBFExsits():Bool
	{
		if (FlxG.save.data.displayBf != null)
			return FlxG.save.data.displayBf;

		return displayBf;
	}
	function saveBF()
	{
		FlxG.save.data.displayBf = displayBf;
		// flush() actually saves whatever data you've set to local storage
		FlxG.save.flush();
	}
	public static function checkIPicoFExsits():Bool
	{
		if (FlxG.save.data.displayPico != null)
			return FlxG.save.data.displayPico;

		return displayPico;
	}
	function savePico()
	{
		FlxG.save.data.displayPico = displayPico;
		// flush() actually saves whatever data you've set to local storage
		FlxG.save.flush();
	}
	public static function checkISpookyFExsits():Bool
	{
		if (FlxG.save.data.displaySpooky != null)
			return FlxG.save.data.displaySpooky;

		return displaySpooky;
	}
	function saveSpooky()
	{
		FlxG.save.data.displaySpooky = displaySpooky;
		// flush() actually saves whatever data you've set to local storage
		FlxG.save.flush();
	}
	public static function checkIEduardoFExsits():Bool
	{
		if (FlxG.save.data.displayEduardo != null)
			return FlxG.save.data.displayEduardo;

		return displayEduardo;
	}
	function saveEduardo()
	{
		FlxG.save.data.displayEduardo = displayEduardo;
		// flush() actually saves whatever data you've set to local storage
		FlxG.save.flush();
	}
	public static function checkIGFExsits():Bool
	{
		if (FlxG.save.data.displayGf != null)
			return FlxG.save.data.displayGf;

		return displayGf;
	}
	function saveGF()
	{
		FlxG.save.data.displayGf = displayGf;
		// flush() actually saves whatever data you've set to local storage
		FlxG.save.flush();
	}
	public function offsetShit(object:FlxObject)
	{
        if (FlxG.keys.justPressed.S)
        {
            object.y += 10;
            trace(object + " y = " + object.y);
        }

        if (FlxG.keys.justPressed.W)
        {
            object.y -= 10;
            trace(object + " y = " + object.y);
        }

        if (FlxG.keys.justPressed.A)
        {
            object.x -= 10;
            trace(object + " x = " + object.x);
        }

        if (FlxG.keys.justPressed.D)
        {
            object.x += 10;
            trace(object + " x = " + object.x);
        }
	}
}