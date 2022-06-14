#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_SelectYourPlayableChar
#include <SelectYourPlayableChar.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_WiiMenu
#include <WiiMenu.h>
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
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0519a13aa91f01c_17_new,"SelectYourPlayableChar","new",0xcf579785,"SelectYourPlayableChar.new","SelectYourPlayableChar.hx",17,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_58_create,"SelectYourPlayableChar","create",0x52d6e4f7,"SelectYourPlayableChar.create","SelectYourPlayableChar.hx",58,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_81_update,"SelectYourPlayableChar","update",0x5dcd0404,"SelectYourPlayableChar.update","SelectYourPlayableChar.hx",81,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_89_update,"SelectYourPlayableChar","update",0x5dcd0404,"SelectYourPlayableChar.update","SelectYourPlayableChar.hx",89,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_99_check,"SelectYourPlayableChar","check",0xb296332d,"SelectYourPlayableChar.check","SelectYourPlayableChar.hx",99,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_138_saveBF,"SelectYourPlayableChar","saveBF",0xf9fc4c3c,"SelectYourPlayableChar.saveBF","SelectYourPlayableChar.hx",138,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_151_savePico,"SelectYourPlayableChar","savePico",0xb430b57d,"SelectYourPlayableChar.savePico","SelectYourPlayableChar.hx",151,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_164_saveSpooky,"SelectYourPlayableChar","saveSpooky",0xecb5e083,"SelectYourPlayableChar.saveSpooky","SelectYourPlayableChar.hx",164,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_177_saveEduardo,"SelectYourPlayableChar","saveEduardo",0x8b257b5a,"SelectYourPlayableChar.saveEduardo","SelectYourPlayableChar.hx",177,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_190_saveGF,"SelectYourPlayableChar","saveGF",0xf9fc5097,"SelectYourPlayableChar.saveGF","SelectYourPlayableChar.hx",190,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_196_offsetShit,"SelectYourPlayableChar","offsetShit",0x2ac7f06e,"SelectYourPlayableChar.offsetShit","SelectYourPlayableChar.hx",196,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_131_checkIfBFExsits,"SelectYourPlayableChar","checkIfBFExsits",0xfae1d4d6,"SelectYourPlayableChar.checkIfBFExsits","SelectYourPlayableChar.hx",131,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_144_checkIPicoFExsits,"SelectYourPlayableChar","checkIPicoFExsits",0x7532610d,"SelectYourPlayableChar.checkIPicoFExsits","SelectYourPlayableChar.hx",144,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_157_checkISpookyFExsits,"SelectYourPlayableChar","checkISpookyFExsits",0xd11ad9c7,"SelectYourPlayableChar.checkISpookyFExsits","SelectYourPlayableChar.hx",157,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_170_checkIEduardoFExsits,"SelectYourPlayableChar","checkIEduardoFExsits",0x847ca958,"SelectYourPlayableChar.checkIEduardoFExsits","SelectYourPlayableChar.hx",170,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_183_checkIGFExsits,"SelectYourPlayableChar","checkIGFExsits",0x4b5ead83,"SelectYourPlayableChar.checkIGFExsits","SelectYourPlayableChar.hx",183,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_21_boot,"SelectYourPlayableChar","boot",0x9565fd6d,"SelectYourPlayableChar.boot","SelectYourPlayableChar.hx",21,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_22_boot,"SelectYourPlayableChar","boot",0x9565fd6d,"SelectYourPlayableChar.boot","SelectYourPlayableChar.hx",22,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_23_boot,"SelectYourPlayableChar","boot",0x9565fd6d,"SelectYourPlayableChar.boot","SelectYourPlayableChar.hx",23,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_24_boot,"SelectYourPlayableChar","boot",0x9565fd6d,"SelectYourPlayableChar.boot","SelectYourPlayableChar.hx",24,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_25_boot,"SelectYourPlayableChar","boot",0x9565fd6d,"SelectYourPlayableChar.boot","SelectYourPlayableChar.hx",25,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_45_boot,"SelectYourPlayableChar","boot",0x9565fd6d,"SelectYourPlayableChar.boot","SelectYourPlayableChar.hx",45,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_46_boot,"SelectYourPlayableChar","boot",0x9565fd6d,"SelectYourPlayableChar.boot","SelectYourPlayableChar.hx",46,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_47_boot,"SelectYourPlayableChar","boot",0x9565fd6d,"SelectYourPlayableChar.boot","SelectYourPlayableChar.hx",47,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_48_boot,"SelectYourPlayableChar","boot",0x9565fd6d,"SelectYourPlayableChar.boot","SelectYourPlayableChar.hx",48,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_49_boot,"SelectYourPlayableChar","boot",0x9565fd6d,"SelectYourPlayableChar.boot","SelectYourPlayableChar.hx",49,0x999c7f8b)
HX_LOCAL_STACK_FRAME(_hx_pos_b0519a13aa91f01c_51_boot,"SelectYourPlayableChar","boot",0x9565fd6d,"SelectYourPlayableChar.boot","SelectYourPlayableChar.hx",51,0x999c7f8b)

void SelectYourPlayableChar_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_17_new)
HXDLIN(  17)		super::__construct(TransIn,TransOut);
            	}

Dynamic SelectYourPlayableChar_obj::__CreateEmpty() { return new SelectYourPlayableChar_obj; }

void *SelectYourPlayableChar_obj::_hx_vtable = 0;

Dynamic SelectYourPlayableChar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectYourPlayableChar_obj > _hx_result = new SelectYourPlayableChar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SelectYourPlayableChar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x6f91c037 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void SelectYourPlayableChar_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b0519a13aa91f01c_58_create)
HXLINE(  59)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE(  61)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  61)			::String library = null();
HXDLIN(  61)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("CharacterSelection",83,e3,33,05)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
            		}
HXLINE(  64)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  64)		::String library = null();
HXDLIN(  64)		this->wiiCursor = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("defaultCursor",77,62,61,39)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  65)		 ::flixel::input::mouse::FlxMouse _hx_tmp1 = ::flixel::FlxG_obj::mouse;
HXDLIN(  65)		_hx_tmp1->load(this->wiiCursor->get_pixels(),null(),null(),null());
HXLINE(  66)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  68)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  68)		::String library1 = null();
HXDLIN(  68)		this->bg = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("unlockables/bg",7f,d2,52,50)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  69)		this->add(this->bg);
HXLINE(  71)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,19,133,null());
HXDLIN(  71)		::String library2 = null();
HXDLIN(  71)		this->bf = _hx_tmp3->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("unlockables/characters/bf",cf,96,57,a5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  72)		 ::flixel::FlxSprite _hx_tmp4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,449,132,null());
HXDLIN(  72)		::String library3 = null();
HXDLIN(  72)		this->pico = _hx_tmp4->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("unlockables/characters/pico",b0,c2,c9,64)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE(  73)		 ::flixel::FlxSprite _hx_tmp5 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,920,131,null());
HXDLIN(  73)		::String library4 = null();
HXDLIN(  73)		this->spooky = _hx_tmp5->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("unlockables/characters/spooky",76,e0,92,bf)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library4),null(),null(),null(),null(),null());
HXLINE(  74)		 ::flixel::FlxSprite _hx_tmp6 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,139,446,null());
HXDLIN(  74)		::String library5 = null();
HXDLIN(  74)		this->eduardo = _hx_tmp6->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("unlockables/characters/eduardo",07,70,a8,39)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library5),null(),null(),null(),null(),null());
HXLINE(  75)		 ::flixel::FlxSprite _hx_tmp7 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,794,454,null());
HXDLIN(  75)		::String library6 = null();
HXDLIN(  75)		this->gf = _hx_tmp7->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("unlockables/characters/gf",2a,9b,57,a5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library6),null(),null(),null(),null(),null());
HXLINE(  77)		this->super::create();
            	}


void SelectYourPlayableChar_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_b0519a13aa91f01c_81_update)
HXLINE(  82)		this->check();
HXLINE(  84)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_b0519a13aa91f01c_89_update)
HXLINE(  90)				{
HXLINE(  90)					 ::flixel::FlxState nextState =  ::WiiMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  90)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  90)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
HXLINE(  91)				{
HXLINE(  91)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  91)					_this->cleanup(_this->autoDestroy,true);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  86)			{
HXLINE(  86)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  86)				 ::Dynamic onComplete = null();
HXDLIN(  86)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  86)					_this->fadeTween->cancel();
            				}
HXDLIN(  86)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(0) ),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  87)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  87)			_hx_tmp->play(::Paths_obj::sound(HX_("BackSoundWii",ef,5f,ae,42),null()),null(),null(),null(),null(),null());
HXLINE(  88)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE(  95)		this->super::update(elapsed);
            	}


void SelectYourPlayableChar_obj::check(){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_99_check)
HXLINE( 100)		if ((::SelectYourPlayableChar_obj::displayBf == true)) {
HXLINE( 102)			this->add(this->bf);
HXLINE( 103)			this->saveBF();
            		}
HXLINE( 106)		if ((::SelectYourPlayableChar_obj::displayPico == true)) {
HXLINE( 108)			this->add(this->pico);
HXLINE( 109)			this->savePico();
            		}
HXLINE( 112)		if ((::SelectYourPlayableChar_obj::displaySpooky == true)) {
HXLINE( 114)			this->add(this->spooky);
HXLINE( 115)			this->saveSpooky();
            		}
HXLINE( 118)		if ((::SelectYourPlayableChar_obj::displayEduardo == true)) {
HXLINE( 120)			this->add(this->eduardo);
HXLINE( 121)			this->saveEduardo();
            		}
HXLINE( 124)		if ((::SelectYourPlayableChar_obj::displayGf == true)) {
HXLINE( 126)			this->add(this->gf);
HXLINE( 127)			this->saveGF();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SelectYourPlayableChar_obj,check,(void))

void SelectYourPlayableChar_obj::saveBF(){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_138_saveBF)
HXLINE( 139)		::flixel::FlxG_obj::save->data->__SetField(HX_("displayBf",a6,f8,da,c1),::SelectYourPlayableChar_obj::displayBf,::hx::paccDynamic);
HXLINE( 141)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SelectYourPlayableChar_obj,saveBF,(void))

void SelectYourPlayableChar_obj::savePico(){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_151_savePico)
HXLINE( 152)		::flixel::FlxG_obj::save->data->__SetField(HX_("displayPico",47,88,4a,32),::SelectYourPlayableChar_obj::displayPico,::hx::paccDynamic);
HXLINE( 154)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SelectYourPlayableChar_obj,savePico,(void))

void SelectYourPlayableChar_obj::saveSpooky(){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_164_saveSpooky)
HXLINE( 165)		::flixel::FlxG_obj::save->data->__SetField(HX_("displaySpooky",cd,79,01,83),::SelectYourPlayableChar_obj::displaySpooky,::hx::paccDynamic);
HXLINE( 167)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SelectYourPlayableChar_obj,saveSpooky,(void))

void SelectYourPlayableChar_obj::saveEduardo(){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_177_saveEduardo)
HXLINE( 178)		::flixel::FlxG_obj::save->data->__SetField(HX_("displayEduardo",d0,02,00,77),::SelectYourPlayableChar_obj::displayEduardo,::hx::paccDynamic);
HXLINE( 180)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SelectYourPlayableChar_obj,saveEduardo,(void))

void SelectYourPlayableChar_obj::saveGF(){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_190_saveGF)
HXLINE( 191)		::flixel::FlxG_obj::save->data->__SetField(HX_("displayGf",01,fd,da,c1),::SelectYourPlayableChar_obj::displayGf,::hx::paccDynamic);
HXLINE( 193)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SelectYourPlayableChar_obj,saveGF,(void))

void SelectYourPlayableChar_obj::offsetShit( ::flixel::FlxObject object){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_196_offsetShit)
HXLINE( 197)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 197)		if (_this->keyManager->checkStatusUnsafe(83,_this->status)) {
HXLINE( 199)			object->set_y((object->y + 10));
HXLINE( 200)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 200)			::String _hx_tmp1 = (::Std_obj::string(object) + HX_(" y = ",aa,de,e5,bc));
HXDLIN( 200)			_hx_tmp((_hx_tmp1 + object->y),::hx::SourceInfo(HX_("source/SelectYourPlayableChar.hx",17,ca,96,e7),200,HX_("SelectYourPlayableChar",13,71,72,d7),HX_("offsetShit",f3,58,6a,48)));
            		}
HXLINE( 203)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 203)		if (_this1->keyManager->checkStatusUnsafe(87,_this1->status)) {
HXLINE( 205)			object->set_y((object->y - ( (Float)(10) )));
HXLINE( 206)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 206)			::String _hx_tmp1 = (::Std_obj::string(object) + HX_(" y = ",aa,de,e5,bc));
HXDLIN( 206)			_hx_tmp((_hx_tmp1 + object->y),::hx::SourceInfo(HX_("source/SelectYourPlayableChar.hx",17,ca,96,e7),206,HX_("SelectYourPlayableChar",13,71,72,d7),HX_("offsetShit",f3,58,6a,48)));
            		}
HXLINE( 209)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 209)		if (_this2->keyManager->checkStatusUnsafe(65,_this2->status)) {
HXLINE( 211)			object->set_x((object->x - ( (Float)(10) )));
HXLINE( 212)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 212)			::String _hx_tmp1 = (::Std_obj::string(object) + HX_(" x = ",0b,a8,3c,bc));
HXDLIN( 212)			_hx_tmp((_hx_tmp1 + object->x),::hx::SourceInfo(HX_("source/SelectYourPlayableChar.hx",17,ca,96,e7),212,HX_("SelectYourPlayableChar",13,71,72,d7),HX_("offsetShit",f3,58,6a,48)));
            		}
HXLINE( 215)		 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 215)		if (_this3->keyManager->checkStatusUnsafe(68,_this3->status)) {
HXLINE( 217)			object->set_x((object->x + 10));
HXLINE( 218)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 218)			::String _hx_tmp1 = (::Std_obj::string(object) + HX_(" x = ",0b,a8,3c,bc));
HXDLIN( 218)			_hx_tmp((_hx_tmp1 + object->x),::hx::SourceInfo(HX_("source/SelectYourPlayableChar.hx",17,ca,96,e7),218,HX_("SelectYourPlayableChar",13,71,72,d7),HX_("offsetShit",f3,58,6a,48)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SelectYourPlayableChar_obj,offsetShit,(void))

bool SelectYourPlayableChar_obj::displayBf;

bool SelectYourPlayableChar_obj::displayPico;

bool SelectYourPlayableChar_obj::displaySpooky;

bool SelectYourPlayableChar_obj::displayEduardo;

bool SelectYourPlayableChar_obj::displayGf;

bool SelectYourPlayableChar_obj::saveDisplayBf;

bool SelectYourPlayableChar_obj::saveDisplayPico;

bool SelectYourPlayableChar_obj::saveDisplaySpooky;

bool SelectYourPlayableChar_obj::saveDisplayEduardo;

bool SelectYourPlayableChar_obj::saveDisplayGf;

bool SelectYourPlayableChar_obj::mark1Selected;

bool SelectYourPlayableChar_obj::mark2Selected;

bool SelectYourPlayableChar_obj::mark3Selected;

bool SelectYourPlayableChar_obj::mark4Selected;

bool SelectYourPlayableChar_obj::mark5Selected;

int SelectYourPlayableChar_obj::charactersInt;

bool SelectYourPlayableChar_obj::checkIfBFExsits(){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_131_checkIfBFExsits)
HXLINE( 132)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("displayBf",a6,f8,da,c1),::hx::paccDynamic) )) {
HXLINE( 133)			return ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("displayBf",a6,f8,da,c1),::hx::paccDynamic)) );
            		}
HXLINE( 135)		return ::SelectYourPlayableChar_obj::displayBf;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SelectYourPlayableChar_obj,checkIfBFExsits,return )

bool SelectYourPlayableChar_obj::checkIPicoFExsits(){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_144_checkIPicoFExsits)
HXLINE( 145)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("displayPico",47,88,4a,32),::hx::paccDynamic) )) {
HXLINE( 146)			return ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("displayPico",47,88,4a,32),::hx::paccDynamic)) );
            		}
HXLINE( 148)		return ::SelectYourPlayableChar_obj::displayPico;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SelectYourPlayableChar_obj,checkIPicoFExsits,return )

bool SelectYourPlayableChar_obj::checkISpookyFExsits(){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_157_checkISpookyFExsits)
HXLINE( 158)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("displaySpooky",cd,79,01,83),::hx::paccDynamic) )) {
HXLINE( 159)			return ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("displaySpooky",cd,79,01,83),::hx::paccDynamic)) );
            		}
HXLINE( 161)		return ::SelectYourPlayableChar_obj::displaySpooky;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SelectYourPlayableChar_obj,checkISpookyFExsits,return )

bool SelectYourPlayableChar_obj::checkIEduardoFExsits(){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_170_checkIEduardoFExsits)
HXLINE( 171)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("displayEduardo",d0,02,00,77),::hx::paccDynamic) )) {
HXLINE( 172)			return ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("displayEduardo",d0,02,00,77),::hx::paccDynamic)) );
            		}
HXLINE( 174)		return ::SelectYourPlayableChar_obj::displayEduardo;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SelectYourPlayableChar_obj,checkIEduardoFExsits,return )

bool SelectYourPlayableChar_obj::checkIGFExsits(){
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_183_checkIGFExsits)
HXLINE( 184)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("displayGf",01,fd,da,c1),::hx::paccDynamic) )) {
HXLINE( 185)			return ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("displayGf",01,fd,da,c1),::hx::paccDynamic)) );
            		}
HXLINE( 187)		return ::SelectYourPlayableChar_obj::displayGf;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SelectYourPlayableChar_obj,checkIGFExsits,return )


::hx::ObjectPtr< SelectYourPlayableChar_obj > SelectYourPlayableChar_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< SelectYourPlayableChar_obj > __this = new SelectYourPlayableChar_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< SelectYourPlayableChar_obj > SelectYourPlayableChar_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	SelectYourPlayableChar_obj *__this = (SelectYourPlayableChar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectYourPlayableChar_obj), true, "SelectYourPlayableChar"));
	*(void **)__this = SelectYourPlayableChar_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

SelectYourPlayableChar_obj::SelectYourPlayableChar_obj()
{
}

void SelectYourPlayableChar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SelectYourPlayableChar);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(bf,"bf");
	HX_MARK_MEMBER_NAME(pico,"pico");
	HX_MARK_MEMBER_NAME(spooky,"spooky");
	HX_MARK_MEMBER_NAME(eduardo,"eduardo");
	HX_MARK_MEMBER_NAME(gf,"gf");
	HX_MARK_MEMBER_NAME(mark1,"mark1");
	HX_MARK_MEMBER_NAME(mark2,"mark2");
	HX_MARK_MEMBER_NAME(mark3,"mark3");
	HX_MARK_MEMBER_NAME(mark4,"mark4");
	HX_MARK_MEMBER_NAME(mark5,"mark5");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(text2,"text2");
	HX_MARK_MEMBER_NAME(wiiCursor,"wiiCursor");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SelectYourPlayableChar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(bf,"bf");
	HX_VISIT_MEMBER_NAME(pico,"pico");
	HX_VISIT_MEMBER_NAME(spooky,"spooky");
	HX_VISIT_MEMBER_NAME(eduardo,"eduardo");
	HX_VISIT_MEMBER_NAME(gf,"gf");
	HX_VISIT_MEMBER_NAME(mark1,"mark1");
	HX_VISIT_MEMBER_NAME(mark2,"mark2");
	HX_VISIT_MEMBER_NAME(mark3,"mark3");
	HX_VISIT_MEMBER_NAME(mark4,"mark4");
	HX_VISIT_MEMBER_NAME(mark5,"mark5");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(text2,"text2");
	HX_VISIT_MEMBER_NAME(wiiCursor,"wiiCursor");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SelectYourPlayableChar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		if (HX_FIELD_EQ(inName,"bf") ) { return ::hx::Val( bf ); }
		if (HX_FIELD_EQ(inName,"gf") ) { return ::hx::Val( gf ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pico") ) { return ::hx::Val( pico ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mark1") ) { return ::hx::Val( mark1 ); }
		if (HX_FIELD_EQ(inName,"mark2") ) { return ::hx::Val( mark2 ); }
		if (HX_FIELD_EQ(inName,"mark3") ) { return ::hx::Val( mark3 ); }
		if (HX_FIELD_EQ(inName,"mark4") ) { return ::hx::Val( mark4 ); }
		if (HX_FIELD_EQ(inName,"mark5") ) { return ::hx::Val( mark5 ); }
		if (HX_FIELD_EQ(inName,"text2") ) { return ::hx::Val( text2 ); }
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"spooky") ) { return ::hx::Val( spooky ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"saveBF") ) { return ::hx::Val( saveBF_dyn() ); }
		if (HX_FIELD_EQ(inName,"saveGF") ) { return ::hx::Val( saveGF_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"eduardo") ) { return ::hx::Val( eduardo ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"savePico") ) { return ::hx::Val( savePico_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wiiCursor") ) { return ::hx::Val( wiiCursor ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"saveSpooky") ) { return ::hx::Val( saveSpooky_dyn() ); }
		if (HX_FIELD_EQ(inName,"offsetShit") ) { return ::hx::Val( offsetShit_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"saveEduardo") ) { return ::hx::Val( saveEduardo_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SelectYourPlayableChar_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"displayBf") ) { outValue = ( displayBf ); return true; }
		if (HX_FIELD_EQ(inName,"displayGf") ) { outValue = ( displayGf ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayPico") ) { outValue = ( displayPico ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displaySpooky") ) { outValue = ( displaySpooky ); return true; }
		if (HX_FIELD_EQ(inName,"saveDisplayBf") ) { outValue = ( saveDisplayBf ); return true; }
		if (HX_FIELD_EQ(inName,"saveDisplayGf") ) { outValue = ( saveDisplayGf ); return true; }
		if (HX_FIELD_EQ(inName,"mark1Selected") ) { outValue = ( mark1Selected ); return true; }
		if (HX_FIELD_EQ(inName,"mark2Selected") ) { outValue = ( mark2Selected ); return true; }
		if (HX_FIELD_EQ(inName,"mark3Selected") ) { outValue = ( mark3Selected ); return true; }
		if (HX_FIELD_EQ(inName,"mark4Selected") ) { outValue = ( mark4Selected ); return true; }
		if (HX_FIELD_EQ(inName,"mark5Selected") ) { outValue = ( mark5Selected ); return true; }
		if (HX_FIELD_EQ(inName,"charactersInt") ) { outValue = ( charactersInt ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"displayEduardo") ) { outValue = ( displayEduardo ); return true; }
		if (HX_FIELD_EQ(inName,"checkIGFExsits") ) { outValue = checkIGFExsits_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"saveDisplayPico") ) { outValue = ( saveDisplayPico ); return true; }
		if (HX_FIELD_EQ(inName,"checkIfBFExsits") ) { outValue = checkIfBFExsits_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"saveDisplaySpooky") ) { outValue = ( saveDisplaySpooky ); return true; }
		if (HX_FIELD_EQ(inName,"checkIPicoFExsits") ) { outValue = checkIPicoFExsits_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"saveDisplayEduardo") ) { outValue = ( saveDisplayEduardo ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"checkISpookyFExsits") ) { outValue = checkISpookyFExsits_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"checkIEduardoFExsits") ) { outValue = checkIEduardoFExsits_dyn(); return true; }
	}
	return false;
}

::hx::Val SelectYourPlayableChar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bf") ) { bf=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gf") ) { gf=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pico") ) { pico=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mark1") ) { mark1=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mark2") ) { mark2=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mark3") ) { mark3=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mark4") ) { mark4=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mark5") ) { mark5=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text2") ) { text2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"spooky") ) { spooky=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"eduardo") ) { eduardo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wiiCursor") ) { wiiCursor=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SelectYourPlayableChar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"displayBf") ) { displayBf=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"displayGf") ) { displayGf=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayPico") ) { displayPico=ioValue.Cast< bool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displaySpooky") ) { displaySpooky=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"saveDisplayBf") ) { saveDisplayBf=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"saveDisplayGf") ) { saveDisplayGf=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"mark1Selected") ) { mark1Selected=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"mark2Selected") ) { mark2Selected=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"mark3Selected") ) { mark3Selected=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"mark4Selected") ) { mark4Selected=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"mark5Selected") ) { mark5Selected=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"charactersInt") ) { charactersInt=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"displayEduardo") ) { displayEduardo=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"saveDisplayPico") ) { saveDisplayPico=ioValue.Cast< bool >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"saveDisplaySpooky") ) { saveDisplaySpooky=ioValue.Cast< bool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"saveDisplayEduardo") ) { saveDisplayEduardo=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void SelectYourPlayableChar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("bf",c4,55,00,00));
	outFields->push(HX_("pico",e5,e8,57,4a));
	outFields->push(HX_("spooky",eb,bd,9e,c1));
	outFields->push(HX_("eduardo",f2,58,fe,01));
	outFields->push(HX_("gf",1f,5a,00,00));
	outFields->push(HX_("mark1",84,cb,21,03));
	outFields->push(HX_("mark2",85,cb,21,03));
	outFields->push(HX_("mark3",86,cb,21,03));
	outFields->push(HX_("mark4",87,cb,21,03));
	outFields->push(HX_("mark5",88,cb,21,03));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("text2",e5,4a,99,0d));
	outFields->push(HX_("wiiCursor",4d,56,b3,05));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SelectYourPlayableChar_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectYourPlayableChar_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectYourPlayableChar_obj,bf),HX_("bf",c4,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectYourPlayableChar_obj,pico),HX_("pico",e5,e8,57,4a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectYourPlayableChar_obj,spooky),HX_("spooky",eb,bd,9e,c1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectYourPlayableChar_obj,eduardo),HX_("eduardo",f2,58,fe,01)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectYourPlayableChar_obj,gf),HX_("gf",1f,5a,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectYourPlayableChar_obj,mark1),HX_("mark1",84,cb,21,03)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectYourPlayableChar_obj,mark2),HX_("mark2",85,cb,21,03)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectYourPlayableChar_obj,mark3),HX_("mark3",86,cb,21,03)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectYourPlayableChar_obj,mark4),HX_("mark4",87,cb,21,03)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectYourPlayableChar_obj,mark5),HX_("mark5",88,cb,21,03)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(SelectYourPlayableChar_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(SelectYourPlayableChar_obj,text2),HX_("text2",e5,4a,99,0d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectYourPlayableChar_obj,wiiCursor),HX_("wiiCursor",4d,56,b3,05)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SelectYourPlayableChar_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::displayBf,HX_("displayBf",a6,f8,da,c1)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::displayPico,HX_("displayPico",47,88,4a,32)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::displaySpooky,HX_("displaySpooky",cd,79,01,83)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::displayEduardo,HX_("displayEduardo",d0,02,00,77)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::displayGf,HX_("displayGf",01,fd,da,c1)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::saveDisplayBf,HX_("saveDisplayBf",a9,7d,95,e6)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::saveDisplayPico,HX_("saveDisplayPico",0a,94,72,de)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::saveDisplaySpooky,HX_("saveDisplaySpooky",50,3c,16,92)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::saveDisplayEduardo,HX_("saveDisplayEduardo",ed,72,15,9a)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::saveDisplayGf,HX_("saveDisplayGf",04,82,95,e6)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::mark1Selected,HX_("mark1Selected",ff,d5,fd,49)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::mark2Selected,HX_("mark2Selected",00,3f,ef,1c)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::mark3Selected,HX_("mark3Selected",01,a8,e0,ef)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::mark4Selected,HX_("mark4Selected",02,11,d2,c2)},
	{::hx::fsBool,(void *) &SelectYourPlayableChar_obj::mark5Selected,HX_("mark5Selected",03,7a,c3,95)},
	{::hx::fsInt,(void *) &SelectYourPlayableChar_obj::charactersInt,HX_("charactersInt",65,b2,4e,5a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SelectYourPlayableChar_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("bf",c4,55,00,00),
	HX_("pico",e5,e8,57,4a),
	HX_("spooky",eb,bd,9e,c1),
	HX_("eduardo",f2,58,fe,01),
	HX_("gf",1f,5a,00,00),
	HX_("mark1",84,cb,21,03),
	HX_("mark2",85,cb,21,03),
	HX_("mark3",86,cb,21,03),
	HX_("mark4",87,cb,21,03),
	HX_("mark5",88,cb,21,03),
	HX_("text",ad,cc,f9,4c),
	HX_("text2",e5,4a,99,0d),
	HX_("wiiCursor",4d,56,b3,05),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("check",c8,98,b6,45),
	HX_("saveBF",41,ce,34,23),
	HX_("savePico",c2,82,11,fe),
	HX_("saveSpooky",08,49,58,0a),
	HX_("saveEduardo",35,87,9e,5b),
	HX_("saveGF",9c,d2,34,23),
	HX_("offsetShit",f3,58,6a,48),
	::String(null()) };

static void SelectYourPlayableChar_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::displayBf,"displayBf");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::displayPico,"displayPico");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::displaySpooky,"displaySpooky");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::displayEduardo,"displayEduardo");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::displayGf,"displayGf");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::saveDisplayBf,"saveDisplayBf");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::saveDisplayPico,"saveDisplayPico");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::saveDisplaySpooky,"saveDisplaySpooky");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::saveDisplayEduardo,"saveDisplayEduardo");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::saveDisplayGf,"saveDisplayGf");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::mark1Selected,"mark1Selected");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::mark2Selected,"mark2Selected");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::mark3Selected,"mark3Selected");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::mark4Selected,"mark4Selected");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::mark5Selected,"mark5Selected");
	HX_MARK_MEMBER_NAME(SelectYourPlayableChar_obj::charactersInt,"charactersInt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SelectYourPlayableChar_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::displayBf,"displayBf");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::displayPico,"displayPico");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::displaySpooky,"displaySpooky");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::displayEduardo,"displayEduardo");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::displayGf,"displayGf");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::saveDisplayBf,"saveDisplayBf");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::saveDisplayPico,"saveDisplayPico");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::saveDisplaySpooky,"saveDisplaySpooky");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::saveDisplayEduardo,"saveDisplayEduardo");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::saveDisplayGf,"saveDisplayGf");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::mark1Selected,"mark1Selected");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::mark2Selected,"mark2Selected");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::mark3Selected,"mark3Selected");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::mark4Selected,"mark4Selected");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::mark5Selected,"mark5Selected");
	HX_VISIT_MEMBER_NAME(SelectYourPlayableChar_obj::charactersInt,"charactersInt");
};

#endif

::hx::Class SelectYourPlayableChar_obj::__mClass;

static ::String SelectYourPlayableChar_obj_sStaticFields[] = {
	HX_("displayBf",a6,f8,da,c1),
	HX_("displayPico",47,88,4a,32),
	HX_("displaySpooky",cd,79,01,83),
	HX_("displayEduardo",d0,02,00,77),
	HX_("displayGf",01,fd,da,c1),
	HX_("saveDisplayBf",a9,7d,95,e6),
	HX_("saveDisplayPico",0a,94,72,de),
	HX_("saveDisplaySpooky",50,3c,16,92),
	HX_("saveDisplayEduardo",ed,72,15,9a),
	HX_("saveDisplayGf",04,82,95,e6),
	HX_("mark1Selected",ff,d5,fd,49),
	HX_("mark2Selected",00,3f,ef,1c),
	HX_("mark3Selected",01,a8,e0,ef),
	HX_("mark4Selected",02,11,d2,c2),
	HX_("mark5Selected",03,7a,c3,95),
	HX_("charactersInt",65,b2,4e,5a),
	HX_("checkIfBFExsits",31,6a,fd,7c),
	HX_("checkIPicoFExsits",28,43,62,65),
	HX_("checkISpookyFExsits",a2,b8,9b,16),
	HX_("checkIEduardoFExsits",1d,ca,be,0f),
	HX_("checkIGFExsits",88,3c,a0,22),
	::String(null())
};

void SelectYourPlayableChar_obj::__register()
{
	SelectYourPlayableChar_obj _hx_dummy;
	SelectYourPlayableChar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SelectYourPlayableChar",13,71,72,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SelectYourPlayableChar_obj::__GetStatic;
	__mClass->mSetStaticField = &SelectYourPlayableChar_obj::__SetStatic;
	__mClass->mMarkFunc = SelectYourPlayableChar_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SelectYourPlayableChar_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectYourPlayableChar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectYourPlayableChar_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SelectYourPlayableChar_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectYourPlayableChar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectYourPlayableChar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SelectYourPlayableChar_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_21_boot)
HXDLIN(  21)		displayBf = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_22_boot)
HXDLIN(  22)		displayPico = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_23_boot)
HXDLIN(  23)		displaySpooky = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_24_boot)
HXDLIN(  24)		displayEduardo = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_25_boot)
HXDLIN(  25)		displayGf = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_45_boot)
HXDLIN(  45)		mark1Selected = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_46_boot)
HXDLIN(  46)		mark2Selected = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_47_boot)
HXDLIN(  47)		mark3Selected = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_48_boot)
HXDLIN(  48)		mark4Selected = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_49_boot)
HXDLIN(  49)		mark5Selected = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0519a13aa91f01c_51_boot)
HXDLIN(  51)		charactersInt = 0;
            	}
}

