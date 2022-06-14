package;

import flixel.FlxG;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

class SelectPlayable extends MusicBeatSubstate
{
    public var bg:FlxSprite;
    public var bgActual:FlxSprite;
    public var title:FlxSprite;

    var bf:FlxSprite;
    var pico:FlxSprite;
    var spooky:FlxSprite;
    var eduardo:FlxSprite;
    var alpha:Float = 0.5;
    var alpha2:Float = 1;
    var continueButton:FlxSprite;

    var curSelected:Bool;
    
    public static var char:String = '';

    public static var bfMarioHatSelected:Bool = false;
    public static var picoLuigiHatSelected:Bool = false;
    public static var spookyHatsSelected:Bool = false;
    public static var eduardoSelected:Bool = false;

	override public function create()
	{
        FlxG.mouse.visible = true;
        bgActual = new FlxSprite().loadGraphic(Paths.image("menuBG"));
        add(bgActual);

        bg = new FlxSprite().makeGraphic(1280, 720, FlxColor.BLACK);
        bg.alpha = 0.4;
        add(bg);

        title = new FlxSprite(-3, 60).loadGraphic(Paths.image("selectChar/title"));
        add(title);

        bf = new FlxSprite(190.85, 203.85).loadGraphic(Paths.image("selectChar/bf mario hat"));
        bf.alpha = alpha;
    	if (FlxG.save.data.boughtBfWithMarioHat)
            add(bf);

        pico = new FlxSprite(648.7, 203.85).loadGraphic(Paths.image("selectChar/pico luigi hat"));
        pico.alpha = alpha;
    	if (FlxG.save.data.boughtPICOWithLUIGIHat)
            add(pico);

        spooky = new FlxSprite(648.7, 377.4).loadGraphic(Paths.image("selectChar/spooky with hats"));
        spooky.alpha = alpha;
    	if (FlxG.save.data.boughtSPOOKYHats)
            add(spooky);

        eduardo = new FlxSprite(190.85, 377.4).loadGraphic(Paths.image("selectChar/eduardo"));
        eduardo.alpha = alpha;
    	if (FlxG.save.data.boughtEduardo)
            add(eduardo);

        continueButton = new FlxSprite(417.6, 592.35);
        continueButton.frames = Paths.getSparrowAtlas("selectChar/continue");
        continueButton.alpha = alpha;
        continueButton.animation.addByPrefix('idle', 'continue button', 24, true);
        continueButton.animation.play('idle');
        add(continueButton);

		super.create();
    }

	override function update(elapsed:Float)
	{
        if (FlxG.save.data.boughtBfWithMarioHat)
        {
            if (FlxG.mouse.overlaps(bf))
            {
                bf.alpha = alpha2;
                if (FlxG.mouse.justPressed)
                {
                    if (!bfMarioHatSelected)
                    {
                        FlxG.camera.flash(FlxColor.WHITE, 0.7);
                        FlxG.sound.play(Paths.sound('confirmMenu'), 0.7);
                    }

                    bfMarioHatSelected = true;
                    picoLuigiHatSelected = false;
                    spookyHatsSelected = false;
                    eduardoSelected = false;
                }
            }
            if (!FlxG.mouse.overlaps(bf))
            {
                if (!bfMarioHatSelected)
                    bf.alpha = alpha;			
            }
        }

        if (FlxG.save.data.boughtPICOWithLUIGIHat)
        {
		    if (FlxG.mouse.overlaps(pico))
            {
                pico.alpha = alpha2;
                if (FlxG.mouse.justPressed)
                {
                    if (!picoLuigiHatSelected)
                    {
                        FlxG.camera.flash(FlxColor.WHITE, 0.7);
                        FlxG.sound.play(Paths.sound('confirmMenu'), 0.7);
                    }

                    bfMarioHatSelected = false;
                    picoLuigiHatSelected = true;
                    spookyHatsSelected = false;
                    eduardoSelected = false;
                }
            }
            if (!FlxG.mouse.overlaps(pico))
            {
                if (!picoLuigiHatSelected)
                    pico.alpha = alpha;
            }
        }

        if (FlxG.save.data.boughtSPOOKYHats)
        {
            if (FlxG.mouse.overlaps(spooky))
            {
                spooky.alpha = alpha2;
                if (FlxG.mouse.justPressed)
                {
                    if (!spookyHatsSelected)
                    {
                        FlxG.camera.flash(FlxColor.WHITE, 0.7);
                        FlxG.sound.play(Paths.sound('confirmMenu'), 0.7);
                    }

                    bfMarioHatSelected = false;
                    picoLuigiHatSelected = false;
                    spookyHatsSelected = true;
                    eduardoSelected = false;
                }
            }
            if (!FlxG.mouse.overlaps(spooky))
            {
                if (!spookyHatsSelected)
                    spooky.alpha = alpha;
            }
        }

        if (FlxG.save.data.boughtEduardo)
        {
            if (FlxG.mouse.overlaps(eduardo))
            {
                eduardo.alpha = alpha2;
                if (FlxG.mouse.justPressed)
                {
                    if (!eduardoSelected)
                    {
                        FlxG.camera.flash(FlxColor.WHITE, 0.7);
                        FlxG.sound.play(Paths.sound('confirmMenu'), 0.7);
                    }

                    bfMarioHatSelected = false;
                    picoLuigiHatSelected = false;
                    spookyHatsSelected = false;
                    eduardoSelected = true;
                }
            }
            if (!FlxG.mouse.overlaps(eduardo))
            {
                if (!eduardoSelected)
                    eduardo.alpha = alpha;
            }
        }

		if (FlxG.mouse.overlaps(continueButton))
		{
            continueButton.alpha = alpha2;
            if (FlxG.mouse.justPressed)
            {
                FlxG.camera.flash(FlxColor.WHITE, 0.7);
                FlxG.sound.play(Paths.sound('confirmMenu'), 0.7);

                FlxTween.tween(bf, {alpha: 0}, 1, {ease: FlxEase.expoOut});
                FlxTween.tween(pico, {alpha: 0}, 1, {ease: FlxEase.expoOut});
                FlxTween.tween(spooky, {alpha: 0}, 1, {ease: FlxEase.expoOut});
                FlxTween.tween(eduardo, {alpha: 0}, 1, {ease: FlxEase.expoOut});
                FlxTween.tween(title, {alpha: 0}, 1, {ease: FlxEase.expoOut});

                new FlxTimer().start(2, function(tmr:FlxTimer)
                {
                    LoadingState.loadAndSwitchState(new PlayState());
                });
            }

		}
		if (!FlxG.mouse.overlaps(continueButton))
		{
            continueButton.alpha = alpha;
		}        

        if (controls.BACK)
        {
            if (StoryMenuState.selectingFromStory)
         	    FlxG.switchState(new StoryMenuState());     
            if (!StoryMenuState.selectingFromStory)
         	    FlxG.switchState(new FreeplayState());   
        }

        if (bfMarioHatSelected)    
            char = 'bfMarioHat';

        if (picoLuigiHatSelected)
            char = 'picoLuigiHat';

        if (spookyHatsSelected)
            char = 'spookyWaluigiWarioHat';

        if (eduardoSelected)
            char = 'eduardo';

		super.update(elapsed);
    }
}