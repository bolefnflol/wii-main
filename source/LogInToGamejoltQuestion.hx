package;

import flixel.FlxG;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

class LogInToGamejoltQuestion extends MusicBeatSubstate
{
    public var bg:FlxSprite;

    public var sign:FlxSprite;
    public var ye:FlxSprite;
    public var noThx:FlxSprite;

	public function new()
	{
		super();

        bg = new FlxSprite().makeGraphic(1280, 720, FlxColor.BLACK);
        bg.alpha = 0;
        add(bg);

        sign = new FlxSprite(-4, -2).loadGraphic(Paths.image("gamejolt/ifulogin"));
        sign.alpha = 0;
        add(sign);

        ye = new FlxSprite(520, 360).loadGraphic(Paths.image("gamejolt/ye"));
        ye.alpha = 0;
        add(ye);

        noThx = new FlxSprite(510, 480).loadGraphic(Paths.image("gamejolt/no thx"));
        noThx.alpha = 0;
        add(noThx);

		FlxTween.tween(bg, {alpha: 0.6}, 0.4, {ease: FlxEase.quartInOut});
		FlxTween.tween(sign, {alpha: 1}, 0.4, {ease: FlxEase.quartInOut});
		FlxTween.tween(ye, {alpha: 1 / 2}, 0.4, {ease: FlxEase.quartInOut});
		FlxTween.tween(noThx, {alpha: 1 / 2}, 0.4, {ease: FlxEase.quartInOut});
    }

	override function update(elapsed:Float)
	{
		if (FlxG.mouse.overlaps(ye))
		{
            ye.alpha = 1;
            if (FlxG.mouse.justPressed)
            {
                FlxTween.tween(bg, {alpha: 0}, 0.4, {ease: FlxEase.quartInOut});
                FlxTween.tween(sign, {alpha: 0}, 0.4, {ease: FlxEase.quartInOut});
                FlxTween.tween(ye, {alpha: 0}, 0.4, {ease: FlxEase.quartInOut});
                FlxTween.tween(noThx, {alpha: 0}, 0.4, {ease: FlxEase.quartInOut});

                new FlxTimer().start(0.4, function(tmr:FlxTimer)
                {
                    FlxG.switchState(new GamejoltLogInState());
                });
            }

            WiiMenu.appear = false;
		}
		if (!FlxG.mouse.overlaps(ye))
		{
            ye.alpha = 1 / 2;			
		}

		if (FlxG.mouse.overlaps(noThx))
		{
            noThx.alpha = 1;
            if (FlxG.mouse.justPressed)
            {
                FlxTween.tween(bg, {alpha: 0}, 0.4, {ease: FlxEase.quartInOut});
                FlxTween.tween(sign, {alpha: 0}, 0.4, {ease: FlxEase.quartInOut});
                FlxTween.tween(ye, {alpha: 0}, 0.4, {ease: FlxEase.quartInOut});
                FlxTween.tween(noThx, {alpha: 0}, 0.4, {ease: FlxEase.quartInOut});

                new FlxTimer().start(0.4, function(tmr:FlxTimer)
                {
                    close();
                });
            }

            WiiMenu.appear = false;
		}
		if (!FlxG.mouse.overlaps(noThx))
		{
            noThx.alpha = 1 / 2;			
		}
		super.update(elapsed);
    }
}