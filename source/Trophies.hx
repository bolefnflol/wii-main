package;

import flixel.FlxG;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.addons.api.FlxGameJolt;

class Trophies extends MusicBeatState
{
    public static function unlockTrophy(id:Int)
    {
        FlxGameJolt.addTrophy(id);	
    }
}