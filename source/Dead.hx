package;

import vlc.VideoHandler;
import flixel.FlxG;

class Dead extends MusicBeatState
{
    public static var hello:Bool;

	override public function create():Void
	{
        var video:VideoHandler;
        video = new VideoHandler();
        video.playVideo(Paths.video("dead.mp4"));
        video.finishCallback = function()
        {
            FlxG.save.data.comeDead = false;
            FlxG.save.data.a = false;
            FlxG.save.flush();
            Sys.command("start assets/shared/images/seriously.txt");
            Sys.exit(1);
        }

		super.create();
    }

	override function update(elapsed:Float)
	{
		super.update(elapsed);
    }
}