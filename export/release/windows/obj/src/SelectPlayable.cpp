#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
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
#ifndef INCLUDED_SelectPlayable
#include <SelectPlayable.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ea24f67086c0f433_10_new,"SelectPlayable","new",0xda7d3abc,"SelectPlayable.new","SelectPlayable.hx",10,0x35c97034)
HX_LOCAL_STACK_FRAME(_hx_pos_ea24f67086c0f433_34_create,"SelectPlayable","create",0xeef3de20,"SelectPlayable.create","SelectPlayable.hx",34,0x35c97034)
HX_LOCAL_STACK_FRAME(_hx_pos_ea24f67086c0f433_77_update,"SelectPlayable","update",0xf9e9fd2d,"SelectPlayable.update","SelectPlayable.hx",77,0x35c97034)
HX_LOCAL_STACK_FRAME(_hx_pos_ea24f67086c0f433_198_update,"SelectPlayable","update",0xf9e9fd2d,"SelectPlayable.update","SelectPlayable.hx",198,0x35c97034)
HX_LOCAL_STACK_FRAME(_hx_pos_ea24f67086c0f433_26_boot,"SelectPlayable","boot",0x4b2f2a56,"SelectPlayable.boot","SelectPlayable.hx",26,0x35c97034)
HX_LOCAL_STACK_FRAME(_hx_pos_ea24f67086c0f433_28_boot,"SelectPlayable","boot",0x4b2f2a56,"SelectPlayable.boot","SelectPlayable.hx",28,0x35c97034)
HX_LOCAL_STACK_FRAME(_hx_pos_ea24f67086c0f433_29_boot,"SelectPlayable","boot",0x4b2f2a56,"SelectPlayable.boot","SelectPlayable.hx",29,0x35c97034)
HX_LOCAL_STACK_FRAME(_hx_pos_ea24f67086c0f433_30_boot,"SelectPlayable","boot",0x4b2f2a56,"SelectPlayable.boot","SelectPlayable.hx",30,0x35c97034)
HX_LOCAL_STACK_FRAME(_hx_pos_ea24f67086c0f433_31_boot,"SelectPlayable","boot",0x4b2f2a56,"SelectPlayable.boot","SelectPlayable.hx",31,0x35c97034)

void SelectPlayable_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ea24f67086c0f433_10_new)
HXLINE(  21)		this->alpha2 = ((Float)1);
HXLINE(  20)		this->alpha = ((Float)0.5);
HXLINE(  10)		super::__construct();
            	}

Dynamic SelectPlayable_obj::__CreateEmpty() { return new SelectPlayable_obj; }

void *SelectPlayable_obj::_hx_vtable = 0;

Dynamic SelectPlayable_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectPlayable_obj > _hx_result = new SelectPlayable_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SelectPlayable_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x2b15ef8a) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2b15ef8a;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void SelectPlayable_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_ea24f67086c0f433_34_create)
HXLINE(  35)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  36)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  36)		::String library = null();
HXDLIN(  36)		this->bgActual = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  37)		this->add(this->bgActual);
HXLINE(  39)		this->bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(1280,720,-16777216,null(),null());
HXLINE(  40)		this->bg->set_alpha(((Float)0.4));
HXLINE(  41)		this->add(this->bg);
HXLINE(  43)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-3,60,null());
HXDLIN(  43)		::String library1 = null();
HXDLIN(  43)		this->title = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("selectChar/title",7b,60,06,cb)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  44)		this->add(this->title);
HXLINE(  46)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,((Float)190.85),((Float)203.85),null());
HXDLIN(  46)		::String library2 = null();
HXDLIN(  46)		this->bf = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("selectChar/bf mario hat",60,05,62,da)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  47)		this->bf->set_alpha(this->alpha);
HXLINE(  48)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtBfWithMarioHat",4c,4b,2e,34),::hx::paccDynamic)) )) {
HXLINE(  49)			this->add(this->bf);
            		}
HXLINE(  51)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,((Float)648.7),((Float)203.85),null());
HXDLIN(  51)		::String library3 = null();
HXDLIN(  51)		this->pico = _hx_tmp3->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("selectChar/pico luigi hat",df,e5,91,24)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE(  52)		this->pico->set_alpha(this->alpha);
HXLINE(  53)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtPICOWithLUIGIHat",6f,0d,dd,99),::hx::paccDynamic)) )) {
HXLINE(  54)			this->add(this->pico);
            		}
HXLINE(  56)		 ::flixel::FlxSprite _hx_tmp4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,((Float)648.7),((Float)377.4),null());
HXDLIN(  56)		::String library4 = null();
HXDLIN(  56)		this->spooky = _hx_tmp4->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("selectChar/spooky with hats",9a,4c,e6,75)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library4),null(),null(),null(),null(),null());
HXLINE(  57)		this->spooky->set_alpha(this->alpha);
HXLINE(  58)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtSPOOKYHats",2e,56,56,28),::hx::paccDynamic)) )) {
HXLINE(  59)			this->add(this->spooky);
            		}
HXLINE(  61)		 ::flixel::FlxSprite _hx_tmp5 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,((Float)190.85),((Float)377.4),null());
HXDLIN(  61)		::String library5 = null();
HXDLIN(  61)		this->eduardo = _hx_tmp5->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("selectChar/eduardo",95,62,5c,7e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library5),null(),null(),null(),null(),null());
HXLINE(  62)		this->eduardo->set_alpha(this->alpha);
HXLINE(  63)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtEduardo",07,b2,8b,e5),::hx::paccDynamic)) )) {
HXLINE(  64)			this->add(this->eduardo);
            		}
HXLINE(  66)		this->continueButton =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,((Float)417.6),((Float)592.35),null());
HXLINE(  67)		 ::flixel::FlxSprite _hx_tmp6 = this->continueButton;
HXDLIN(  67)		::String library6 = null();
HXDLIN(  67)		::String _hx_tmp7 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("selectChar/continue",64,45,b3,87)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library6);
HXDLIN(  67)		_hx_tmp6->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp7,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("selectChar/continue",64,45,b3,87)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library6)));
HXLINE(  68)		this->continueButton->set_alpha(this->alpha);
HXLINE(  69)		this->continueButton->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("continue button",8b,44,ee,4a),24,true,null(),null());
HXLINE(  70)		this->continueButton->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  71)		this->add(this->continueButton);
HXLINE(  73)		this->super::create();
            	}


void SelectPlayable_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_ea24f67086c0f433_77_update)
HXLINE(  78)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtBfWithMarioHat",4c,4b,2e,34),::hx::paccDynamic)) )) {
HXLINE(  80)			if (::flixel::FlxG_obj::mouse->overlaps(this->bf,null())) {
HXLINE(  82)				this->bf->set_alpha(this->alpha2);
HXLINE(  83)				if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  85)					if (!(::SelectPlayable_obj::bfMarioHatSelected)) {
HXLINE(  87)						::flixel::FlxG_obj::camera->flash(-1,((Float)0.7),null(),null());
HXLINE(  88)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  88)						_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
            					}
HXLINE(  91)					::SelectPlayable_obj::bfMarioHatSelected = true;
HXLINE(  92)					::SelectPlayable_obj::picoLuigiHatSelected = false;
HXLINE(  93)					::SelectPlayable_obj::spookyHatsSelected = false;
HXLINE(  94)					::SelectPlayable_obj::eduardoSelected = false;
            				}
            			}
HXLINE(  97)			if (!(::flixel::FlxG_obj::mouse->overlaps(this->bf,null()))) {
HXLINE(  99)				if (!(::SelectPlayable_obj::bfMarioHatSelected)) {
HXLINE( 100)					this->bf->set_alpha(this->alpha);
            				}
            			}
            		}
HXLINE( 104)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtPICOWithLUIGIHat",6f,0d,dd,99),::hx::paccDynamic)) )) {
HXLINE( 106)			if (::flixel::FlxG_obj::mouse->overlaps(this->pico,null())) {
HXLINE( 108)				this->pico->set_alpha(this->alpha2);
HXLINE( 109)				if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 111)					if (!(::SelectPlayable_obj::picoLuigiHatSelected)) {
HXLINE( 113)						::flixel::FlxG_obj::camera->flash(-1,((Float)0.7),null(),null());
HXLINE( 114)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 114)						_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
            					}
HXLINE( 117)					::SelectPlayable_obj::bfMarioHatSelected = false;
HXLINE( 118)					::SelectPlayable_obj::picoLuigiHatSelected = true;
HXLINE( 119)					::SelectPlayable_obj::spookyHatsSelected = false;
HXLINE( 120)					::SelectPlayable_obj::eduardoSelected = false;
            				}
            			}
HXLINE( 123)			if (!(::flixel::FlxG_obj::mouse->overlaps(this->pico,null()))) {
HXLINE( 125)				if (!(::SelectPlayable_obj::picoLuigiHatSelected)) {
HXLINE( 126)					this->pico->set_alpha(this->alpha);
            				}
            			}
            		}
HXLINE( 130)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtSPOOKYHats",2e,56,56,28),::hx::paccDynamic)) )) {
HXLINE( 132)			if (::flixel::FlxG_obj::mouse->overlaps(this->spooky,null())) {
HXLINE( 134)				this->spooky->set_alpha(this->alpha2);
HXLINE( 135)				if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 137)					if (!(::SelectPlayable_obj::spookyHatsSelected)) {
HXLINE( 139)						::flixel::FlxG_obj::camera->flash(-1,((Float)0.7),null(),null());
HXLINE( 140)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 140)						_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
            					}
HXLINE( 143)					::SelectPlayable_obj::bfMarioHatSelected = false;
HXLINE( 144)					::SelectPlayable_obj::picoLuigiHatSelected = false;
HXLINE( 145)					::SelectPlayable_obj::spookyHatsSelected = true;
HXLINE( 146)					::SelectPlayable_obj::eduardoSelected = false;
            				}
            			}
HXLINE( 149)			if (!(::flixel::FlxG_obj::mouse->overlaps(this->spooky,null()))) {
HXLINE( 151)				if (!(::SelectPlayable_obj::spookyHatsSelected)) {
HXLINE( 152)					this->spooky->set_alpha(this->alpha);
            				}
            			}
            		}
HXLINE( 156)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtEduardo",07,b2,8b,e5),::hx::paccDynamic)) )) {
HXLINE( 158)			if (::flixel::FlxG_obj::mouse->overlaps(this->eduardo,null())) {
HXLINE( 160)				this->eduardo->set_alpha(this->alpha2);
HXLINE( 161)				if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 163)					if (!(::SelectPlayable_obj::eduardoSelected)) {
HXLINE( 165)						::flixel::FlxG_obj::camera->flash(-1,((Float)0.7),null(),null());
HXLINE( 166)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 166)						_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
            					}
HXLINE( 169)					::SelectPlayable_obj::bfMarioHatSelected = false;
HXLINE( 170)					::SelectPlayable_obj::picoLuigiHatSelected = false;
HXLINE( 171)					::SelectPlayable_obj::spookyHatsSelected = false;
HXLINE( 172)					::SelectPlayable_obj::eduardoSelected = true;
            				}
            			}
HXLINE( 175)			if (!(::flixel::FlxG_obj::mouse->overlaps(this->eduardo,null()))) {
HXLINE( 177)				if (!(::SelectPlayable_obj::eduardoSelected)) {
HXLINE( 178)					this->eduardo->set_alpha(this->alpha);
            				}
            			}
            		}
HXLINE( 182)		if (::flixel::FlxG_obj::mouse->overlaps(this->continueButton,null())) {
HXLINE( 184)			this->continueButton->set_alpha(this->alpha2);
HXLINE( 185)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_ea24f67086c0f433_198_update)
HXLINE( 198)					 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 198)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 198)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 187)				::flixel::FlxG_obj::camera->flash(-1,((Float)0.7),null(),null());
HXLINE( 188)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 188)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 190)				::flixel::tweens::FlxTween_obj::tween(this->bf, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())));
HXLINE( 191)				::flixel::tweens::FlxTween_obj::tween(this->pico, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())));
HXLINE( 192)				::flixel::tweens::FlxTween_obj::tween(this->spooky, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())));
HXLINE( 193)				::flixel::tweens::FlxTween_obj::tween(this->eduardo, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())));
HXLINE( 194)				::flixel::tweens::FlxTween_obj::tween(this->title, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())));
HXLINE( 196)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_0()),null());
            			}
            		}
HXLINE( 203)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->continueButton,null()))) {
HXLINE( 205)			this->continueButton->set_alpha(this->alpha);
            		}
HXLINE( 208)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 210)			if (::StoryMenuState_obj::selectingFromStory) {
HXLINE( 211)				 ::flixel::FlxState nextState =  ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 211)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 211)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 212)			if (!(::StoryMenuState_obj::selectingFromStory)) {
HXLINE( 213)				 ::flixel::FlxState nextState =  ::FreeplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 213)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 213)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 216)		if (::SelectPlayable_obj::bfMarioHatSelected) {
HXLINE( 217)			::SelectPlayable_obj::_hx_char = HX_("bfMarioHat",9b,bd,d7,f1);
            		}
HXLINE( 219)		if (::SelectPlayable_obj::picoLuigiHatSelected) {
HXLINE( 220)			::SelectPlayable_obj::_hx_char = HX_("picoLuigiHat",9e,fe,18,fe);
            		}
HXLINE( 222)		if (::SelectPlayable_obj::spookyHatsSelected) {
HXLINE( 223)			::SelectPlayable_obj::_hx_char = HX_("spookyWaluigiWarioHat",fa,52,e8,49);
            		}
HXLINE( 225)		if (::SelectPlayable_obj::eduardoSelected) {
HXLINE( 226)			::SelectPlayable_obj::_hx_char = HX_("eduardo",f2,58,fe,01);
            		}
HXLINE( 228)		this->super::update(elapsed);
            	}


::String SelectPlayable_obj::_hx_char;

bool SelectPlayable_obj::bfMarioHatSelected;

bool SelectPlayable_obj::picoLuigiHatSelected;

bool SelectPlayable_obj::spookyHatsSelected;

bool SelectPlayable_obj::eduardoSelected;


::hx::ObjectPtr< SelectPlayable_obj > SelectPlayable_obj::__new() {
	::hx::ObjectPtr< SelectPlayable_obj > __this = new SelectPlayable_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SelectPlayable_obj > SelectPlayable_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SelectPlayable_obj *__this = (SelectPlayable_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectPlayable_obj), true, "SelectPlayable"));
	*(void **)__this = SelectPlayable_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SelectPlayable_obj::SelectPlayable_obj()
{
}

void SelectPlayable_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SelectPlayable);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(bgActual,"bgActual");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(bf,"bf");
	HX_MARK_MEMBER_NAME(pico,"pico");
	HX_MARK_MEMBER_NAME(spooky,"spooky");
	HX_MARK_MEMBER_NAME(eduardo,"eduardo");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(alpha2,"alpha2");
	HX_MARK_MEMBER_NAME(continueButton,"continueButton");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SelectPlayable_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(bgActual,"bgActual");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(bf,"bf");
	HX_VISIT_MEMBER_NAME(pico,"pico");
	HX_VISIT_MEMBER_NAME(spooky,"spooky");
	HX_VISIT_MEMBER_NAME(eduardo,"eduardo");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(alpha2,"alpha2");
	HX_VISIT_MEMBER_NAME(continueButton,"continueButton");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SelectPlayable_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		if (HX_FIELD_EQ(inName,"bf") ) { return ::hx::Val( bf ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pico") ) { return ::hx::Val( pico ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( title ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"spooky") ) { return ::hx::Val( spooky ); }
		if (HX_FIELD_EQ(inName,"alpha2") ) { return ::hx::Val( alpha2 ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"eduardo") ) { return ::hx::Val( eduardo ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgActual") ) { return ::hx::Val( bgActual ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"continueButton") ) { return ::hx::Val( continueButton ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SelectPlayable_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { outValue = ( _hx_char ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"eduardoSelected") ) { outValue = ( eduardoSelected ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bfMarioHatSelected") ) { outValue = ( bfMarioHatSelected ); return true; }
		if (HX_FIELD_EQ(inName,"spookyHatsSelected") ) { outValue = ( spookyHatsSelected ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"picoLuigiHatSelected") ) { outValue = ( picoLuigiHatSelected ); return true; }
	}
	return false;
}

::hx::Val SelectPlayable_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bf") ) { bf=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pico") ) { pico=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"spooky") ) { spooky=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha2") ) { alpha2=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"eduardo") ) { eduardo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgActual") ) { bgActual=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"continueButton") ) { continueButton=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SelectPlayable_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"eduardoSelected") ) { eduardoSelected=ioValue.Cast< bool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bfMarioHatSelected") ) { bfMarioHatSelected=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"spookyHatsSelected") ) { spookyHatsSelected=ioValue.Cast< bool >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"picoLuigiHatSelected") ) { picoLuigiHatSelected=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void SelectPlayable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("bgActual",33,36,56,eb));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("bf",c4,55,00,00));
	outFields->push(HX_("pico",e5,e8,57,4a));
	outFields->push(HX_("spooky",eb,bd,9e,c1));
	outFields->push(HX_("eduardo",f2,58,fe,01));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("alpha2",14,cb,3b,42));
	outFields->push(HX_("continueButton",b9,7d,48,49));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SelectPlayable_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectPlayable_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectPlayable_obj,bgActual),HX_("bgActual",33,36,56,eb)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectPlayable_obj,title),HX_("title",98,15,3b,10)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectPlayable_obj,bf),HX_("bf",c4,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectPlayable_obj,pico),HX_("pico",e5,e8,57,4a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectPlayable_obj,spooky),HX_("spooky",eb,bd,9e,c1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectPlayable_obj,eduardo),HX_("eduardo",f2,58,fe,01)},
	{::hx::fsFloat,(int)offsetof(SelectPlayable_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsFloat,(int)offsetof(SelectPlayable_obj,alpha2),HX_("alpha2",14,cb,3b,42)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectPlayable_obj,continueButton),HX_("continueButton",b9,7d,48,49)},
	{::hx::fsBool,(int)offsetof(SelectPlayable_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SelectPlayable_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &SelectPlayable_obj::_hx_char,HX_("char",d6,5e,bf,41)},
	{::hx::fsBool,(void *) &SelectPlayable_obj::bfMarioHatSelected,HX_("bfMarioHatSelected",16,37,a6,9e)},
	{::hx::fsBool,(void *) &SelectPlayable_obj::picoLuigiHatSelected,HX_("picoLuigiHatSelected",19,b3,64,18)},
	{::hx::fsBool,(void *) &SelectPlayable_obj::spookyHatsSelected,HX_("spookyHatsSelected",be,4d,66,9c)},
	{::hx::fsBool,(void *) &SelectPlayable_obj::eduardoSelected,HX_("eduardoSelected",6d,81,6a,1f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SelectPlayable_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("bgActual",33,36,56,eb),
	HX_("title",98,15,3b,10),
	HX_("bf",c4,55,00,00),
	HX_("pico",e5,e8,57,4a),
	HX_("spooky",eb,bd,9e,c1),
	HX_("eduardo",f2,58,fe,01),
	HX_("alpha",5e,a7,96,21),
	HX_("alpha2",14,cb,3b,42),
	HX_("continueButton",b9,7d,48,49),
	HX_("curSelected",fb,eb,ab,32),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void SelectPlayable_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SelectPlayable_obj::_hx_char,"char");
	HX_MARK_MEMBER_NAME(SelectPlayable_obj::bfMarioHatSelected,"bfMarioHatSelected");
	HX_MARK_MEMBER_NAME(SelectPlayable_obj::picoLuigiHatSelected,"picoLuigiHatSelected");
	HX_MARK_MEMBER_NAME(SelectPlayable_obj::spookyHatsSelected,"spookyHatsSelected");
	HX_MARK_MEMBER_NAME(SelectPlayable_obj::eduardoSelected,"eduardoSelected");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SelectPlayable_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SelectPlayable_obj::_hx_char,"char");
	HX_VISIT_MEMBER_NAME(SelectPlayable_obj::bfMarioHatSelected,"bfMarioHatSelected");
	HX_VISIT_MEMBER_NAME(SelectPlayable_obj::picoLuigiHatSelected,"picoLuigiHatSelected");
	HX_VISIT_MEMBER_NAME(SelectPlayable_obj::spookyHatsSelected,"spookyHatsSelected");
	HX_VISIT_MEMBER_NAME(SelectPlayable_obj::eduardoSelected,"eduardoSelected");
};

#endif

::hx::Class SelectPlayable_obj::__mClass;

static ::String SelectPlayable_obj_sStaticFields[] = {
	HX_("char",d6,5e,bf,41),
	HX_("bfMarioHatSelected",16,37,a6,9e),
	HX_("picoLuigiHatSelected",19,b3,64,18),
	HX_("spookyHatsSelected",be,4d,66,9c),
	HX_("eduardoSelected",6d,81,6a,1f),
	::String(null())
};

void SelectPlayable_obj::__register()
{
	SelectPlayable_obj _hx_dummy;
	SelectPlayable_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SelectPlayable",ca,6c,2a,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SelectPlayable_obj::__GetStatic;
	__mClass->mSetStaticField = &SelectPlayable_obj::__SetStatic;
	__mClass->mMarkFunc = SelectPlayable_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SelectPlayable_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectPlayable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectPlayable_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SelectPlayable_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectPlayable_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectPlayable_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SelectPlayable_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ea24f67086c0f433_26_boot)
HXDLIN(  26)		_hx_char = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ea24f67086c0f433_28_boot)
HXDLIN(  28)		bfMarioHatSelected = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ea24f67086c0f433_29_boot)
HXDLIN(  29)		picoLuigiHatSelected = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ea24f67086c0f433_30_boot)
HXDLIN(  30)		spookyHatsSelected = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ea24f67086c0f433_31_boot)
HXDLIN(  31)		eduardoSelected = false;
            	}
}

