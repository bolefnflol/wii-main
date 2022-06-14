#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_FNFmenu
#include <FNFmenu.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
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
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_WiiMenu
#include <WiiMenu.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
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
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_63843ad1f017500b_17_new,"FNFmenu","new",0xbbd6320f,"FNFmenu.new","FNFmenu.hx",17,0x37f20441)
HX_LOCAL_STACK_FRAME(_hx_pos_63843ad1f017500b_28_create,"FNFmenu","create",0xef2bfcad,"FNFmenu.create","FNFmenu.hx",28,0x37f20441)
HX_LOCAL_STACK_FRAME(_hx_pos_63843ad1f017500b_77_beatHit,"FNFmenu","beatHit",0xb9eb4fac,"FNFmenu.beatHit","FNFmenu.hx",77,0x37f20441)
HX_LOCAL_STACK_FRAME(_hx_pos_63843ad1f017500b_103_update,"FNFmenu","update",0xfa221bba,"FNFmenu.update","FNFmenu.hx",103,0x37f20441)
HX_LOCAL_STACK_FRAME(_hx_pos_63843ad1f017500b_200_update,"FNFmenu","update",0xfa221bba,"FNFmenu.update","FNFmenu.hx",200,0x37f20441)
HX_LOCAL_STACK_FRAME(_hx_pos_63843ad1f017500b_210_update,"FNFmenu","update",0xfa221bba,"FNFmenu.update","FNFmenu.hx",210,0x37f20441)
HX_LOCAL_STACK_FRAME(_hx_pos_63843ad1f017500b_221_update,"FNFmenu","update",0xfa221bba,"FNFmenu.update","FNFmenu.hx",221,0x37f20441)
HX_LOCAL_STACK_FRAME(_hx_pos_63843ad1f017500b_232_fadeFreeplay,"FNFmenu","fadeFreeplay",0xc7ab4ead,"FNFmenu.fadeFreeplay","FNFmenu.hx",232,0x37f20441)
HX_LOCAL_STACK_FRAME(_hx_pos_63843ad1f017500b_230_fadeFreeplay,"FNFmenu","fadeFreeplay",0xc7ab4ead,"FNFmenu.fadeFreeplay","FNFmenu.hx",230,0x37f20441)
HX_LOCAL_STACK_FRAME(_hx_pos_63843ad1f017500b_246_fadeStory,"FNFmenu","fadeStory",0xc82bbbc8,"FNFmenu.fadeStory","FNFmenu.hx",246,0x37f20441)
HX_LOCAL_STACK_FRAME(_hx_pos_63843ad1f017500b_244_fadeStory,"FNFmenu","fadeStory",0xc82bbbc8,"FNFmenu.fadeStory","FNFmenu.hx",244,0x37f20441)
HX_LOCAL_STACK_FRAME(_hx_pos_63843ad1f017500b_258_offsetShit,"FNFmenu","offsetShit",0x17e21b24,"FNFmenu.offsetShit","FNFmenu.hx",258,0x37f20441)

void FNFmenu_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_63843ad1f017500b_17_new)
HXLINE(  74)		this->shouldBop = true;
HXLINE(  73)		this->danceLeft = false;
HXLINE(  17)		super::__construct(TransIn,TransOut);
            	}

Dynamic FNFmenu_obj::__CreateEmpty() { return new FNFmenu_obj; }

void *FNFmenu_obj::_hx_vtable = 0;

Dynamic FNFmenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FNFmenu_obj > _hx_result = new FNFmenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FNFmenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x0250f6f9) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0250f6f9;
			} else {
				return inClassId==(int)0x23a57bae;
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

void FNFmenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_63843ad1f017500b_28_create)
HXLINE(  31)		::DiscordClient_obj::changePresence(HX_("In the FNF Menus",68,14,2e,37),null(),null(),null(),null());
HXLINE(  34)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE(  36)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  36)			::String library = null();
HXDLIN(  36)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + (HX_("freakyMenu",15,c9,93,86) + ::flixel::FlxG_obj::random->_hx_int(1,2,null()))) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
HXLINE(  37)			::Conductor_obj::changeBPM(( (Float)(102) ));
            		}
HXLINE(  40)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  40)		::String library = null();
HXDLIN(  40)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  41)		this->bg->set_color(-137103);
HXLINE(  42)		this->bg->updateHitbox();
HXLINE(  43)		{
HXLINE(  43)			 ::flixel::FlxSprite _this = this->bg;
HXDLIN(  43)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  43)			bool _hx_tmp1;
HXDLIN(  43)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  43)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  43)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  43)			if (_hx_tmp1) {
HXLINE(  43)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  43)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  43)			bool _hx_tmp2;
HXDLIN(  43)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  43)					_hx_tmp2 = true;
            				}
            				break;
            				default:{
HXLINE(  43)					_hx_tmp2 = false;
            				}
            			}
HXDLIN(  43)			if (_hx_tmp2) {
HXLINE(  43)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  43)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  44)		this->bg->set_antialiasing(true);
HXLINE(  45)		this->add(this->bg);
HXLINE(  47)		this->storyMode =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,80,20,null());
HXLINE(  48)		this->storyMode->set_alpha(( (Float)(1) ));
HXLINE(  49)		 ::flixel::FlxSprite _hx_tmp3 = this->storyMode;
HXDLIN(  49)		::String library1 = null();
HXDLIN(  49)		::String _hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("fnf/story",04,3a,46,80)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN(  49)		_hx_tmp3->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp4,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("fnf/story",04,3a,46,80)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1)));
HXLINE(  50)		this->storyMode->animation->addByPrefix(HX_("bop",03,be,4a,00),HX_("story mode instance 1",58,16,f0,71),24,false,null(),null());
HXLINE(  51)		this->storyMode->animation->addByPrefix(HX_("bop2",cf,84,1b,41),HX_("story mode instance 1",58,16,f0,71),24,false,null(),null());
HXLINE(  52)		this->add(this->storyMode);
HXLINE(  54)		this->freeplay =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,50,280,null());
HXLINE(  55)		this->freeplay->set_alpha(((Float)0.5));
HXLINE(  56)		 ::flixel::FlxSprite _hx_tmp5 = this->freeplay;
HXDLIN(  56)		::String library2 = null();
HXDLIN(  56)		::String _hx_tmp6 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("fnf/freeplay",f1,5d,5c,0c)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
HXDLIN(  56)		_hx_tmp5->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp6,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("fnf/freeplay",f1,5d,5c,0c)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2)));
HXLINE(  57)		this->freeplay->animation->addByPrefix(HX_("bop",03,be,4a,00),HX_("freeplay instance 1",66,66,6d,cc),24,false,null(),null());
HXLINE(  58)		this->freeplay->animation->addByPrefix(HX_("bop2",cf,84,1b,41),HX_("freeplay instance 1",66,66,6d,cc),24,false,null(),null());
HXLINE(  59)		this->add(this->freeplay);
HXLINE(  61)		this->ost =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,140,445,null());
HXLINE(  62)		this->ost->set_alpha(((Float)0.5));
HXLINE(  63)		 ::flixel::FlxSprite _hx_tmp7 = this->ost;
HXDLIN(  63)		::String library3 = null();
HXDLIN(  63)		::String _hx_tmp8 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("fnf/ost",1f,d3,13,67)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3);
HXDLIN(  63)		_hx_tmp7->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp8,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("fnf/ost",1f,d3,13,67)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library3)));
HXLINE(  64)		this->ost->animation->addByPrefix(HX_("bop",03,be,4a,00),HX_("bump",f6,0f,20,41),24,false,null(),null());
HXLINE(  65)		this->ost->animation->addByPrefix(HX_("bop2",cf,84,1b,41),HX_("bump",f6,0f,20,41),24,false,null(),null());
HXLINE(  66)		this->add(this->ost);
HXLINE(  68)		this->camZoom = ::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(0)),0,null());
HXLINE(  70)		this->super::create();
            	}


void FNFmenu_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_63843ad1f017500b_77_beatHit)
HXLINE(  78)		this->super::beatHit();
HXLINE(  80)		this->danceLeft = !(this->danceLeft);
HXLINE(  82)		if (this->danceLeft) {
HXLINE(  84)			this->storyMode->animation->play(HX_("bop",03,be,4a,00),true,null(),null());
HXLINE(  85)			this->freeplay->animation->play(HX_("bop",03,be,4a,00),true,null(),null());
HXLINE(  86)			this->ost->animation->play(HX_("bop",03,be,4a,00),true,null(),null());
            		}
            		else {
HXLINE(  90)			this->storyMode->animation->play(HX_("bop2",cf,84,1b,41),true,null(),null());
HXLINE(  91)			this->freeplay->animation->play(HX_("bop2",cf,84,1b,41),true,null(),null());
HXLINE(  92)			this->ost->animation->play(HX_("bop2",cf,84,1b,41),true,null(),null());
            		}
HXLINE(  95)		if (this->shouldBop) {
HXLINE(  97)			 ::flixel::FlxCamera fh = ::flixel::FlxG_obj::camera;
HXDLIN(  97)			fh->set_zoom((fh->zoom + ((Float)0.035)));
HXLINE(  98)			this->camZoom = ::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),1)),((Float)0.1),null());
            		}
            	}


void FNFmenu_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_63843ad1f017500b_103_update)
HXLINE( 104)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 105)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 107)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 107)		if (_this->keyManager->checkStatusUnsafe(49,_this->status)) {
HXLINE( 108)			this->shouldBop = !(this->shouldBop);
            		}
HXLINE( 110)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 110)		if (_this1->keyManager->checkStatusUnsafe(38,_this1->status)) {
HXLINE( 112)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 112)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 113)			if ((this->storyMode->alpha >= 1)) {
HXLINE( 115)				this->storyMode->set_alpha(((Float)0.5));
HXLINE( 116)				this->freeplay->set_alpha(((Float)0.5));
HXLINE( 117)				this->ost->set_alpha(( (Float)(1) ));
HXLINE( 118)				::flixel::tweens::FlxTween_obj::tween(this->ost->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("x",78,00,00,00),((Float)1.1))
            					->setFixed(1,HX_("y",79,00,00,00),((Float)1.1))),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            					->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE( 119)				bool _hx_tmp;
HXDLIN( 119)				if ((this->storyMode->alpha >= ((Float)0.5))) {
HXLINE( 119)					_hx_tmp = (this->freeplay->alpha >= ((Float)0.5));
            				}
            				else {
HXLINE( 119)					_hx_tmp = false;
            				}
HXDLIN( 119)				if (_hx_tmp) {
HXLINE( 121)					::flixel::tweens::FlxTween_obj::tween(this->storyMode->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("x",78,00,00,00),1)
            						->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            						->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE( 122)					::flixel::tweens::FlxTween_obj::tween(this->freeplay->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("x",78,00,00,00),1)
            						->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            						->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
            				}
            			}
            			else {
HXLINE( 125)				if ((this->freeplay->alpha >= 1)) {
HXLINE( 127)					this->freeplay->set_alpha(((Float)0.5));
HXLINE( 128)					this->storyMode->set_alpha(( (Float)(1) ));
HXLINE( 129)					this->ost->set_alpha(((Float)0.5));
HXLINE( 130)					::flixel::tweens::FlxTween_obj::tween(this->storyMode->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("x",78,00,00,00),((Float)1.1))
            						->setFixed(1,HX_("y",79,00,00,00),((Float)1.1))),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            						->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE( 131)					bool _hx_tmp;
HXDLIN( 131)					if ((this->freeplay->alpha >= ((Float)0.5))) {
HXLINE( 131)						_hx_tmp = (this->ost->alpha >= ((Float)0.5));
            					}
            					else {
HXLINE( 131)						_hx_tmp = false;
            					}
HXDLIN( 131)					if (_hx_tmp) {
HXLINE( 133)						::flixel::tweens::FlxTween_obj::tween(this->freeplay->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("x",78,00,00,00),1)
            							->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            							->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE( 134)						::flixel::tweens::FlxTween_obj::tween(this->ost->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("x",78,00,00,00),1)
            							->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            							->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
            					}
            				}
            				else {
HXLINE( 137)					if ((this->ost->alpha >= 1)) {
HXLINE( 139)						this->freeplay->set_alpha(( (Float)(1) ));
HXLINE( 140)						this->storyMode->set_alpha(((Float)0.5));
HXLINE( 141)						this->ost->set_alpha(((Float)0.5));
HXLINE( 142)						::flixel::tweens::FlxTween_obj::tween(this->freeplay->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("x",78,00,00,00),((Float)1.1))
            							->setFixed(1,HX_("y",79,00,00,00),((Float)1.1))),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            							->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE( 143)						bool _hx_tmp;
HXDLIN( 143)						if ((this->storyMode->alpha >= ((Float)0.5))) {
HXLINE( 143)							_hx_tmp = (this->ost->alpha >= ((Float)0.5));
            						}
            						else {
HXLINE( 143)							_hx_tmp = false;
            						}
HXDLIN( 143)						if (_hx_tmp) {
HXLINE( 145)							::flixel::tweens::FlxTween_obj::tween(this->storyMode->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("x",78,00,00,00),1)
            								->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            								->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE( 146)							::flixel::tweens::FlxTween_obj::tween(this->ost->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("x",78,00,00,00),1)
            								->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            								->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
            						}
            					}
            				}
            			}
            		}
HXLINE( 150)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 150)		if (_this2->keyManager->checkStatusUnsafe(40,_this2->status)) {
HXLINE( 152)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 152)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 153)			if ((this->storyMode->alpha >= 1)) {
HXLINE( 155)				this->storyMode->set_alpha(((Float)0.5));
HXLINE( 156)				this->ost->set_alpha(((Float)0.5));
HXLINE( 157)				this->freeplay->set_alpha(( (Float)(1) ));
HXLINE( 158)				::flixel::tweens::FlxTween_obj::tween(this->freeplay->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("x",78,00,00,00),((Float)1.1))
            					->setFixed(1,HX_("y",79,00,00,00),((Float)1.1))),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            					->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE( 159)				bool _hx_tmp;
HXDLIN( 159)				if ((this->storyMode->alpha >= ((Float)0.5))) {
HXLINE( 159)					_hx_tmp = (this->ost->alpha >= ((Float)0.5));
            				}
            				else {
HXLINE( 159)					_hx_tmp = false;
            				}
HXDLIN( 159)				if (_hx_tmp) {
HXLINE( 161)					::flixel::tweens::FlxTween_obj::tween(this->storyMode->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("x",78,00,00,00),1)
            						->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            						->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE( 162)					::flixel::tweens::FlxTween_obj::tween(this->ost->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("x",78,00,00,00),1)
            						->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            						->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
            				}
            			}
            			else {
HXLINE( 165)				if ((this->freeplay->alpha >= 1)) {
HXLINE( 167)					this->freeplay->set_alpha(((Float)0.5));
HXLINE( 168)					this->storyMode->set_alpha(((Float)0.5));
HXLINE( 169)					this->ost->set_alpha(( (Float)(1) ));
HXLINE( 170)					::flixel::tweens::FlxTween_obj::tween(this->ost->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("x",78,00,00,00),((Float)1.1))
            						->setFixed(1,HX_("y",79,00,00,00),((Float)1.1))),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            						->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE( 171)					bool _hx_tmp;
HXDLIN( 171)					if ((this->freeplay->alpha >= ((Float)0.5))) {
HXLINE( 171)						_hx_tmp = (this->storyMode->alpha >= ((Float)0.5));
            					}
            					else {
HXLINE( 171)						_hx_tmp = false;
            					}
HXDLIN( 171)					if (_hx_tmp) {
HXLINE( 173)						::flixel::tweens::FlxTween_obj::tween(this->freeplay->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("x",78,00,00,00),1)
            							->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            							->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE( 174)						::flixel::tweens::FlxTween_obj::tween(this->storyMode->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("x",78,00,00,00),1)
            							->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            							->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
            					}
            				}
            				else {
HXLINE( 177)					if ((this->ost->alpha >= 1)) {
HXLINE( 179)						this->freeplay->set_alpha(((Float)0.5));
HXLINE( 180)						this->storyMode->set_alpha(( (Float)(1) ));
HXLINE( 181)						this->ost->set_alpha(((Float)0.5));
HXLINE( 182)						::flixel::tweens::FlxTween_obj::tween(this->storyMode->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("x",78,00,00,00),((Float)1.1))
            							->setFixed(1,HX_("y",79,00,00,00),((Float)1.1))),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            							->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE( 183)						bool _hx_tmp;
HXDLIN( 183)						if ((this->freeplay->alpha >= ((Float)0.5))) {
HXLINE( 183)							_hx_tmp = (this->ost->alpha >= ((Float)0.5));
            						}
            						else {
HXLINE( 183)							_hx_tmp = false;
            						}
HXDLIN( 183)						if (_hx_tmp) {
HXLINE( 185)							::flixel::tweens::FlxTween_obj::tween(this->freeplay->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("x",78,00,00,00),1)
            								->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            								->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE( 186)							::flixel::tweens::FlxTween_obj::tween(this->ost->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("x",78,00,00,00),1)
            								->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            								->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
            						}
            					}
            				}
            			}
            		}
HXLINE( 191)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 193)			if ((this->storyMode->alpha >= 1)) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_63843ad1f017500b_200_update)
HXLINE( 200)					 ::flixel::FlxState nextState =  ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 200)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 200)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 195)				::flixel::effects::FlxFlicker_obj::flicker(this->storyMode,1,((Float)0.05),false,null(),null(),null());
HXLINE( 196)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 196)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 197)				this->fadeStory();
HXLINE( 198)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0()),null());
            			}
            			else {
HXLINE( 203)				if ((this->freeplay->alpha >= 1)) {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer tmr){
            						HX_GC_STACKFRAME(&_hx_pos_63843ad1f017500b_210_update)
HXLINE( 211)						{
HXLINE( 211)							 ::flixel::FlxState nextState =  ::FreeplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 211)							if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 211)								::flixel::FlxG_obj::game->_requestedState = nextState;
            							}
            						}
HXLINE( 212)						{
HXLINE( 212)							 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 212)							_this->cleanup(_this->autoDestroy,true);
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 205)					::flixel::effects::FlxFlicker_obj::flicker(this->freeplay,1,((Float)0.05),false,null(),null(),null());
HXLINE( 206)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 206)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 207)					this->fadeFreeplay();
HXLINE( 208)					{
HXLINE( 208)						 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 208)						 ::Dynamic onComplete = null();
HXDLIN( 208)						if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 208)							_this->fadeTween->cancel();
            						}
HXDLIN( 208)						_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(0) ),2, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            					}
HXLINE( 209)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_1()),null());
            				}
            			}
            		}
HXLINE( 216)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_63843ad1f017500b_221_update)
HXLINE( 222)				{
HXLINE( 222)					 ::flixel::FlxState nextState =  ::WiiMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 222)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 222)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
HXLINE( 223)				{
HXLINE( 223)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 223)					_this->cleanup(_this->autoDestroy,true);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 218)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 218)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 219)			{
HXLINE( 219)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 219)				 ::Dynamic onComplete = null();
HXDLIN( 219)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 219)					_this->fadeTween->cancel();
            				}
HXDLIN( 219)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(0) ),2, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE( 220)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_2()),null());
            		}
HXLINE( 226)		this->super::update(elapsed);
            	}


void FNFmenu_obj::fadeFreeplay(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::FNFmenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_63843ad1f017500b_232_fadeFreeplay)
HXLINE( 233)			 ::flixel::FlxSprite fh = _gthis->storyMode;
HXDLIN( 233)			fh->set_alpha((fh->alpha - ((Float)0.3)));
HXLINE( 234)			 ::flixel::FlxSprite fh1 = _gthis->ost;
HXDLIN( 234)			fh1->set_alpha((fh1->alpha - ((Float)0.3)));
HXLINE( 236)			bool _hx_tmp;
HXDLIN( 236)			if ((_gthis->storyMode->alpha > 0)) {
HXLINE( 236)				_hx_tmp = (_gthis->ost->alpha > 0);
            			}
            			else {
HXLINE( 236)				_hx_tmp = false;
            			}
HXDLIN( 236)			if (_hx_tmp) {
HXLINE( 238)				tmr->reset(null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_63843ad1f017500b_230_fadeFreeplay)
HXDLIN( 230)		 ::FNFmenu _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 231)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.1), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FNFmenu_obj,fadeFreeplay,(void))

void FNFmenu_obj::fadeStory(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::FNFmenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_63843ad1f017500b_246_fadeStory)
HXLINE( 247)			 ::flixel::FlxSprite fh = _gthis->freeplay;
HXDLIN( 247)			fh->set_alpha((fh->alpha - ((Float)0.3)));
HXLINE( 248)			 ::flixel::FlxSprite fh1 = _gthis->ost;
HXDLIN( 248)			fh1->set_alpha((fh1->alpha - ((Float)0.3)));
HXLINE( 250)			bool _hx_tmp;
HXDLIN( 250)			if ((_gthis->storyMode->alpha > 0)) {
HXLINE( 250)				_hx_tmp = (_gthis->ost->alpha > 0);
            			}
            			else {
HXLINE( 250)				_hx_tmp = false;
            			}
HXDLIN( 250)			if (_hx_tmp) {
HXLINE( 252)				tmr->reset(null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_63843ad1f017500b_244_fadeStory)
HXDLIN( 244)		 ::FNFmenu _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 245)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.1), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FNFmenu_obj,fadeStory,(void))

void FNFmenu_obj::offsetShit( ::flixel::FlxSprite object,int amount){
            	HX_STACKFRAME(&_hx_pos_63843ad1f017500b_258_offsetShit)
HXLINE( 259)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 259)		if (_this->keyManager->checkStatusUnsafe(83,_this->status)) {
HXLINE( 261)			object->set_y((object->y + amount));
HXLINE( 262)			::haxe::Log_obj::trace(object->y,::hx::SourceInfo(HX_("source/FNFmenu.hx",35,cc,56,c4),262,HX_("FNFmenu",9d,7e,1a,25),HX_("offsetShit",f3,58,6a,48)));
            		}
HXLINE( 265)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 265)		if (_this1->keyManager->checkStatusUnsafe(87,_this1->status)) {
HXLINE( 267)			object->set_y((object->y - ( (Float)(amount) )));
HXLINE( 268)			::haxe::Log_obj::trace(object->y,::hx::SourceInfo(HX_("source/FNFmenu.hx",35,cc,56,c4),268,HX_("FNFmenu",9d,7e,1a,25),HX_("offsetShit",f3,58,6a,48)));
            		}
HXLINE( 271)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 271)		if (_this2->keyManager->checkStatusUnsafe(65,_this2->status)) {
HXLINE( 273)			object->set_x((object->x - ( (Float)(amount) )));
HXLINE( 274)			::haxe::Log_obj::trace(object->x,::hx::SourceInfo(HX_("source/FNFmenu.hx",35,cc,56,c4),274,HX_("FNFmenu",9d,7e,1a,25),HX_("offsetShit",f3,58,6a,48)));
            		}
HXLINE( 277)		 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 277)		if (_this3->keyManager->checkStatusUnsafe(68,_this3->status)) {
HXLINE( 279)			object->set_x((object->x + amount));
HXLINE( 280)			::haxe::Log_obj::trace(object->x,::hx::SourceInfo(HX_("source/FNFmenu.hx",35,cc,56,c4),280,HX_("FNFmenu",9d,7e,1a,25),HX_("offsetShit",f3,58,6a,48)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FNFmenu_obj,offsetShit,(void))


::hx::ObjectPtr< FNFmenu_obj > FNFmenu_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< FNFmenu_obj > __this = new FNFmenu_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< FNFmenu_obj > FNFmenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	FNFmenu_obj *__this = (FNFmenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FNFmenu_obj), true, "FNFmenu"));
	*(void **)__this = FNFmenu_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

FNFmenu_obj::FNFmenu_obj()
{
}

void FNFmenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FNFmenu);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(storyMode,"storyMode");
	HX_MARK_MEMBER_NAME(freeplay,"freeplay");
	HX_MARK_MEMBER_NAME(ost,"ost");
	HX_MARK_MEMBER_NAME(camZoom,"camZoom");
	HX_MARK_MEMBER_NAME(danceLeft,"danceLeft");
	HX_MARK_MEMBER_NAME(shouldBop,"shouldBop");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FNFmenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(storyMode,"storyMode");
	HX_VISIT_MEMBER_NAME(freeplay,"freeplay");
	HX_VISIT_MEMBER_NAME(ost,"ost");
	HX_VISIT_MEMBER_NAME(camZoom,"camZoom");
	HX_VISIT_MEMBER_NAME(danceLeft,"danceLeft");
	HX_VISIT_MEMBER_NAME(shouldBop,"shouldBop");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FNFmenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ost") ) { return ::hx::Val( ost ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"camZoom") ) { return ::hx::Val( camZoom ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"freeplay") ) { return ::hx::Val( freeplay ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"storyMode") ) { return ::hx::Val( storyMode ); }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { return ::hx::Val( danceLeft ); }
		if (HX_FIELD_EQ(inName,"shouldBop") ) { return ::hx::Val( shouldBop ); }
		if (HX_FIELD_EQ(inName,"fadeStory") ) { return ::hx::Val( fadeStory_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"offsetShit") ) { return ::hx::Val( offsetShit_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fadeFreeplay") ) { return ::hx::Val( fadeFreeplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FNFmenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ost") ) { ost=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"camZoom") ) { camZoom=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"freeplay") ) { freeplay=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"storyMode") ) { storyMode=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { danceLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shouldBop") ) { shouldBop=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FNFmenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("storyMode",f8,b1,81,28));
	outFields->push(HX_("freeplay",a0,90,86,22));
	outFields->push(HX_("ost",d0,9e,54,00));
	outFields->push(HX_("camZoom",c2,f6,e9,db));
	outFields->push(HX_("danceLeft",da,cc,f9,df));
	outFields->push(HX_("shouldBop",90,af,12,40));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FNFmenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FNFmenu_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FNFmenu_obj,storyMode),HX_("storyMode",f8,b1,81,28)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FNFmenu_obj,freeplay),HX_("freeplay",a0,90,86,22)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FNFmenu_obj,ost),HX_("ost",d0,9e,54,00)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(FNFmenu_obj,camZoom),HX_("camZoom",c2,f6,e9,db)},
	{::hx::fsBool,(int)offsetof(FNFmenu_obj,danceLeft),HX_("danceLeft",da,cc,f9,df)},
	{::hx::fsBool,(int)offsetof(FNFmenu_obj,shouldBop),HX_("shouldBop",90,af,12,40)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FNFmenu_obj_sStaticStorageInfo = 0;
#endif

static ::String FNFmenu_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("storyMode",f8,b1,81,28),
	HX_("freeplay",a0,90,86,22),
	HX_("ost",d0,9e,54,00),
	HX_("camZoom",c2,f6,e9,db),
	HX_("create",fc,66,0f,7c),
	HX_("danceLeft",da,cc,f9,df),
	HX_("shouldBop",90,af,12,40),
	HX_("beatHit",7d,ea,04,74),
	HX_("update",09,86,05,87),
	HX_("fadeFreeplay",3c,de,19,59),
	HX_("fadeStory",d9,6c,fe,6f),
	HX_("offsetShit",f3,58,6a,48),
	::String(null()) };

::hx::Class FNFmenu_obj::__mClass;

void FNFmenu_obj::__register()
{
	FNFmenu_obj _hx_dummy;
	FNFmenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FNFmenu",9d,7e,1a,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FNFmenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FNFmenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FNFmenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FNFmenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

