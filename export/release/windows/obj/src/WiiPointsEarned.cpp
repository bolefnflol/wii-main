#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Ratings
#include <Ratings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_WiiPointsEarned
#include <WiiPointsEarned.h>
#endif
#ifndef INCLUDED_WiiShopChannel
#include <WiiShopChannel.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_516c6abd76541bb7_13_new,"WiiPointsEarned","new",0x7e201c03,"WiiPointsEarned.new","WiiPointsEarned.hx",13,0xb3a694cd)
HX_LOCAL_STACK_FRAME(_hx_pos_516c6abd76541bb7_33_create,"WiiPointsEarned","create",0xa481c339,"WiiPointsEarned.create","WiiPointsEarned.hx",33,0xb3a694cd)
HX_LOCAL_STACK_FRAME(_hx_pos_516c6abd76541bb7_107_update,"WiiPointsEarned","update",0xaf77e246,"WiiPointsEarned.update","WiiPointsEarned.hx",107,0xb3a694cd)
HX_LOCAL_STACK_FRAME(_hx_pos_516c6abd76541bb7_151_acceptSavingThingy,"WiiPointsEarned","acceptSavingThingy",0x6265710a,"WiiPointsEarned.acceptSavingThingy","WiiPointsEarned.hx",151,0xb3a694cd)

void WiiPointsEarned_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_516c6abd76541bb7_13_new)
HXLINE( 104)		this->frames = 0;
HXLINE(  30)		this->textSine = ((Float)0);
HXLINE(  26)		this->noMissBonus = ::flixel::FlxG_obj::random->_hx_int(50,150,null());
HXLINE(  25)		this->defaultInt = ::flixel::FlxG_obj::random->_hx_int(100,500,null());
HXLINE(  13)		super::__construct(TransIn,TransOut);
            	}

Dynamic WiiPointsEarned_obj::__CreateEmpty() { return new WiiPointsEarned_obj; }

void *WiiPointsEarned_obj::_hx_vtable = 0;

Dynamic WiiPointsEarned_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WiiPointsEarned_obj > _hx_result = new WiiPointsEarned_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WiiPointsEarned_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x266a43d1) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x266a43d1;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void WiiPointsEarned_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_516c6abd76541bb7_33_create)
HXLINE(  34)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE(  36)			if (::PlayState_obj::isStoryMode) {
HXLINE(  38)				::haxe::Log_obj::trace(HX_("multiplying by 4 since theres 4 songs in the week",d8,6b,ef,11),::hx::SourceInfo(HX_("source/WiiPointsEarned.hx",c1,70,c2,fa),38,HX_("WiiPointsEarned",91,5e,43,5a),HX_("create",fc,66,0f,7c)));
HXLINE(  39)				 ::WiiPointsEarned _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  39)				_hx_tmp->defaultInt = (_hx_tmp->defaultInt * 4);
            			}
            			else {
HXLINE(  41)				bool _hx_tmp = !(::PlayState_obj::isStoryMode);
            			}
HXLINE(  46)			if ((::PlayState_obj::misses == 0)) {
HXLINE(  48)				 ::WiiPointsEarned _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  48)				_hx_tmp->defaultInt = (_hx_tmp->defaultInt + this->noMissBonus);
            			}
            		}
HXLINE(  52)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  52)		::String library = null();
HXDLIN(  52)		this->background = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  53)		this->background->scrollFactor->set(null(),null());
HXLINE(  54)		this->add(this->background);
HXLINE(  56)		 ::flixel::_hx_system::FlxSound _hx_tmp1 =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  56)		::String library1 = null();
HXDLIN(  56)		this->music = _hx_tmp1->loadEmbedded(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library1),true,true,null());
HXLINE(  57)		this->music->set_volume(((Float)0.4));
HXLINE(  58)		this->music->play(null(),null(),null());
HXLINE(  60)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE(  61)			this->text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,20,null(),HX_("No Points for using BotPlay!",17,2f,12,c8),350,null());
            		}
            		else {
HXLINE(  63)			this->text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,30,20,null(),((HX_("You Just Earned ",d6,57,d9,78) + this->defaultInt) + HX_(" Wii Points!",35,9b,d4,ab)),350,null());
            		}
HXLINE(  64)		this->text->set_size(60);
HXLINE(  65)		{
HXLINE(  65)			 ::flixel::text::FlxText _this = this->text;
HXDLIN(  65)			_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN(  65)			_this->set_borderColor(-16777216);
HXDLIN(  65)			_this->set_borderSize(( (Float)(4) ));
HXDLIN(  65)			_this->set_borderQuality(( (Float)(1) ));
            		}
HXLINE(  66)		this->text->set_color(-1);
HXLINE(  67)		this->text->scrollFactor->set(null(),null());
HXLINE(  68)		this->add(this->text);
HXLINE(  70)		this->text2 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->text->x,(this->text->y + 70),null(),((HX_("Also some more for no misses :) (",9d,be,b4,8f) + this->noMissBonus) + HX_(")",29,00,00,00)),30,null());
HXLINE(  71)		this->text2->set_size(30);
HXLINE(  72)		{
HXLINE(  72)			 ::flixel::text::FlxText _this1 = this->text2;
HXDLIN(  72)			_this1->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN(  72)			_this1->set_borderColor(-16777216);
HXDLIN(  72)			_this1->set_borderSize(( (Float)(4) ));
HXDLIN(  72)			_this1->set_borderQuality(( (Float)(1) ));
            		}
HXLINE(  73)		this->text2->set_color(-1);
HXLINE(  74)		this->text2->scrollFactor->set(null(),null());
HXLINE(  75)		bool _hx_tmp2;
HXDLIN(  75)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE(  75)			_hx_tmp2 = (::PlayState_obj::misses == 0);
            		}
            		else {
HXLINE(  75)			_hx_tmp2 = false;
            		}
HXDLIN(  75)		if (_hx_tmp2) {
HXLINE(  76)			this->add(this->text2);
            		}
HXLINE(  78)		this->text3 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(this->text2->x + 720),this->text2->y,null(),(HX_(" | Total Points: ",e9,fa,56,3b) + (this->defaultInt + this->noMissBonus)),30,null());
HXLINE(  79)		this->text3->set_size(30);
HXLINE(  80)		{
HXLINE(  80)			 ::flixel::text::FlxText _this2 = this->text3;
HXDLIN(  80)			_this2->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN(  80)			_this2->set_borderColor(-16777216);
HXDLIN(  80)			_this2->set_borderSize(( (Float)(4) ));
HXDLIN(  80)			_this2->set_borderQuality(( (Float)(1) ));
            		}
HXLINE(  81)		this->text3->set_color(-1);
HXLINE(  82)		this->text3->scrollFactor->set(null(),null());
HXLINE(  83)		bool _hx_tmp3;
HXDLIN(  83)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE(  83)			_hx_tmp3 = (::PlayState_obj::misses == 0);
            		}
            		else {
HXLINE(  83)			_hx_tmp3 = false;
            		}
HXDLIN(  83)		if (_hx_tmp3) {
HXLINE(  84)			this->add(this->text3);
            		}
HXLINE(  86)		 ::flixel::FlxSprite _hx_tmp4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  86)		::String library2 = null();
HXDLIN(  86)		this->logo = _hx_tmp4->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("FOAWlogo_2",dd,66,e5,b0)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  87)		 ::flixel::FlxSprite _hx_tmp5 = this->logo;
HXDLIN(  87)		_hx_tmp5->setGraphicSize(::Std_obj::_hx_int((this->logo->get_width() * ((Float)0.7))),null());
HXLINE(  88)		{
HXLINE(  88)			 ::flixel::FlxSprite _this3 = this->logo;
HXDLIN(  88)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  88)			bool _hx_tmp6;
HXDLIN(  88)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  88)					_hx_tmp6 = true;
            				}
            				break;
            				default:{
HXLINE(  88)					_hx_tmp6 = false;
            				}
            			}
HXDLIN(  88)			if (_hx_tmp6) {
HXLINE(  88)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  88)				_this3->set_x(((( (Float)(_hx_tmp) ) - _this3->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  88)			bool _hx_tmp7;
HXDLIN(  88)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  88)					_hx_tmp7 = true;
            				}
            				break;
            				default:{
HXLINE(  88)					_hx_tmp7 = false;
            				}
            			}
HXDLIN(  88)			if (_hx_tmp7) {
HXLINE(  88)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  88)				_this3->set_y(((( (Float)(_hx_tmp) ) - _this3->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  89)		this->add(this->logo);
HXLINE(  93)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE(  94)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::WiiShopChannel >();
HXDLIN(  94)			::WiiShopChannel_obj::wiiPoints = ::WiiShopChannel_obj::wiiPoints;
            		}
            		else {
HXLINE(  96)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::WiiShopChannel >();
HXDLIN(  96)			::WiiShopChannel_obj::wiiPoints = (::WiiShopChannel_obj::wiiPoints + this->defaultInt);
            		}
HXLINE(  98)		::flixel::FlxG_obj::save->flush(null(),null());
HXLINE( 100)		this->super::create();
            	}


void WiiPointsEarned_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_516c6abd76541bb7_107_update)
HXLINE( 108)		if (this->text->visible) {
HXLINE( 110)			 ::WiiPointsEarned _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 110)			_hx_tmp->textSine = (_hx_tmp->textSine + (( (Float)(180) ) * elapsed));
HXLINE( 111)			this->text->set_alpha((( (Float)(1) ) - ::Math_obj::sin(((::Math_obj::PI * this->textSine) / ( (Float)(180) )))));
HXLINE( 112)			this->text2->set_alpha((( (Float)(1) ) - ::Math_obj::sin(((::Math_obj::PI * this->textSine) / ( (Float)(180) )))));
HXLINE( 113)			this->text3->set_alpha((( (Float)(1) ) - ::Math_obj::sin(((::Math_obj::PI * this->textSine) / ( (Float)(180) )))));
            		}
HXLINE( 116)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 118)			{
HXLINE( 118)				 ::flixel::_hx_system::FlxSound _this = this->music;
HXDLIN( 118)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 120)			this->acceptSavingThingy();
HXLINE( 122)			if ((::PlayState_obj::isStoryMode == false)) {
HXLINE( 124)				 ::flixel::FlxState nextState =  ::FreeplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 124)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 124)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			else {
HXLINE( 126)				if ((::PlayState_obj::isStoryMode == true)) {
HXLINE( 128)					 ::Dynamic _hx_tmp = ::hx::ClassOf< ::PlayState >();
HXDLIN( 128)					::PlayState_obj::campaignScore = (::PlayState_obj::campaignScore + ::Math_obj::round(( (Float)(::PlayState_obj::instance->songScore) )));
HXLINE( 129)					::PlayState_obj::storyPlaylist->remove(::PlayState_obj::storyPlaylist->__get(0));
HXLINE( 131)					if ((::PlayState_obj::storyPlaylist->length <= 0)) {
HXLINE( 133)						this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
HXLINE( 134)						this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
HXLINE( 136)						{
HXLINE( 136)							 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 136)							_this->cleanup(_this->autoDestroy,true);
            						}
HXLINE( 137)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 137)						::String library = null();
HXDLIN( 137)						_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu2",7d,29,bc,3a)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
HXLINE( 138)						::Conductor_obj::changeBPM(( (Float)(102) ));
HXLINE( 140)						::StoryMenuState_obj::weekUnlocked[::Std_obj::_hx_int(::Math_obj::min(( (Float)((::PlayState_obj::storyWeek + 1)) ),( (Float)((::StoryMenuState_obj::weekUnlocked->length - 1)) )))] = true;
HXLINE( 142)						::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),::StoryMenuState_obj::weekUnlocked,::hx::paccDynamic);
HXLINE( 143)						::flixel::FlxG_obj::save->flush(null(),null());
            					}
HXLINE( 145)					{
HXLINE( 145)						 ::flixel::FlxState nextState =  ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 145)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 145)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
            				}
            			}
            		}
            	}


void WiiPointsEarned_obj::acceptSavingThingy(){
            	HX_STACKFRAME(&_hx_pos_516c6abd76541bb7_151_acceptSavingThingy)
HXLINE( 152)		::String songHighscore = ::StringTools_obj::replace(( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
HXLINE( 155)		::Highscore_obj::saveScore(songHighscore,::Math_obj::round(( (Float)(::PlayState_obj::instance->songScore) )),::PlayState_obj::storyDifficulty);
HXLINE( 156)		::String _hx_tmp = ::Ratings_obj::GenerateLetterRank(::PlayState_obj::instance->accuracy);
HXDLIN( 156)		::Highscore_obj::saveCombo(songHighscore,_hx_tmp,::PlayState_obj::storyDifficulty);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WiiPointsEarned_obj,acceptSavingThingy,(void))


::hx::ObjectPtr< WiiPointsEarned_obj > WiiPointsEarned_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< WiiPointsEarned_obj > __this = new WiiPointsEarned_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< WiiPointsEarned_obj > WiiPointsEarned_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	WiiPointsEarned_obj *__this = (WiiPointsEarned_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WiiPointsEarned_obj), true, "WiiPointsEarned"));
	*(void **)__this = WiiPointsEarned_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

WiiPointsEarned_obj::WiiPointsEarned_obj()
{
}

void WiiPointsEarned_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WiiPointsEarned);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(text2,"text2");
	HX_MARK_MEMBER_NAME(text3,"text3");
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(logo,"logo");
	HX_MARK_MEMBER_NAME(defaultInt,"defaultInt");
	HX_MARK_MEMBER_NAME(noMissBonus,"noMissBonus");
	HX_MARK_MEMBER_NAME(weekIntMultiplier,"weekIntMultiplier");
	HX_MARK_MEMBER_NAME(textSine,"textSine");
	HX_MARK_MEMBER_NAME(frames,"frames");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WiiPointsEarned_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(text2,"text2");
	HX_VISIT_MEMBER_NAME(text3,"text3");
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(logo,"logo");
	HX_VISIT_MEMBER_NAME(defaultInt,"defaultInt");
	HX_VISIT_MEMBER_NAME(noMissBonus,"noMissBonus");
	HX_VISIT_MEMBER_NAME(weekIntMultiplier,"weekIntMultiplier");
	HX_VISIT_MEMBER_NAME(textSine,"textSine");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val WiiPointsEarned_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"logo") ) { return ::hx::Val( logo ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"text2") ) { return ::hx::Val( text2 ); }
		if (HX_FIELD_EQ(inName,"text3") ) { return ::hx::Val( text3 ); }
		if (HX_FIELD_EQ(inName,"music") ) { return ::hx::Val( music ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textSine") ) { return ::hx::Val( textSine ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"defaultInt") ) { return ::hx::Val( defaultInt ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"noMissBonus") ) { return ::hx::Val( noMissBonus ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"weekIntMultiplier") ) { return ::hx::Val( weekIntMultiplier ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"acceptSavingThingy") ) { return ::hx::Val( acceptSavingThingy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WiiPointsEarned_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"logo") ) { logo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"text2") ) { text2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text3") ) { text3=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textSine") ) { textSine=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultInt") ) { defaultInt=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"noMissBonus") ) { noMissBonus=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"weekIntMultiplier") ) { weekIntMultiplier=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WiiPointsEarned_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("text2",e5,4a,99,0d));
	outFields->push(HX_("text3",e6,4a,99,0d));
	outFields->push(HX_("music",a5,d0,5a,10));
	outFields->push(HX_("logo",6b,9f,b7,47));
	outFields->push(HX_("defaultInt",ae,1a,fd,25));
	outFields->push(HX_("noMissBonus",82,21,7d,9b));
	outFields->push(HX_("weekIntMultiplier",bc,20,c6,1b));
	outFields->push(HX_("textSine",9a,e9,4e,4f));
	outFields->push(HX_("frames",a6,af,85,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WiiPointsEarned_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiPointsEarned_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WiiPointsEarned_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WiiPointsEarned_obj,text2),HX_("text2",e5,4a,99,0d)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WiiPointsEarned_obj,text3),HX_("text3",e6,4a,99,0d)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(WiiPointsEarned_obj,music),HX_("music",a5,d0,5a,10)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiPointsEarned_obj,logo),HX_("logo",6b,9f,b7,47)},
	{::hx::fsInt,(int)offsetof(WiiPointsEarned_obj,defaultInt),HX_("defaultInt",ae,1a,fd,25)},
	{::hx::fsInt,(int)offsetof(WiiPointsEarned_obj,noMissBonus),HX_("noMissBonus",82,21,7d,9b)},
	{::hx::fsInt,(int)offsetof(WiiPointsEarned_obj,weekIntMultiplier),HX_("weekIntMultiplier",bc,20,c6,1b)},
	{::hx::fsFloat,(int)offsetof(WiiPointsEarned_obj,textSine),HX_("textSine",9a,e9,4e,4f)},
	{::hx::fsInt,(int)offsetof(WiiPointsEarned_obj,frames),HX_("frames",a6,af,85,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WiiPointsEarned_obj_sStaticStorageInfo = 0;
#endif

static ::String WiiPointsEarned_obj_sMemberFields[] = {
	HX_("background",ee,93,1d,26),
	HX_("text",ad,cc,f9,4c),
	HX_("text2",e5,4a,99,0d),
	HX_("text3",e6,4a,99,0d),
	HX_("music",a5,d0,5a,10),
	HX_("logo",6b,9f,b7,47),
	HX_("defaultInt",ae,1a,fd,25),
	HX_("noMissBonus",82,21,7d,9b),
	HX_("weekIntMultiplier",bc,20,c6,1b),
	HX_("textSine",9a,e9,4e,4f),
	HX_("create",fc,66,0f,7c),
	HX_("frames",a6,af,85,ac),
	HX_("update",09,86,05,87),
	HX_("acceptSavingThingy",4d,2d,fb,8a),
	::String(null()) };

::hx::Class WiiPointsEarned_obj::__mClass;

void WiiPointsEarned_obj::__register()
{
	WiiPointsEarned_obj _hx_dummy;
	WiiPointsEarned_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WiiPointsEarned",91,5e,43,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WiiPointsEarned_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WiiPointsEarned_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WiiPointsEarned_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WiiPointsEarned_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

