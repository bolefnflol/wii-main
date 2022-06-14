#include <hxcpp.h>

#ifndef INCLUDED_EduardoPage
#include <EduardoPage.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_SelectYourPlayableChar
#include <SelectYourPlayableChar.h>
#endif
#ifndef INCLUDED_WiiShopChannel
#include <WiiShopChannel.h>
#endif
#ifndef INCLUDED_WiiShopCharacters2
#include <WiiShopCharacters2.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3c4bd00f898424c2_16_new,"EduardoPage","new",0x0b33adb3,"EduardoPage.new","EduardoPage.hx",16,0xc580c91d)
HX_LOCAL_STACK_FRAME(_hx_pos_3c4bd00f898424c2_37_create,"EduardoPage","create",0x91945f89,"EduardoPage.create","EduardoPage.hx",37,0xc580c91d)
HX_LOCAL_STACK_FRAME(_hx_pos_3c4bd00f898424c2_68_Bought,"EduardoPage","Bought",0xb031a6d8,"EduardoPage.Bought","EduardoPage.hx",68,0xc580c91d)
HX_LOCAL_STACK_FRAME(_hx_pos_3c4bd00f898424c2_60_Bought,"EduardoPage","Bought",0xb031a6d8,"EduardoPage.Bought","EduardoPage.hx",60,0xc580c91d)
HX_LOCAL_STACK_FRAME(_hx_pos_3c4bd00f898424c2_85_notEnoughFunction,"EduardoPage","notEnoughFunction",0x356a19ee,"EduardoPage.notEnoughFunction","EduardoPage.hx",85,0xc580c91d)
HX_LOCAL_STACK_FRAME(_hx_pos_3c4bd00f898424c2_77_notEnoughFunction,"EduardoPage","notEnoughFunction",0x356a19ee,"EduardoPage.notEnoughFunction","EduardoPage.hx",77,0xc580c91d)
HX_LOCAL_STACK_FRAME(_hx_pos_3c4bd00f898424c2_102_alreadyBoughtFunction,"EduardoPage","alreadyBoughtFunction",0x70ea382e,"EduardoPage.alreadyBoughtFunction","EduardoPage.hx",102,0xc580c91d)
HX_LOCAL_STACK_FRAME(_hx_pos_3c4bd00f898424c2_94_alreadyBoughtFunction,"EduardoPage","alreadyBoughtFunction",0x70ea382e,"EduardoPage.alreadyBoughtFunction","EduardoPage.hx",94,0xc580c91d)
HX_LOCAL_STACK_FRAME(_hx_pos_3c4bd00f898424c2_110_update,"EduardoPage","update",0x9c8a7e96,"EduardoPage.update","EduardoPage.hx",110,0xc580c91d)
HX_LOCAL_STACK_FRAME(_hx_pos_3c4bd00f898424c2_167_save,"EduardoPage","save",0xc54f568a,"EduardoPage.save","EduardoPage.hx",167,0xc580c91d)
HX_LOCAL_STACK_FRAME(_hx_pos_3c4bd00f898424c2_159_checkIfBought,"EduardoPage","checkIfBought",0x4c980de3,"EduardoPage.checkIfBought","EduardoPage.hx",159,0xc580c91d)
HX_LOCAL_STACK_FRAME(_hx_pos_3c4bd00f898424c2_32_boot,"EduardoPage","boot",0xba1d4f7f,"EduardoPage.boot","EduardoPage.hx",32,0xc580c91d)

void EduardoPage_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_3c4bd00f898424c2_16_new)
HXLINE(  29)		this->eduardoAmount = 1000;
HXLINE(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic EduardoPage_obj::__CreateEmpty() { return new EduardoPage_obj; }

void *EduardoPage_obj::_hx_vtable = 0;

Dynamic EduardoPage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EduardoPage_obj > _hx_result = new EduardoPage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool EduardoPage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f5b9d81 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void EduardoPage_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_3c4bd00f898424c2_37_create)
HXLINE(  38)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-2,0,null());
HXDLIN(  38)		::String library = null();
HXDLIN(  38)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buyingState/BG",e8,e1,7c,50)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  39)		this->add(this->bg);
HXLINE(  41)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,50,170,null());
HXDLIN(  41)		::String library1 = null();
HXDLIN(  41)		this->eduardoPage = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buyingState/chars/EDUARDO",1d,b7,4c,4f)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  42)		this->add(this->eduardoPage);
HXLINE(  44)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,460,610,null());
HXDLIN(  44)		::String library2 = null();
HXDLIN(  44)		this->buyNow = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buyingState/buyNow",13,93,08,94)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  45)		this->buyNow->set_alpha(((Float)0.5));
HXLINE(  46)		this->add(this->buyNow);
HXLINE(  48)		this->notEnoughText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),((HX_("Not enough Wii Points. You Have: ",f0,c1,54,65) + ::WiiShopChannel_obj::wiiPoints) + HX_("Wii Points",4c,fb,74,b2)),null(),null());
HXLINE(  50)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-15,0,null());
HXDLIN(  50)		::String library3 = null();
HXDLIN(  50)		this->owned = _hx_tmp3->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/owned",49,e5,84,45)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE(  51)		this->owned->set_alpha(((Float)0.4));
HXLINE(  53)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(1920,1920,-16777216,null(),null());
HXLINE(  54)		this->blackScreen->set_alpha(((Float)0.55));
HXLINE(  56)		this->super::create();
            	}


void EduardoPage_obj::Bought(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::EduardoPage,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_3c4bd00f898424c2_68_Bought)
HXLINE(  69)			_gthis->remove(_gthis->bought,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  70)			_gthis->remove(_gthis->blackScreen,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_3c4bd00f898424c2_60_Bought)
HXDLIN(  60)		 ::EduardoPage _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  61)		this->add(this->blackScreen);
HXLINE(  62)		this->bought =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),HX_("Just bought Eduardo!",d0,71,77,9e),null(),null());
HXLINE(  63)		this->bought->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),80,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  64)		{
HXLINE(  64)			 ::flixel::text::FlxText _this = this->bought;
HXDLIN(  64)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  64)			bool _hx_tmp;
HXDLIN(  64)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  64)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  64)					_hx_tmp = false;
            				}
            			}
HXDLIN(  64)			if (_hx_tmp) {
HXLINE(  64)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  64)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  64)			bool _hx_tmp1;
HXDLIN(  64)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  64)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  64)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  64)			if (_hx_tmp1) {
HXLINE(  64)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  64)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  65)		this->add(this->bought);
HXLINE(  67)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  73)		::haxe::Log_obj::trace(HX_("bought",2b,3a,18,66),::hx::SourceInfo(HX_("source/EduardoPage.hx",11,9b,1a,8f),73,HX_("EduardoPage",41,58,60,8c),HX_("Bought",4b,ae,ac,9a)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(EduardoPage_obj,Bought,(void))

void EduardoPage_obj::notEnoughFunction(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::EduardoPage,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_3c4bd00f898424c2_85_notEnoughFunction)
HXLINE(  86)			_gthis->remove(_gthis->notEnough,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  87)			_gthis->remove(_gthis->blackScreen,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_3c4bd00f898424c2_77_notEnoughFunction)
HXDLIN(  77)		 ::EduardoPage _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  78)		this->add(this->blackScreen);
HXLINE(  79)		this->notEnough =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),(((HX_("Can't buy: ",69,2d,f4,4e) + HX_("You have ",97,b7,ab,11)) + ::WiiShopChannel_obj::wiiPoints) + HX_(" Wii Points",6c,63,42,ce)),null(),null());
HXLINE(  80)		this->notEnough->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),46,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  81)		{
HXLINE(  81)			 ::flixel::text::FlxText _this = this->notEnough;
HXDLIN(  81)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  81)			bool _hx_tmp;
HXDLIN(  81)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  81)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  81)					_hx_tmp = false;
            				}
            			}
HXDLIN(  81)			if (_hx_tmp) {
HXLINE(  81)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  81)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  81)			bool _hx_tmp1;
HXDLIN(  81)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  81)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  81)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  81)			if (_hx_tmp1) {
HXLINE(  81)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  81)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  82)		this->add(this->notEnough);
HXLINE(  84)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  90)		::haxe::Log_obj::trace(HX_("not enogh",ba,98,42,84),::hx::SourceInfo(HX_("source/EduardoPage.hx",11,9b,1a,8f),90,HX_("EduardoPage",41,58,60,8c),HX_("notEnoughFunction",5b,b1,cc,fb)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(EduardoPage_obj,notEnoughFunction,(void))

void EduardoPage_obj::alreadyBoughtFunction(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::EduardoPage,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_3c4bd00f898424c2_102_alreadyBoughtFunction)
HXLINE( 103)			_gthis->remove(_gthis->blackScreen,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 104)			_gthis->remove(_gthis->alreadyBought,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_3c4bd00f898424c2_94_alreadyBoughtFunction)
HXDLIN(  94)		 ::EduardoPage _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  95)		this->add(this->blackScreen);
HXLINE(  96)		this->alreadyBought =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),HX_("You Already Bought this Character!",0e,8e,89,0e),null(),null());
HXLINE(  97)		this->alreadyBought->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),50,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  98)		{
HXLINE(  98)			 ::flixel::text::FlxText _this = this->alreadyBought;
HXDLIN(  98)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  98)			bool _hx_tmp;
HXDLIN(  98)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  98)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  98)					_hx_tmp = false;
            				}
            			}
HXDLIN(  98)			if (_hx_tmp) {
HXLINE(  98)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  98)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  98)			bool _hx_tmp1;
HXDLIN(  98)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  98)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  98)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  98)			if (_hx_tmp1) {
HXLINE(  98)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  98)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  99)		this->add(this->alreadyBought);
HXLINE( 101)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 107)		::haxe::Log_obj::trace(HX_("alredy gbnoh",5f,5a,eb,7b),::hx::SourceInfo(HX_("source/EduardoPage.hx",11,9b,1a,8f),107,HX_("EduardoPage",41,58,60,8c),HX_("alreadyBoughtFunction",1b,8a,91,54)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(EduardoPage_obj,alreadyBoughtFunction,(void))

void EduardoPage_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_3c4bd00f898424c2_110_update)
HXLINE( 111)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 111)		if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE( 113)			::WiiShopChannel_obj::backSound->play(null(),null(),null());
HXLINE( 114)			{
HXLINE( 114)				 ::flixel::FlxState nextState =  ::WiiShopCharacters2_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 114)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 114)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 117)		if (::flixel::FlxG_obj::mouse->overlaps(this->buyNow,null())) {
HXLINE( 119)			this->buyNow->set_alpha(( (Float)(1) ));
HXLINE( 120)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 122)				if ((::WiiShopChannel_obj::wiiPoints >= this->eduardoAmount)) {
HXLINE( 124)					if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtEduardo",07,b2,8b,e5),::hx::paccDynamic),false )) {
HXLINE( 126)						this->Bought();
HXLINE( 127)						::EduardoPage_obj::boughtEduardo = true;
HXLINE( 128)						::SelectYourPlayableChar_obj::displayEduardo = true;
HXLINE( 129)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::WiiShopChannel >();
HXDLIN( 129)						::WiiShopChannel_obj::wiiPoints = (::WiiShopChannel_obj::wiiPoints - this->eduardoAmount);
HXLINE( 130)						this->save();
HXLINE( 131)						::flixel::FlxG_obj::save->data->__SetField(HX_("displayEduardo",d0,02,00,77),true,::hx::paccDynamic);
            					}
            					else {
HXLINE( 133)						if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtEduardo",07,b2,8b,e5),::hx::paccDynamic),true )) {
HXLINE( 135)							this->alreadyBoughtFunction();
            						}
            					}
            				}
            				else {
HXLINE( 140)					this->notEnoughFunction();
            				}
            			}
            		}
HXLINE( 144)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->buyNow,null()))) {
HXLINE( 146)			this->buyNow->set_alpha(((Float)0.5));
            		}
HXLINE( 148)		if ((::EduardoPage_obj::boughtEduardo == true)) {
HXLINE( 150)			this->add(this->owned);
            		}
HXLINE( 153)		this->super::update(elapsed);
HXLINE( 155)		::flixel::FlxG_obj::save->data->__SetField(HX_("boughtEduardo",07,b2,8b,e5),::EduardoPage_obj::boughtEduardo,::hx::paccDynamic);
            	}


void EduardoPage_obj::save(){
            	HX_STACKFRAME(&_hx_pos_3c4bd00f898424c2_167_save)
HXLINE( 168)		::flixel::FlxG_obj::save->data->__SetField(HX_("boughtEduardo",07,b2,8b,e5),::EduardoPage_obj::boughtEduardo,::hx::paccDynamic);
HXLINE( 170)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(EduardoPage_obj,save,(void))

bool EduardoPage_obj::boughtEduardo;

bool EduardoPage_obj::checkIfBought(){
            	HX_STACKFRAME(&_hx_pos_3c4bd00f898424c2_159_checkIfBought)
HXLINE( 160)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtEduardo",07,b2,8b,e5),::hx::paccDynamic) )) {
HXLINE( 161)			return ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtEduardo",07,b2,8b,e5),::hx::paccDynamic)) );
            		}
HXLINE( 163)		return ::EduardoPage_obj::boughtEduardo;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EduardoPage_obj,checkIfBought,return )


::hx::ObjectPtr< EduardoPage_obj > EduardoPage_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< EduardoPage_obj > __this = new EduardoPage_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< EduardoPage_obj > EduardoPage_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	EduardoPage_obj *__this = (EduardoPage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EduardoPage_obj), true, "EduardoPage"));
	*(void **)__this = EduardoPage_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

EduardoPage_obj::EduardoPage_obj()
{
}

void EduardoPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EduardoPage);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(buyNow,"buyNow");
	HX_MARK_MEMBER_NAME(owned,"owned");
	HX_MARK_MEMBER_NAME(eduardoPage,"eduardoPage");
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(bought,"bought");
	HX_MARK_MEMBER_NAME(notEnough,"notEnough");
	HX_MARK_MEMBER_NAME(eduardoAmount,"eduardoAmount");
	HX_MARK_MEMBER_NAME(alreadyBought,"alreadyBought");
	HX_MARK_MEMBER_NAME(notEnoughText,"notEnoughText");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EduardoPage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(buyNow,"buyNow");
	HX_VISIT_MEMBER_NAME(owned,"owned");
	HX_VISIT_MEMBER_NAME(eduardoPage,"eduardoPage");
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(bought,"bought");
	HX_VISIT_MEMBER_NAME(notEnough,"notEnough");
	HX_VISIT_MEMBER_NAME(eduardoAmount,"eduardoAmount");
	HX_VISIT_MEMBER_NAME(alreadyBought,"alreadyBought");
	HX_VISIT_MEMBER_NAME(notEnoughText,"notEnoughText");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val EduardoPage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owned") ) { return ::hx::Val( owned ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buyNow") ) { return ::hx::Val( buyNow ); }
		if (HX_FIELD_EQ(inName,"bought") ) { return ::hx::Val( bought ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"Bought") ) { return ::hx::Val( Bought_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"notEnough") ) { return ::hx::Val( notEnough ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eduardoPage") ) { return ::hx::Val( eduardoPage ); }
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"eduardoAmount") ) { return ::hx::Val( eduardoAmount ); }
		if (HX_FIELD_EQ(inName,"alreadyBought") ) { return ::hx::Val( alreadyBought ); }
		if (HX_FIELD_EQ(inName,"notEnoughText") ) { return ::hx::Val( notEnoughText ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"notEnoughFunction") ) { return ::hx::Val( notEnoughFunction_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"alreadyBoughtFunction") ) { return ::hx::Val( alreadyBoughtFunction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool EduardoPage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"boughtEduardo") ) { outValue = ( boughtEduardo ); return true; }
		if (HX_FIELD_EQ(inName,"checkIfBought") ) { outValue = checkIfBought_dyn(); return true; }
	}
	return false;
}

::hx::Val EduardoPage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owned") ) { owned=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buyNow") ) { buyNow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bought") ) { bought=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"notEnough") ) { notEnough=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eduardoPage") ) { eduardoPage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"eduardoAmount") ) { eduardoAmount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alreadyBought") ) { alreadyBought=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"notEnoughText") ) { notEnoughText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EduardoPage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"boughtEduardo") ) { boughtEduardo=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void EduardoPage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("buyNow",70,9d,11,dd));
	outFields->push(HX_("owned",25,98,76,38));
	outFields->push(HX_("eduardoPage",61,c0,2d,a8));
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("bought",2b,3a,18,66));
	outFields->push(HX_("notEnough",23,ef,bf,7e));
	outFields->push(HX_("eduardoAmount",6a,20,32,4e));
	outFields->push(HX_("alreadyBought",e3,07,9e,f2));
	outFields->push(HX_("notEnoughText",70,b5,bc,6d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EduardoPage_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(EduardoPage_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(EduardoPage_obj,buyNow),HX_("buyNow",70,9d,11,dd)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(EduardoPage_obj,owned),HX_("owned",25,98,76,38)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(EduardoPage_obj,eduardoPage),HX_("eduardoPage",61,c0,2d,a8)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(EduardoPage_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(EduardoPage_obj,bought),HX_("bought",2b,3a,18,66)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(EduardoPage_obj,notEnough),HX_("notEnough",23,ef,bf,7e)},
	{::hx::fsInt,(int)offsetof(EduardoPage_obj,eduardoAmount),HX_("eduardoAmount",6a,20,32,4e)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(EduardoPage_obj,alreadyBought),HX_("alreadyBought",e3,07,9e,f2)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(EduardoPage_obj,notEnoughText),HX_("notEnoughText",70,b5,bc,6d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo EduardoPage_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &EduardoPage_obj::boughtEduardo,HX_("boughtEduardo",07,b2,8b,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String EduardoPage_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("buyNow",70,9d,11,dd),
	HX_("owned",25,98,76,38),
	HX_("eduardoPage",61,c0,2d,a8),
	HX_("blackScreen",8b,de,f4,5d),
	HX_("bought",2b,3a,18,66),
	HX_("notEnough",23,ef,bf,7e),
	HX_("eduardoAmount",6a,20,32,4e),
	HX_("alreadyBought",e3,07,9e,f2),
	HX_("notEnoughText",70,b5,bc,6d),
	HX_("create",fc,66,0f,7c),
	HX_("Bought",4b,ae,ac,9a),
	HX_("notEnoughFunction",5b,b1,cc,fb),
	HX_("alreadyBoughtFunction",1b,8a,91,54),
	HX_("update",09,86,05,87),
	HX_("save",3d,8b,4d,4c),
	::String(null()) };

static void EduardoPage_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EduardoPage_obj::boughtEduardo,"boughtEduardo");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EduardoPage_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EduardoPage_obj::boughtEduardo,"boughtEduardo");
};

#endif

::hx::Class EduardoPage_obj::__mClass;

static ::String EduardoPage_obj_sStaticFields[] = {
	HX_("boughtEduardo",07,b2,8b,e5),
	HX_("checkIfBought",d0,2a,45,8a),
	::String(null())
};

void EduardoPage_obj::__register()
{
	EduardoPage_obj _hx_dummy;
	EduardoPage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("EduardoPage",41,58,60,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EduardoPage_obj::__GetStatic;
	__mClass->mSetStaticField = &EduardoPage_obj::__SetStatic;
	__mClass->mMarkFunc = EduardoPage_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EduardoPage_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EduardoPage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EduardoPage_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EduardoPage_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EduardoPage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EduardoPage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EduardoPage_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3c4bd00f898424c2_32_boot)
HXDLIN(  32)		boughtEduardo = false;
            	}
}

