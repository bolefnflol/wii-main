#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CreditsPage
#include <CreditsPage.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
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
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_601a1d30def780b5_16_new,"CreditsPage","new",0xb888cadb,"CreditsPage.new","CreditsPage.hx",16,0xc89388f5)
HX_LOCAL_STACK_FRAME(_hx_pos_601a1d30def780b5_35_create,"CreditsPage","create",0x6cffeb61,"CreditsPage.create","CreditsPage.hx",35,0xc89388f5)
HX_LOCAL_STACK_FRAME(_hx_pos_601a1d30def780b5_106_update,"CreditsPage","update",0x77f60a6e,"CreditsPage.update","CreditsPage.hx",106,0xc89388f5)
HX_LOCAL_STACK_FRAME(_hx_pos_601a1d30def780b5_167_update,"CreditsPage","update",0x77f60a6e,"CreditsPage.update","CreditsPage.hx",167,0xc89388f5)

void CreditsPage_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_601a1d30def780b5_16_new)
HXDLIN(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic CreditsPage_obj::__CreateEmpty() { return new CreditsPage_obj; }

void *CreditsPage_obj::_hx_vtable = 0;

Dynamic CreditsPage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CreditsPage_obj > _hx_result = new CreditsPage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CreditsPage_obj::_hx_isInstanceOf(int inClassId) {
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
			return inClassId==(int)0x7b4106a9 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void CreditsPage_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_601a1d30def780b5_35_create)
HXLINE(  38)		::DiscordClient_obj::changePresence(HX_("Viewing Credits :)))",b8,46,2d,13),null(),null(),null(),null());
HXLINE(  41)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE(  43)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  43)			::String library = null();
HXDLIN(  43)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("CreditsMusic",4b,20,d1,c7)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),1,true,null());
            		}
HXLINE(  46)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  46)		::String library = null();
HXDLIN(  46)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  47)		this->add(this->bg);
HXLINE(  49)		this->caster =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,20,140,null());
HXLINE(  50)		this->caster->set_alpha(((Float)0.5));
HXLINE(  51)		 ::flixel::FlxSprite _hx_tmp1 = this->caster;
HXDLIN(  51)		::String library1 = null();
HXDLIN(  51)		::String _hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("credits/caster",81,fb,be,23)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN(  51)		_hx_tmp1->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp2,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("credits/caster",81,fb,be,23)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1)));
HXLINE(  52)		this->caster->animation->addByPrefix(HX_("Normal",47,e6,fd,64),HX_("caster",ec,e4,8e,bb),24,false,null(),null());
HXLINE(  53)		this->caster->animation->play(HX_("Normal",47,e6,fd,64),null(),null(),null());
HXLINE(  54)		this->add(this->caster);
HXLINE(  56)		this->similirity =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,470,210,null());
HXLINE(  57)		this->similirity->set_alpha(((Float)0.5));
HXLINE(  58)		 ::flixel::FlxSprite _hx_tmp3 = this->similirity;
HXDLIN(  58)		::String library2 = null();
HXDLIN(  58)		::String _hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("credits/similirity",00,02,30,1a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
HXDLIN(  58)		_hx_tmp3->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp4,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("credits/similirity",00,02,30,1a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2)));
HXLINE(  59)		this->similirity->animation->addByPrefix(HX_("Normal",47,e6,fd,64),HX_("similirtiy",21,cc,90,3e),24,false,null(),null());
HXLINE(  60)		this->similirity->animation->play(HX_("Normal",47,e6,fd,64),null(),null(),null());
HXLINE(  61)		this->add(this->similirity);
HXLINE(  63)		this->bole =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,780,120,null());
HXLINE(  64)		this->bole->set_alpha(((Float)0.5));
HXLINE(  65)		 ::flixel::FlxSprite _hx_tmp5 = this->bole;
HXDLIN(  65)		::String library3 = null();
HXDLIN(  65)		::String _hx_tmp6 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("credits/bole",db,58,27,ad)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3);
HXDLIN(  65)		_hx_tmp5->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp6,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("credits/bole",db,58,27,ad)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library3)));
HXLINE(  66)		 ::flixel::FlxSprite _hx_tmp7 = this->bole;
HXDLIN(  66)		_hx_tmp7->setGraphicSize(::Std_obj::_hx_int((this->bole->get_width() * ((Float)0.65))),null());
HXLINE(  67)		this->bole->animation->addByPrefix(HX_("Normal",47,e6,fd,64),HX_("bole",86,81,1b,41),24,false,null(),null());
HXLINE(  68)		this->bole->animation->play(HX_("Normal",47,e6,fd,64),null(),null(),null());
HXLINE(  69)		this->add(this->bole);
HXLINE(  71)		 ::flixel::FlxSprite _hx_tmp8 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,80,470,null());
HXDLIN(  71)		::String library4 = null();
HXDLIN(  71)		this->casterLogo = _hx_tmp8->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("credits/logo/caster",9b,93,0c,1f)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library4),null(),null(),null(),null(),null());
HXLINE(  72)		 ::flixel::FlxSprite _hx_tmp9 = this->casterLogo;
HXDLIN(  72)		_hx_tmp9->setGraphicSize(::Std_obj::_hx_int((this->casterLogo->get_width() * ((Float)0.5))),null());
HXLINE(  74)		 ::flixel::FlxSprite _hx_tmp10 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,400,500,null());
HXDLIN(  74)		::String library5 = null();
HXDLIN(  74)		this->boleLogo = _hx_tmp10->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("credits/logo/bole",75,d6,66,fb)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library5),null(),null(),null(),null(),null());
HXLINE(  75)		 ::flixel::FlxSprite _hx_tmp11 = this->boleLogo;
HXDLIN(  75)		_hx_tmp11->setGraphicSize(::Std_obj::_hx_int((this->boleLogo->get_width() * ((Float)0.5))),null());
HXLINE(  77)		 ::flixel::FlxSprite _hx_tmp12 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,90,470,null());
HXDLIN(  77)		::String library6 = null();
HXDLIN(  77)		this->similirityLogo = _hx_tmp12->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("credits/logo/similirity",1a,af,94,20)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library6),null(),null(),null(),null(),null());
HXLINE(  78)		 ::flixel::FlxSprite _hx_tmp13 = this->similirityLogo;
HXDLIN(  78)		_hx_tmp13->setGraphicSize(::Std_obj::_hx_int((this->similirityLogo->get_width() * ((Float)0.5))),null());
HXLINE(  81)		this->select =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,100,1180,HX_("Select Your Favorite Developer",6f,33,6b,ce),32,null());
HXLINE(  82)		this->select->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  83)		this->select->scrollFactor->set(null(),null());
HXLINE(  84)		this->select->set_borderSize(((Float)2.4));
HXLINE(  85)		this->add(this->select);
HXLINE(  87)		this->descTextCaster =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,650,1180,HX_("Artist",e7,66,dd,ed),32,null());
HXLINE(  88)		this->descTextCaster->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  89)		this->descTextCaster->scrollFactor->set(null(),null());
HXLINE(  90)		this->descTextCaster->set_borderSize(((Float)2.4));
HXLINE(  92)		this->descTextBole =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,650,1180,HX_("Coder and designer",0f,ad,c5,cf),32,null());
HXLINE(  93)		this->descTextBole->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  94)		this->descTextBole->scrollFactor->set(null(),null());
HXLINE(  95)		this->descTextBole->set_borderSize(((Float)2.4));
HXLINE(  97)		this->descTextSimilirity =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,650,1180,HX_("Code helper",e1,6b,b1,48),32,null());
HXLINE(  98)		this->descTextSimilirity->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  99)		this->descTextSimilirity->scrollFactor->set(null(),null());
HXLINE( 100)		this->descTextSimilirity->set_borderSize(((Float)2.4));
HXLINE( 102)		this->super::create();
            	}


void CreditsPage_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_601a1d30def780b5_106_update)
HXLINE( 107)		if (::flixel::FlxG_obj::mouse->overlaps(this->caster,null())) {
HXLINE( 109)			this->caster->set_alpha(( (Float)(1) ));
HXLINE( 110)			this->add(this->descTextCaster);
HXLINE( 111)			this->add(this->casterLogo);
HXLINE( 112)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 114)				this->fancyOpenURL(HX_("https://www.youtube.com/channel/UCsc8Ntie-VucCdkXRFMgJTw",a9,25,f5,6e));
            			}
            		}
HXLINE( 117)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->caster,null()))) {
HXLINE( 119)			this->caster->set_alpha(((Float)0.5));
HXLINE( 120)			this->remove(this->descTextCaster,null());
HXLINE( 121)			this->remove(this->casterLogo,null());
            		}
HXLINE( 124)		if (::flixel::FlxG_obj::mouse->overlaps(this->bole,null())) {
HXLINE( 126)			this->bole->set_alpha(( (Float)(1) ));
HXLINE( 127)			this->add(this->descTextBole);
HXLINE( 128)			this->add(this->boleLogo);
HXLINE( 129)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 131)				this->fancyOpenURL(HX_("https://www.youtube.com/channel/UCmlrNPWEuOKKI6HmrhycjSg",c8,a1,19,7e));
            			}
            		}
HXLINE( 134)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->bole,null()))) {
HXLINE( 136)			this->bole->set_alpha(((Float)0.5));
HXLINE( 137)			this->remove(this->descTextBole,null());
HXLINE( 138)			this->remove(this->boleLogo,null());
            		}
HXLINE( 141)		if (::flixel::FlxG_obj::mouse->overlaps(this->similirity,null())) {
HXLINE( 143)			this->similirity->set_alpha(( (Float)(1) ));
HXLINE( 144)			this->add(this->descTextSimilirity);
HXLINE( 145)			this->add(this->similirityLogo);
HXLINE( 146)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 148)				this->fancyOpenURL(HX_("https://www.youtube.com/channel/UCZrKO2hfFwvvedhksJuIL8g",e2,60,93,6a));
            			}
            		}
HXLINE( 151)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->similirity,null()))) {
HXLINE( 153)			this->similirity->set_alpha(((Float)0.5));
HXLINE( 154)			this->remove(this->descTextSimilirity,null());
HXLINE( 155)			this->remove(this->similirityLogo,null());
            		}
HXLINE( 158)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_601a1d30def780b5_167_update)
HXLINE( 168)				{
HXLINE( 168)					 ::flixel::FlxState nextState =  ::WiiMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 168)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 168)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
HXLINE( 169)				{
HXLINE( 169)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 169)					_this->cleanup(_this->autoDestroy,true);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 160)			{
HXLINE( 160)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 160)				 ::Dynamic onComplete = null();
HXDLIN( 160)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 160)					_this->fadeTween->cancel();
            				}
HXDLIN( 160)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(0) ),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE( 161)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 161)			_hx_tmp->play(::Paths_obj::sound(HX_("BackSoundWii",ef,5f,ae,42),null()),null(),null(),null(),null(),null());
HXLINE( 162)			 ::flixel::FlxSprite fh = this->bg;
HXDLIN( 162)			fh->set_alpha((fh->alpha - ((Float)0.5)));
HXLINE( 163)			 ::flixel::FlxSprite fh1 = this->caster;
HXDLIN( 163)			fh1->set_alpha((fh1->alpha - ((Float)0.5)));
HXLINE( 164)			 ::flixel::FlxSprite fh2 = this->bole;
HXDLIN( 164)			fh2->set_alpha((fh2->alpha - ((Float)0.5)));
HXLINE( 165)			 ::flixel::FlxSprite fh3 = this->similirity;
HXDLIN( 165)			fh3->set_alpha((fh3->alpha - ((Float)0.5)));
HXLINE( 166)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE( 173)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< CreditsPage_obj > CreditsPage_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< CreditsPage_obj > __this = new CreditsPage_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< CreditsPage_obj > CreditsPage_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	CreditsPage_obj *__this = (CreditsPage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CreditsPage_obj), true, "CreditsPage"));
	*(void **)__this = CreditsPage_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

CreditsPage_obj::CreditsPage_obj()
{
}

void CreditsPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CreditsPage);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(select,"select");
	HX_MARK_MEMBER_NAME(descTextCaster,"descTextCaster");
	HX_MARK_MEMBER_NAME(descTextBole,"descTextBole");
	HX_MARK_MEMBER_NAME(descTextSimilirity,"descTextSimilirity");
	HX_MARK_MEMBER_NAME(caster,"caster");
	HX_MARK_MEMBER_NAME(similirity,"similirity");
	HX_MARK_MEMBER_NAME(bole,"bole");
	HX_MARK_MEMBER_NAME(casterLogo,"casterLogo");
	HX_MARK_MEMBER_NAME(similirityLogo,"similirityLogo");
	HX_MARK_MEMBER_NAME(boleLogo,"boleLogo");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CreditsPage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(select,"select");
	HX_VISIT_MEMBER_NAME(descTextCaster,"descTextCaster");
	HX_VISIT_MEMBER_NAME(descTextBole,"descTextBole");
	HX_VISIT_MEMBER_NAME(descTextSimilirity,"descTextSimilirity");
	HX_VISIT_MEMBER_NAME(caster,"caster");
	HX_VISIT_MEMBER_NAME(similirity,"similirity");
	HX_VISIT_MEMBER_NAME(bole,"bole");
	HX_VISIT_MEMBER_NAME(casterLogo,"casterLogo");
	HX_VISIT_MEMBER_NAME(similirityLogo,"similirityLogo");
	HX_VISIT_MEMBER_NAME(boleLogo,"boleLogo");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CreditsPage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bole") ) { return ::hx::Val( bole ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"select") ) { return ::hx::Val( select ); }
		if (HX_FIELD_EQ(inName,"caster") ) { return ::hx::Val( caster ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"boleLogo") ) { return ::hx::Val( boleLogo ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"similirity") ) { return ::hx::Val( similirity ); }
		if (HX_FIELD_EQ(inName,"casterLogo") ) { return ::hx::Val( casterLogo ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"descTextBole") ) { return ::hx::Val( descTextBole ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"descTextCaster") ) { return ::hx::Val( descTextCaster ); }
		if (HX_FIELD_EQ(inName,"similirityLogo") ) { return ::hx::Val( similirityLogo ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"descTextSimilirity") ) { return ::hx::Val( descTextSimilirity ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CreditsPage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bole") ) { bole=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"select") ) { select=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caster") ) { caster=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"boleLogo") ) { boleLogo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"similirity") ) { similirity=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"casterLogo") ) { casterLogo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"descTextBole") ) { descTextBole=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"descTextCaster") ) { descTextCaster=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"similirityLogo") ) { similirityLogo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"descTextSimilirity") ) { descTextSimilirity=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CreditsPage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("select",fc,1a,33,6a));
	outFields->push(HX_("descTextCaster",2a,37,d8,d8));
	outFields->push(HX_("descTextBole",44,28,1f,99));
	outFields->push(HX_("descTextSimilirity",29,c6,ba,c2));
	outFields->push(HX_("caster",ec,e4,8e,bb));
	outFields->push(HX_("similirity",eb,7c,88,3e));
	outFields->push(HX_("bole",86,81,1b,41));
	outFields->push(HX_("casterLogo",77,96,f2,0b));
	outFields->push(HX_("similirityLogo",f6,99,31,54));
	outFields->push(HX_("boleLogo",11,88,b2,75));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CreditsPage_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsPage_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsPage_obj,select),HX_("select",fc,1a,33,6a)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsPage_obj,descTextCaster),HX_("descTextCaster",2a,37,d8,d8)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsPage_obj,descTextBole),HX_("descTextBole",44,28,1f,99)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsPage_obj,descTextSimilirity),HX_("descTextSimilirity",29,c6,ba,c2)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsPage_obj,caster),HX_("caster",ec,e4,8e,bb)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsPage_obj,similirity),HX_("similirity",eb,7c,88,3e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsPage_obj,bole),HX_("bole",86,81,1b,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsPage_obj,casterLogo),HX_("casterLogo",77,96,f2,0b)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsPage_obj,similirityLogo),HX_("similirityLogo",f6,99,31,54)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsPage_obj,boleLogo),HX_("boleLogo",11,88,b2,75)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CreditsPage_obj_sStaticStorageInfo = 0;
#endif

static ::String CreditsPage_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("select",fc,1a,33,6a),
	HX_("descTextCaster",2a,37,d8,d8),
	HX_("descTextBole",44,28,1f,99),
	HX_("descTextSimilirity",29,c6,ba,c2),
	HX_("caster",ec,e4,8e,bb),
	HX_("similirity",eb,7c,88,3e),
	HX_("bole",86,81,1b,41),
	HX_("casterLogo",77,96,f2,0b),
	HX_("similirityLogo",f6,99,31,54),
	HX_("boleLogo",11,88,b2,75),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class CreditsPage_obj::__mClass;

void CreditsPage_obj::__register()
{
	CreditsPage_obj _hx_dummy;
	CreditsPage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CreditsPage",69,c1,45,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CreditsPage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CreditsPage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CreditsPage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CreditsPage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

