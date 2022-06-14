package;

import flixel.system.FlxSound;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.addons.transition.FlxTransitionableState;

class WiiPointsEarned extends MusicBeatState
{
    public var background:FlxSprite;

    public var text:FlxText;
    public var text2:FlxText;
    public var text3:FlxText;

    public var music:FlxSound;

    public var logo:FlxSprite;

    public var defaultInt:Int = FlxG.random.int(100, 500);
    public var noMissBonus = FlxG.random.int(50, 150);

    public var weekIntMultiplier:Int;

	public var textSine:Float = 0;

	override function create()
	{	
        if (!FlxG.save.data.botplay)
        {
            if (PlayState.isStoryMode)
            {
                trace("multiplying by 4 since theres 4 songs in the week");
                defaultInt *= 4;
            }
            else if (!PlayState.isStoryMode)
            {
                defaultInt;
            }

            if (PlayState.misses == 0)
            {
                defaultInt += noMissBonus;
            }
        }

        background = new FlxSprite(0,0).loadGraphic(Paths.image("menuBG"));
        background.scrollFactor.set();
        add(background);

        music = new FlxSound().loadEmbedded(Paths.music('breakfast'), true, true);
		music.volume = 0.4;
		music.play();

        if (FlxG.save.data.botplay)
            text = new FlxText(50, 20, "No Points for using BotPlay!", 350);   
        else
            text = new FlxText(30, 20, "You Just Earned " + defaultInt + " Wii Points!", 350);  
        text.size = 60;
        text.setBorderStyle(FlxTextBorderStyle.OUTLINE,FlxColor.BLACK,4,1);
        text.color = FlxColor.WHITE;
        text.scrollFactor.set();
        add(text);
        
        text2 = new FlxText(text.x, (text.y + 70), "Also some more for no misses :) (" + noMissBonus + ")", 30);
        text2.size = 30;
        text2.setBorderStyle(FlxTextBorderStyle.OUTLINE,FlxColor.BLACK,4,1);
        text2.color = FlxColor.WHITE;
        text2.scrollFactor.set();
        if (!FlxG.save.data.botplay && PlayState.misses == 0)
            add(text2);

        text3 = new FlxText((text2.x + 720), text2.y, " | Total Points: " + (defaultInt + noMissBonus), 30);
        text3.size = 30;
        text3.setBorderStyle(FlxTextBorderStyle.OUTLINE,FlxColor.BLACK,4,1);
        text3.color = FlxColor.WHITE;
        text3.scrollFactor.set();
        if (!FlxG.save.data.botplay && PlayState.misses == 0)
            add(text3);

        logo = new FlxSprite().loadGraphic(Paths.image('FOAWlogo_2'));
        logo.setGraphicSize(Std.int(logo.width * 0.7));
        logo.screenCenter();
        add(logo);



        if (FlxG.save.data.botplay)
            WiiShopChannel.wiiPoints += 0;
        else
            WiiShopChannel.wiiPoints += defaultInt;

		FlxG.save.flush();

		super.create();
	}


    var frames = 0;

	override function update(elapsed:Float)
	{
		if(text.visible) 
		{
			textSine += 180 * elapsed;
			text.alpha = 1 - Math.sin((Math.PI * textSine) / 180);
			text2.alpha = 1 - Math.sin((Math.PI * textSine) / 180);
  			text3.alpha = 1 - Math.sin((Math.PI * textSine) / 180);          
		}

        if (controls.ACCEPT)
        {
            music.stop();

			acceptSavingThingy();

            if (PlayState.isStoryMode == false)
            {
                FlxG.switchState(new FreeplayState());
            }
            else if (PlayState.isStoryMode == true)
            {
				PlayState.campaignScore += Math.round(PlayState.instance.songScore);
				PlayState.storyPlaylist.remove(PlayState.storyPlaylist[0]);

				if (PlayState.storyPlaylist.length <= 0)
				{
					transIn = FlxTransitionableState.defaultTransIn;
					transOut = FlxTransitionableState.defaultTransOut;

					FlxG.sound.music.stop();
					FlxG.sound.playMusic(Paths.music('freakyMenu2'));
		            Conductor.changeBPM(102);

					StoryMenuState.weekUnlocked[Std.int(Math.min(PlayState.storyWeek + 1, StoryMenuState.weekUnlocked.length - 1))] = true;

					FlxG.save.data.weekUnlocked = StoryMenuState.weekUnlocked;
					FlxG.save.flush();
                }
                FlxG.switchState(new StoryMenuState());
            }
        }
	}

    function acceptSavingThingy()
    {
		var songHighscore = StringTools.replace(PlayState.SONG.song, " ", "-");

		#if !switch
		Highscore.saveScore(songHighscore, Math.round(PlayState.instance.songScore), PlayState.storyDifficulty);
		Highscore.saveCombo(songHighscore, Ratings.GenerateLetterRank(PlayState.instance.accuracy),PlayState.storyDifficulty);
		#end
    }
}
