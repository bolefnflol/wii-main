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
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_GamejoltLogInState
#include <GamejoltLogInState.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_KadeEngineData
#include <KadeEngineData.h>
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
#ifndef INCLUDED_PressA
#include <PressA.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
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
#ifndef INCLUDED_flixel_addons_transition_GraphicTransTileDiamond
#include <flixel/addons/transition/GraphicTransTileDiamond.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a55214e0452daa02_39_new,"TitleState","new",0x3b23deeb,"TitleState.new","TitleState.hx",39,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_51_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",51,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_78_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",78,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_46_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",46,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_88_startIntro,"TitleState","startIntro",0x6a094b7f,"TitleState.startIntro","TitleState.hx",88,0xd132a6e5)
static const int _hx_array_data_8ca18d79_5[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const int _hx_array_data_8ca18d79_6[] = {
	(int)4,(int)5,(int)6,(int)7,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_150_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",150,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_175_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",175,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_192_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",192,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_202_beatHit,"TitleState","beatHit",0xfba69a88,"TitleState.beatHit","TitleState.hx",202,0xd132a6e5)

void TitleState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_39_new)
HXLINE( 147)		this->transitioning = false;
HXLINE(  84)		this->danceLeft = false;
HXLINE(  39)		super::__construct(TransIn,TransOut);
            	}

Dynamic TitleState_obj::__CreateEmpty() { return new TitleState_obj; }

void *TitleState_obj::_hx_vtable = 0;

Dynamic TitleState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleState_obj > _hx_result = new TitleState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TitleState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x22c6bd01) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x22c6bd01;
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

void TitleState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run(int exitCode){
            			HX_STACKFRAME(&_hx_pos_a55214e0452daa02_51_create)
HXLINE(  51)			::DiscordClient_obj::shutdown();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::TitleState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_78_create)
HXLINE(  78)			_gthis->startIntro();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_46_create)
HXDLIN(  46)		 ::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  48)		::DiscordClient_obj::initialize();
HXLINE(  50)		::lime::app::Application_obj::current->onExit->add( ::Dynamic(new _hx_Closure_0()),null(),null());
HXLINE(  54)		::DiscordClient_obj::changePresence(HX_("Just booted the game",1c,05,fa,17),null(),null(),null(),null());
HXLINE(  57)		this->super::create();
HXLINE(  59)		::PlayerSettings_obj::init();
HXLINE(  61)		::flixel::FlxG_obj::save->bind(HX_("FunkinOnAWii",26,c8,4d,16),HX_("B.O.L.E",d8,ae,3c,b8));
HXLINE(  63)		::KadeEngineData_obj::initSave();
HXLINE(  65)		::GamejoltLogInState_obj::saveData();
HXLINE(  66)		::Highscore_obj::load();
HXLINE(  68)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekUnlocked",37,64,c4,a5),::hx::paccDynamic) )) {
HXLINE(  70)			if ((::StoryMenuState_obj::weekUnlocked->length < 4)) {
HXLINE(  71)				::StoryMenuState_obj::weekUnlocked->insert(0,true);
            			}
HXLINE(  72)			if (!(::StoryMenuState_obj::weekUnlocked->__get(0))) {
HXLINE(  73)				::StoryMenuState_obj::weekUnlocked[0] = true;
            			}
            		}
HXLINE(  76)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_1(_gthis)),null());
            	}


void TitleState_obj::startIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_88_startIntro)
HXLINE(  89)		::flixel::FlxG_obj::camera->flash(-1,((Float)1.3),null(),null());
HXLINE(  91)		::Conductor_obj::changeBPM(( (Float)(175) ));
HXLINE(  92)		this->persistentUpdate = true;
HXLINE(  94)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  95)		this->add(bg);
HXLINE(  97)		this->remoteDance =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.07)),null());
HXLINE(  98)		 ::flixel::FlxSprite _hx_tmp = this->remoteDance;
HXDLIN(  98)		::String library = null();
HXDLIN(  98)		::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("RemoteTitle",12,9d,76,9f)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  98)		_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("RemoteTitle",12,9d,76,9f)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  99)		this->remoteDance->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("remote",86,9a,88,04),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_5,4),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 100)		this->remoteDance->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("remote",86,9a,88,04),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_6,4),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 101)		 ::flixel::FlxSprite fh = this->remoteDance;
HXDLIN( 101)		fh->set_x((fh->x + 250));
HXLINE( 102)		 ::flixel::FlxSprite fh1 = this->remoteDance;
HXDLIN( 102)		fh1->set_y((fh1->y + 50));
HXLINE( 103)		this->remoteDance->set_antialiasing(true);
HXLINE( 104)		this->add(this->remoteDance);
HXLINE( 106)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,-10,null());
HXLINE( 107)		 ::flixel::FlxSprite _hx_tmp2 = this->logoBl;
HXDLIN( 107)		::String library1 = null();
HXDLIN( 107)		::String _hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("FunkinOnAWii",26,c8,4d,16)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN( 107)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("FunkinOnAWii",26,c8,4d,16)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1)));
HXLINE( 108)		this->logoBl->set_antialiasing(true);
HXLINE( 109)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,null(),null(),null());
HXLINE( 110)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 111)		this->logoBl->updateHitbox();
HXLINE( 112)		this->add(this->logoBl);
HXLINE( 114)		this->titleText =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,100,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.8)),null());
HXLINE( 115)		 ::flixel::FlxSprite _hx_tmp4 = this->titleText;
HXDLIN( 115)		::String library2 = null();
HXDLIN( 115)		::String _hx_tmp5 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleEnter",60,80,6b,82)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
HXDLIN( 115)		_hx_tmp4->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp5,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleEnter",60,80,6b,82)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2)));
HXLINE( 116)		this->titleText->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Press Enter to Begin",e9,79,2c,83),24,null(),null(),null());
HXLINE( 117)		this->titleText->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("ENTER PRESSED",5a,47,9f,63),24,null(),null(),null());
HXLINE( 118)		this->titleText->set_antialiasing(true);
HXLINE( 119)		this->titleText->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 120)		this->titleText->updateHitbox();
HXLINE( 121)		this->add(this->titleText);
HXLINE( 123)		if (!(::TitleState_obj::initialized)) {
HXLINE( 125)			 ::flixel::graphics::FlxGraphic diamond = ::flixel::graphics::FlxGraphic_obj::fromClass(::hx::ClassOf< ::flixel::addons::transition::GraphicTransTileDiamond >(),null(),null(),null());
HXLINE( 126)			diamond->persist = true;
HXLINE( 127)			diamond->set_destroyOnNoUse(false);
HXLINE( 129)			 ::flixel::math::FlxPoint _hx_tmp =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,-1);
HXDLIN( 129)			::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn =  ::flixel::addons::transition::TransitionData_obj::__alloc( HX_CTX ,HX_("fade",7c,b5,b5,43),-16777216,1,_hx_tmp, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("width",06,b6,62,ca),32)
            				->setFixed(1,HX_("height",e7,07,4c,02),32)
            				->setFixed(2,HX_("asset",f0,69,39,26),diamond)), ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,-200,-200,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.4))));
HXLINE( 131)			 ::flixel::math::FlxPoint _hx_tmp1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 131)			::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut =  ::flixel::addons::transition::TransitionData_obj::__alloc( HX_CTX ,HX_("fade",7c,b5,b5,43),-16777216,((Float)0.7),_hx_tmp1, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("width",06,b6,62,ca),32)
            				->setFixed(1,HX_("height",e7,07,4c,02),32)
            				->setFixed(2,HX_("asset",f0,69,39,26),diamond)), ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,-200,-200,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.4))));
HXLINE( 134)			this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
HXLINE( 135)			this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
HXLINE( 137)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp2 = ::flixel::FlxG_obj::sound;
HXDLIN( 137)			::String library = null();
HXDLIN( 137)			_hx_tmp2->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("FunkinOnAWii",26,c8,4d,16)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE( 139)			{
HXLINE( 139)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 139)				 ::Dynamic onComplete = null();
HXDLIN( 139)				if (::hx::IsNull( _this->_channel )) {
HXLINE( 139)					_this->play(null(),null(),null());
            				}
HXDLIN( 139)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 139)					_this->fadeTween->cancel();
            				}
HXDLIN( 139)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
            		}
HXLINE( 142)		::TitleState_obj::initialized = true;
HXLINE( 144)		::flixel::FlxG_obj::mouse->set_visible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,startIntro,(void))

void TitleState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_150_update)
HXDLIN( 150)		 ::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 151)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 151)		if (_this->keyManager->checkStatusUnsafe(50,_this->status)) {
HXLINE( 153)			{
HXLINE( 153)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 153)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 154)			{
HXLINE( 154)				 ::flixel::FlxState nextState =  ::GamejoltLogInState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 154)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 154)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 157)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 157)		if (_this1->keyManager->checkStatusUnsafe(49,_this1->status)) {
HXLINE( 158)			 ::flixel::FlxState nextState =  ::FreeplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 158)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 158)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 160)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 161)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 163)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 163)		if (_this2->keyManager->checkStatusUnsafe(70,_this2->status)) {
HXLINE( 165)			::flixel::FlxG_obj::set_fullscreen(!(::flixel::FlxG_obj::get_fullscreen()));
            		}
HXLINE( 168)		bool pressedEnter = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 170)		bool _hx_tmp;
HXDLIN( 170)		if (pressedEnter) {
HXLINE( 170)			_hx_tmp = !(this->transitioning);
            		}
            		else {
HXLINE( 170)			_hx_tmp = false;
            		}
HXDLIN( 170)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::TitleState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_175_update)
HXLINE( 176)				 ::flixel::FlxSprite fh = _gthis->logoBl;
HXDLIN( 176)				fh->set_alpha((fh->alpha - ((Float)0.08)));
HXLINE( 177)				 ::flixel::FlxSprite fh1 = _gthis->remoteDance;
HXDLIN( 177)				fh1->set_alpha((fh1->alpha - ((Float)0.08)));
HXLINE( 178)				bool _hx_tmp;
HXDLIN( 178)				if ((_gthis->logoBl->alpha > 0)) {
HXLINE( 178)					_hx_tmp = (_gthis->remoteDance->alpha > 0);
            				}
            				else {
HXLINE( 178)					_hx_tmp = false;
            				}
HXDLIN( 178)				if (_hx_tmp) {
HXLINE( 180)					tmr->reset(((Float)0.1));
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_192_update)
HXLINE( 192)				 ::flixel::FlxState nextState =  ::PressA_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 192)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 192)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 172)			this->titleText->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
HXLINE( 174)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.1), ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 184)			::flixel::FlxG_obj::camera->flash(-1,1,null(),null());
HXLINE( 185)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 185)			_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 187)			this->transitioning = true;
HXLINE( 188)			{
HXLINE( 188)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 188)				 ::Dynamic onComplete = null();
HXDLIN( 188)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 188)					_this->fadeTween->cancel();
            				}
HXDLIN( 188)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(0) ),4, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE( 190)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_1()),null());
            		}
HXLINE( 196)		this->super::update(elapsed);
HXLINE( 198)		::flixel::FlxG_obj::save->data->__SetField(HX_("a",61,00,00,00),::TitleState_obj::a,::hx::paccDynamic);
            	}


void TitleState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_202_beatHit)
HXLINE( 203)		this->super::beatHit();
HXLINE( 205)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 206)		this->danceLeft = !(this->danceLeft);
HXLINE( 208)		if (this->danceLeft) {
HXLINE( 209)			this->remoteDance->animation->play(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            		}
            		else {
HXLINE( 211)			this->remoteDance->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            		}
            	}


bool TitleState_obj::initialized;

bool TitleState_obj::a;


::hx::ObjectPtr< TitleState_obj > TitleState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< TitleState_obj > __this = new TitleState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< TitleState_obj > TitleState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	TitleState_obj *__this = (TitleState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleState_obj), true, "TitleState"));
	*(void **)__this = TitleState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

TitleState_obj::TitleState_obj()
{
}

void TitleState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleState);
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(remoteDance,"remoteDance");
	HX_MARK_MEMBER_NAME(danceLeft,"danceLeft");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(transitioning,"transitioning");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(remoteDance,"remoteDance");
	HX_VISIT_MEMBER_NAME(danceLeft,"danceLeft");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(transitioning,"transitioning");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"danceLeft") ) { return ::hx::Val( danceLeft ); }
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIntro") ) { return ::hx::Val( startIntro_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"remoteDance") ) { return ::hx::Val( remoteDance ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { return ::hx::Val( transitioning ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TitleState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { outValue = ( a ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
	}
	return false;
}

::hx::Val TitleState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"danceLeft") ) { danceLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"remoteDance") ) { remoteDance=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { transitioning=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TitleState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void TitleState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("remoteDance",cd,72,8c,7f));
	outFields->push(HX_("danceLeft",da,cc,f9,df));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("transitioning",6d,6a,93,94));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,remoteDance),HX_("remoteDance",cd,72,8c,7f)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,danceLeft),HX_("danceLeft",da,cc,f9,df)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,transitioning),HX_("transitioning",6d,6a,93,94)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TitleState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &TitleState_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{::hx::fsBool,(void *) &TitleState_obj::a,HX_("a",61,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TitleState_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("logoBl",15,ca,6e,5c),
	HX_("remoteDance",cd,72,8c,7f),
	HX_("danceLeft",da,cc,f9,df),
	HX_("titleText",65,ba,a4,70),
	HX_("startIntro",aa,a2,37,da),
	HX_("transitioning",6d,6a,93,94),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

static void TitleState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TitleState_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(TitleState_obj::a,"a");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TitleState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TitleState_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(TitleState_obj::a,"a");
};

#endif

::hx::Class TitleState_obj::__mClass;

static ::String TitleState_obj_sStaticFields[] = {
	HX_("initialized",14,f5,0f,37),
	HX_("a",61,00,00,00),
	::String(null())
};

void TitleState_obj::__register()
{
	TitleState_obj _hx_dummy;
	TitleState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TitleState",79,8d,a1,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TitleState_obj::__GetStatic;
	__mClass->mSetStaticField = &TitleState_obj::__SetStatic;
	__mClass->mMarkFunc = TitleState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TitleState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TitleState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

