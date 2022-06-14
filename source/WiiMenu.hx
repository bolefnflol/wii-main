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

class WiiMenu extends MusicBeatState
{
	var bg:FlxSprite;

	var discHovered:FlxSprite;
	var optionsHovered:FlxSprite;	
	var shopHovered:FlxSprite;	
	var fnfHovered:FlxSprite;	
	var credsHovered:FlxSprite;
	var charSelectHovered:FlxSprite;				

	var disc:FlxSprite;
	var shop:FlxSprite;
	var fnf:FlxSprite;
	var creds:FlxSprite;
	var charSelect:FlxSprite;

	var blackScreen:FlxSprite;
	public static var wiiCursor:FlxSprite;

	var discOverlaps:FlxSprite;
	var settingsOverlaps:FlxSprite;
	var shopOverlaps:FlxSprite;
	var fnfOverlaps:FlxSprite;
	var credsOverlaps:FlxSprite;
	var charSelectOverlaps:FlxSprite;

	public static var enteringChannel:FlxSound;
	public static var pressSound:FlxSound;
	public static var startSound:FlxSound;
	public static var overLapSound:FlxSound;

	public var hours:FlxText;
	public var twoFuckingDots:FlxText;
	public var minutes:FlxText;
	public var dateDay:FlxText;
	public var dateMonth:FlxText;
	public var day:FlxText;

	public var getHours = Date.now().getHours();
	public var getMinutes= Date.now().getMinutes();
	public var getDate = Date.now().getDate();
	public var getMonth = Date.now().getMonth();
	public var getDay = Date.now().getDay();

	public var loggedInBox:FlxSprite;
	public var user:FlxText;

	public static var appear:Bool = true;

	override public function create()
	{
		#if windows
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In The Wii Menu", null);
		#end

		discHovered = new FlxSprite(90, 40).loadGraphic(Paths.image('menu/forhovering/disc'));
		add(discHovered);
		optionsHovered = new FlxSprite(50, 580).loadGraphic(Paths.image('menu/forhovering/options'));
		add(optionsHovered);
		shopHovered = new FlxSprite(660, 40).loadGraphic(Paths.image('menu/forhovering/shop'));
		add(shopHovered);
		fnfHovered = new FlxSprite(355, 370).loadGraphic(Paths.image('menu/forhovering/shop'));
		add(fnfHovered);
		credsHovered = new FlxSprite(940, 370).loadGraphic(Paths.image('menu/forhovering/shop'));
		add(credsHovered);
		charSelectHovered = new FlxSprite(80, 370).loadGraphic(Paths.image('menu/forhovering/shop'));
		add(charSelectHovered);

		bg = new FlxSprite(0, 0).loadGraphic(Paths.image('menu/bg'));
		add(bg);

	    disc = new FlxSprite(0, 0);
		disc.frames = Paths.getSparrowAtlas('menu/disc');
		disc.animation.addByPrefix('rotating', 'disc instance 1', 24, true);
		disc.animation.play('rotating');
		disc.antialiasing = true;
        add(disc);

	    shop = new FlxSprite(0, 0);
		shop.frames = Paths.getSparrowAtlas('menu/wiishopchanneldefault');
		shop.animation.addByPrefix('shop', 'wii shop instance 1', 10, true);
		shop.animation.play('shop');
		shop.antialiasing = true;
        add(shop);

	    fnf = new FlxSprite(0, 0);
		fnf.frames = Paths.getSparrowAtlas('menu/FNF_VS_WII_CHANNEL');
		fnf.animation.addByPrefix('fnf', 'fnfvswii instance 1', 5, true);
		fnf.animation.play('fnf');
		fnf.antialiasing = true;
        add(fnf);

	    creds = new FlxSprite(-5, 0);
		creds.frames = Paths.getSparrowAtlas('menu/Credits');
		creds.animation.addByPrefix('fnf', 'creditsChannel instance 1', 5, true);
		creds.animation.play('fnf');
		creds.antialiasing = true;
        add(creds);

	    charSelect = new FlxSprite(73, 353);
		charSelect.frames = Paths.getSparrowAtlas('menu/CharSelection');
		charSelect.animation.addByPrefix('charSelect', 'charsChannel instance 1', 5, true);
		charSelect.animation.play('charSelect');
		charSelect.antialiasing = true;
        add(charSelect);

		blackScreen = new FlxSprite(0, 0);
		blackScreen.makeGraphic(1920, 1080, FlxColor.BLACK);
		//add(blackScreen);

		discOverlaps = new FlxSprite(0, 0).loadGraphic(Paths.image('menu/DiscChannelOverlap'));
		discOverlaps.alpha = 0;
		add(discOverlaps);

		settingsOverlaps = new FlxSprite(0, 0).loadGraphic(Paths.image('menu/OptionsOverlap'));
		settingsOverlaps.alpha = 0;
		add(settingsOverlaps);

		shopOverlaps = new FlxSprite(0, 0).loadGraphic(Paths.image('menu/ShopOverlap'));
		shopOverlaps.alpha = 0;
		add(shopOverlaps);

		fnfOverlaps = new FlxSprite(0, 0).loadGraphic(Paths.image('menu/fnfChannelOverlap'));
		fnfOverlaps.alpha = 0;
		add(fnfOverlaps);

		credsOverlaps = new FlxSprite(0, 0).loadGraphic(Paths.image('menu/CreditsSelected'));
		credsOverlaps.alpha = 0;
		add(credsOverlaps);

		charSelectOverlaps = new FlxSprite(0, 0).loadGraphic(Paths.image('menu/CharSelectionSelected'));
		charSelectOverlaps.alpha = 0;
		add(charSelectOverlaps);

		wiiCursor = new FlxSprite().loadGraphic(Paths.image('defaultCursor'));

		FlxG.mouse.load(wiiCursor.pixels);
		FlxG.mouse.visible = true;

		if (!FlxG.sound.music.playing)
		{
        	FlxG.sound.playMusic(Paths.music('WiiMenuMusic'));
		}

		startSound = new FlxSound().loadEmbedded(Paths.sound('Start'));
		pressSound = new FlxSound().loadEmbedded(Paths.sound('a-button'));
		enteringChannel = new FlxSound().loadEmbedded(Paths.sound('ChannelClick'), false);
		overLapSound = new FlxSound().loadEmbedded(Paths.sound('OverlapSound'), false);

		hours = new FlxText(540, 518, "" + (getHours));
		hours.setFormat(Paths.font("digital.ttf"), 101, FlxColor.GRAY);
		add(hours);

		twoFuckingDots = new FlxText(629, 518, ":");
		twoFuckingDots.setFormat(Paths.font("digital.ttf"), 104, FlxColor.GRAY);
		add(twoFuckingDots);

		minutes = new FlxText(653, 518, "" + (getMinutes));
		minutes.setFormat(Paths.font("digital.ttf"), 101, FlxColor.GRAY);
		add(minutes);

		dateDay = new FlxText(671, 636, "/" + (getDate));
		dateDay.setFormat(Paths.font("contb.ttf"), 33, FlxColor.GRAY);
		add(dateDay);

		dateMonth = new FlxText(645, 636, "" + (getMonth + 1));
		dateMonth.setFormat(Paths.font("contb.ttf"), 33, FlxColor.GRAY);
		add(dateMonth);

		day = new FlxText(567, 636, "" + (getDay));
		day.setFormat(Paths.font("contb.ttf"), 33, FlxColor.GRAY);
		add(day);

		loggedInBox = new FlxSprite(730, (-300 + -5)).loadGraphic(Paths.image('loggedInAs'));
		add(loggedInBox);

		user = new FlxText(895, (-300 + 145), '' + FlxG.save.data.userName);
		user.size = 50;
		add(user);

		if (FlxG.save.data.loggedInToGameJolt)
			tweenGamejolt();

		super.create();
	}

	function tweenGamejolt()
	{
		new FlxTimer().start(2, function(tmr:FlxTimer)
		{
			FlxTween.tween(loggedInBox, {y: -5}, 0.3);
			FlxTween.tween(user, {y: 145}, 0.3);
		});
		new FlxTimer().start(5, function(tmr:FlxTimer)
		{
			FlxTween.tween(loggedInBox, {y: -300}, 0.3);
			FlxTween.tween(user, {y: -155}, 0.3);
		});
	}
	override function update(elapsed:Float)
	{
		offsetShit(user, 5);
		daything();

		new FlxTimer().start(2, function(tmr:FlxTimer)
		{
			if (!FlxG.save.data.loggedInToGameJolt && appear)
				openSubState(new LogInToGamejoltQuestion());
		});

		if (FlxG.keys.justPressed.TWO)
			FlxG.switchState(new Trophies());

		//updateTime(yes);
		new FlxTimer().start(0.1, function(tmr:FlxTimer)
		{
			blackScreen.alpha -= 0.05;
			if (blackScreen.alpha > 0)
			{
				tmr.reset(0.1);
			}
		});

		// disc
		if (FlxG.mouse.overlaps(discHovered))
		{
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				discOverlaps.alpha += 0.1;
				if (discOverlaps.alpha > 1)
				{
					tmr.reset(0.1);
				}
			});		
			if (FlxG.mouse.justPressed)
			{
				pressSound.play();
				FlxG.sound.music.stop();
				new FlxTimer().start(0.5, function(tmr:FlxTimer)
				{
					enteringChannel.play();
				});
			}	
		}
		if (!FlxG.mouse.overlaps(discHovered))
		{
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				discOverlaps.alpha -= 0.1;
				if (discOverlaps.alpha > 0)
				{
					tmr.reset(0.1);
				}
			});			
		}
		// disc end

		// options 
		if (FlxG.mouse.overlaps(optionsHovered))
		{
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				settingsOverlaps.alpha += 0.1;
				if (settingsOverlaps.alpha > 1)
				{
					tmr.reset(0.1);
				}
			});		
			if (FlxG.mouse.justPressed)
			{
				startSound.play();
				FlxG.switchState(new OptionsMenu());
			}	
		}
		if (!FlxG.mouse.overlaps(optionsHovered))
		{
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				settingsOverlaps.alpha -= 0.1;
				if (settingsOverlaps.alpha > 0)
				{
					tmr.reset(0.1);
				}
			});			
		}
		// options end

		//shop
		if (FlxG.mouse.overlaps(shopHovered))
		{
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				shopOverlaps.alpha += 0.1;
				if (shopOverlaps.alpha > 1)
				{
					tmr.reset(0.1);
				}
			});		
			if (FlxG.mouse.justPressed)
			{
				pressSound.play();
				FlxG.sound.music.pause();
				new FlxTimer().start(0.5, function(tmr:FlxTimer)
				{
					enteringChannel.play();
				});
				new FlxTimer().start(0.3, function(tmr:FlxTimer)
				{
					FlxG.switchState(new ShopChannelBeggining());
				});
			}	
		}
		if (!FlxG.mouse.overlaps(shopHovered))
		{
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				shopOverlaps.alpha -= 0.1;
				if (shopOverlaps.alpha > 0)
				{
					tmr.reset(0.1);
				}
			});			
		}
		//shop end

		// fnf 
		if (FlxG.mouse.overlaps(fnfHovered))
		{
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				fnfOverlaps.alpha += 0.1;
				if (fnfOverlaps.alpha > 1)
				{
					tmr.reset(0.1);
				}
			});		
			if (FlxG.mouse.justPressed)
			{
				pressSound.play();
				FlxG.sound.music.pause();
				new FlxTimer().start(0.5, function(tmr:FlxTimer)
				{
					enteringChannel.play();
				});
				new FlxTimer().start(0.3, function(tmr:FlxTimer)
				{
					FlxG.switchState(new FnfStart());
				});
			}	
		}
		if (!FlxG.mouse.overlaps(fnfHovered))
		{
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				fnfOverlaps.alpha -= 0.1;
				if (fnfOverlaps.alpha > 0)
				{
					tmr.reset(0.1);
				}
			});			
		}
		// fnf end

		// credits 
		if (FlxG.mouse.overlaps(credsHovered))
		{
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				credsOverlaps.alpha += 0.1;
				if (credsOverlaps.alpha > 1)
				{
					tmr.reset(0.1);
				}
			});		
			if (FlxG.mouse.justPressed)
			{
				pressSound.play();
				FlxG.sound.music.stop();
				new FlxTimer().start(0.5, function(tmr:FlxTimer)
				{
					enteringChannel.play();
				});
				new FlxTimer().start(0.3, function(tmr:FlxTimer)
				{
					FlxG.switchState(new CreditsPage());
				});
			}	
		}
		if (!FlxG.mouse.overlaps(credsHovered))
		{
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				credsOverlaps.alpha -= 0.1;
				if (credsOverlaps.alpha > 0)
				{
					tmr.reset(0.1);
				}
			});			
		}
		// credits end

		// char select 
		if (FlxG.mouse.overlaps(charSelectHovered))
		{
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				charSelectOverlaps.alpha += 0.1;
				if (charSelectOverlaps.alpha > 1)
				{
					tmr.reset(0.1);
				}
			});		
			if (FlxG.mouse.justPressed)
			{
				pressSound.play();
				FlxG.sound.music.stop();
				new FlxTimer().start(0.5, function(tmr:FlxTimer)
				{
					enteringChannel.play();
				});
				new FlxTimer().start(0.3, function(tmr:FlxTimer)
				{
					FlxG.switchState(new SelectYourPlayableChar());
				});
			}	
		}
		if (!FlxG.mouse.overlaps(charSelectHovered))
		{
			new FlxTimer().start(0.1, function(tmr:FlxTimer)
			{
				charSelectOverlaps.alpha -= 0.1;
				if (charSelectOverlaps.alpha > 0)
				{
					tmr.reset(0.1);
				}
			});			
		}
		// char select end

		super.update(elapsed);
	}

	function offsetShit(object:FlxSprite, amount:Int)
	{
        if (FlxG.keys.justPressed.S)
        {
            object.y += amount;
            trace(object.y);
        }

        if (FlxG.keys.justPressed.W)
        {
            object.y -= amount;
            trace(object.y);
        }

        if (FlxG.keys.justPressed.A)
        {
            object.x -= amount;
            trace(object.x);
        }

        if (FlxG.keys.justPressed.D)
        {
            object.x += amount;
            trace(object.x);
        }
	}

	function updateTime(?yes:Bool)
	{
		getHours = Date.now().getHours();
		getMinutes= Date.now().getMinutes();
		getDate = Date.now().getDate();
		getMonth = Date.now().getMonth();
		getDay = Date.now().getDay();

		remove(hours);
		hours = new FlxText(540, 518, "" + (getHours));
		hours.setFormat(Paths.font("digital.ttf"), 101, FlxColor.GRAY);
		add(hours);

		remove(minutes);
		minutes = new FlxText(653, 518, "" + (getMinutes));
		minutes.setFormat(Paths.font("digital.ttf"), 101, FlxColor.GRAY);
		add(minutes);		

		remove(dateDay);
		dateDay = new FlxText(671, 636, "/" + (getDate));
		dateDay.setFormat(Paths.font("contb.ttf"), 33, FlxColor.GRAY);
		add(dateDay);

		remove(dateMonth);
		dateMonth = new FlxText(645, 636, "" + (getMonth + 1));
		dateMonth.setFormat(Paths.font("contb.ttf"), 33, FlxColor.GRAY);
		add(dateMonth);

		remove(day);
		day = new FlxText(645, 636, "" + (getDay));
		day.setFormat(Paths.font("contb.ttf"), 33, FlxColor.GRAY);
		add(day);

		daything();
		updateTime(yes);
	}

	function daything() 
	{
		switch (getDay)
		{
			case 0:
				day.text = "Sun";
			case 1:
				day.text = "Mon";
			case 2:
				day.text = "Tue";
			case 3:
				day.text = "Wed";
			case 4:
				day.text = "Thu";
			case 5:
				day.text = "Fri";
			case 6:
				day.text = "Sat";
		}
	}
}