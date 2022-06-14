package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

#if windows
import Discord.DiscordClient;
#end

class PowerUps extends MusicBeatState
{
	var actualBg:FlxSprite;
	var bg:FlxSprite;

    var healthGainersText:FlxText;
	public var healthGainersSine:Float = 0;

    var buy:FlxSprite;
    var plus:FlxSprite;
    var healthgainer:FlxSprite;

    public static var healthGainers:Int = 0;
    public static var healthGainerAmount:Int = 50;

	override public function create()
	{
		#if windows
		// Updating Discord Rich Presence
		DiscordClient.changePresence("Getting Da PowerUps!", null);
		#end

		actualBg = new FlxSprite().loadGraphic(Paths.image("menuBG"));
		actualBg.alpha = 0.2;
        actualBg.color = FlxColor.CYAN;
		add(actualBg);

		healthgainer = new FlxSprite(30, 120).loadGraphic(Paths.image("channelsin/wiishop/powerups/health gain"));
		add(healthgainer);

		plus = new FlxSprite(70, 300).loadGraphic(Paths.image("channelsin/wiishop/powerups/plus"));
        plus.alpha = 0.5;
		add(plus);

		buy = new FlxSprite(320, 280).loadGraphic(Paths.image("channelsin/wiishop/powerups/buy"));
		add(buy);

        healthGainersText = new FlxText("You have: " + healthGainers + " health gainers!");
        healthGainersText.setFormat('Pixel Arial 11 Bold', 40, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
        healthGainersText.x = 240;
        healthGainersText.y = 620;
        add(healthGainersText);

		FlxTween.tween(plus, {alpha: 0.5}, 0.4, {ease: FlxEase.quartInOut});
		FlxTween.tween(buy, {alpha: 1}, 0.4, {ease: FlxEase.quartInOut});
		FlxTween.tween(healthgainer, {alpha: 1}, 0.4, {ease: FlxEase.quartInOut});

		super.create();
	}

	override function update(elapsed:Float)
	{
		if(healthGainersText.visible) 
		{
			healthGainersSine += 180 * elapsed;
			healthGainersText.alpha = 1 - Math.sin((Math.PI * healthGainersSine) / 180);
		}

		if (FlxG.mouse.overlaps(plus)) 
		{
			plus.alpha = 1;
			if (FlxG.mouse.justPressed) 
            {
                if (WiiShopChannel.wiiPoints >= healthGainerAmount)
                {   
                    buying(true, false);
                    healthGainers += 1;
                    refreshText();
                } 
                else
                {   
                    buying(false, true);
                    healthGainers += 0;
                }     
            }
		}
		if (!FlxG.mouse.overlaps(plus)) 
		{
            plus.alpha = 0.5;
		}

        if (controls.BACK)
        {
            WiiShopChannel.backSound.play();
			FlxG.switchState(new WiiShopChannel());            
        }

        if (FlxG.keys.justPressed.ONE)
            sellAll();

        if (FlxG.keys.justPressed.TWO)
            if (WiiShopChannel.wiiPoints <= 0)
                sell(true);
            else
                sell(false);                      

        FlxG.save.data.healthGainers = healthGainers;

		super.update(elapsed);
	}

    function buying(?enough:Bool, ?notenough:Bool)
    {
		FlxG.sound.play(Paths.sound('confirmMenu'), 0.4);
        var receivedText:FlxText;
        var badText:FlxText;

		var bgGood:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.GREEN);
		bgGood.alpha = 0.6;
		var bgBad:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.RED);
		bgBad.alpha = 0.6;

        if (enough == true)
        {
            notenough = false;
		    add(bgGood);
		    remove(bgBad);
            receivedText = new FlxText("You Just Bought 1 Health Gainer");
            receivedText.setFormat('Pixel Arial 11 Bold', 40, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
            receivedText.screenCenter();
            add(receivedText);
            WiiShopChannel.wiiPoints -= healthGainerAmount;   
            new FlxTimer().start(2, function(tmr:FlxTimer)
            {
                FlxTween.tween(bgGood, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
                FlxTween.tween(receivedText, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
            });                             
        }
        else if (notenough == true)
        {
            enough = false;
		    remove(bgGood);
		    add(bgBad);
            badText = new FlxText("You do not have enough Wii Points!");
            badText.setFormat('Pixel Arial 11 Bold', 40, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
            badText.screenCenter();
            add(badText);
            new FlxTimer().start(2, function(tmr:FlxTimer)
            {
                FlxTween.tween(badText, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
                FlxTween.tween(bgBad, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
            });                                
        }
        FlxG.save.flush();
    }

    function sell(?isPossible:Bool)
    {
		var bg:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.GREEN);
		bg.alpha = 0.4;
        add(bg);

        var text:FlxText;

        if (isPossible)
        {
            text = new FlxText("Just sold 1 health Gainer!");
            text.setFormat('Pixel Arial 11 Bold', 40, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
            text.screenCenter();
            add(text);

            WiiShopChannel.wiiPoints += 50;
            healthGainers -= 1;

            new FlxTimer().start(2, function(tmr:FlxTimer)
            {
                FlxTween.tween(bg, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
                FlxTween.tween(text, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
            });  
            refreshText();
            FlxG.save.flush();
        }
        else
        {
            text = new FlxText("Belive me, u dont want to go to power up debt xd");
            text.setFormat('Pixel Arial 11 Bold', 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
            text.screenCenter();
            add(text);
    
            bg.color = FlxColor.RED;

            WiiShopChannel.wiiPoints += 50;
            healthGainers -= 1;

            new FlxTimer().start(2, function(tmr:FlxTimer)
            {
                FlxTween.tween(bg, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
                FlxTween.tween(text, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
                bg.color = FlxColor.GREEN;
            });  
            refreshText();
            FlxG.save.flush();
        }
    }

    function sellAll()
    {
		var bg:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		bg.alpha = 0.4;
        var text:FlxText; 

        var wiipointsamount:Int = healthGainers * 50;

        text = new FlxText("Just sold all of the health Gainer!");
        text.setFormat('Pixel Arial 11 Bold', 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
        text.screenCenter();

        FlxTween.tween(bg, {alpha: 1}, 0.3, {ease: FlxEase.quartInOut});
        FlxTween.tween(text, {alpha: 1}, 0.3, {ease: FlxEase.quartInOut});

        WiiShopChannel.wiiPoints += wiipointsamount;
        healthGainers -= healthGainers;

        new FlxTimer().start(2, function(tmr:FlxTimer)
        {
            FlxTween.tween(bg, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
            FlxTween.tween(text, {alpha: 0}, 0.3, {ease: FlxEase.expoOut});
        });  
        refreshText();
        FlxG.save.flush();
    }

    function refreshText()
    {
        remove(healthGainersText);
        healthGainersText = new FlxText("You have: " + healthGainers + " health gainers!");
        healthGainersText.setFormat('Pixel Arial 11 Bold', 40, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
        healthGainersText.x = 240;
        healthGainersText.y = 620;
        add(healthGainersText);       
    }

	function getGainers():Int {
		if (FlxG.save.data.healthGainers != null)
			return FlxG.save.data.healthGainers;

		return healthGainers;
	}

	function saveGainers(healthGainers:Int) {
		FlxG.save.data.healthGainers = healthGainers;
		// flush() actually saves whatever data you've set to local storage
		FlxG.save.flush();
	}
}