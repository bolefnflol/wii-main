#include <hxcpp.h>

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PicoPage
#include <PicoPage.h>
#endif
#ifndef INCLUDED_SelectYourPlayableChar
#include <SelectYourPlayableChar.h>
#endif
#ifndef INCLUDED_WiiShopChannel
#include <WiiShopChannel.h>
#endif
#ifndef INCLUDED_WiiShopCharacters
#include <WiiShopCharacters.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d862f455d063f75f_16_new,"PicoPage","new",0x50e12ce6,"PicoPage.new","PicoPage.hx",16,0xdcc6714a)
HX_LOCAL_STACK_FRAME(_hx_pos_d862f455d063f75f_34_create,"PicoPage","create",0x69d62236,"PicoPage.create","PicoPage.hx",34,0xdcc6714a)
HX_LOCAL_STACK_FRAME(_hx_pos_d862f455d063f75f_63_Bought,"PicoPage","Bought",0x88736985,"PicoPage.Bought","PicoPage.hx",63,0xdcc6714a)
HX_LOCAL_STACK_FRAME(_hx_pos_d862f455d063f75f_55_Bought,"PicoPage","Bought",0x88736985,"PicoPage.Bought","PicoPage.hx",55,0xdcc6714a)
HX_LOCAL_STACK_FRAME(_hx_pos_d862f455d063f75f_80_notEnoughFunction,"PicoPage","notEnoughFunction",0xb238ac61,"PicoPage.notEnoughFunction","PicoPage.hx",80,0xdcc6714a)
HX_LOCAL_STACK_FRAME(_hx_pos_d862f455d063f75f_72_notEnoughFunction,"PicoPage","notEnoughFunction",0xb238ac61,"PicoPage.notEnoughFunction","PicoPage.hx",72,0xdcc6714a)
HX_LOCAL_STACK_FRAME(_hx_pos_d862f455d063f75f_97_alreadyBoughtFunction,"PicoPage","alreadyBoughtFunction",0x247e8021,"PicoPage.alreadyBoughtFunction","PicoPage.hx",97,0xdcc6714a)
HX_LOCAL_STACK_FRAME(_hx_pos_d862f455d063f75f_89_alreadyBoughtFunction,"PicoPage","alreadyBoughtFunction",0x247e8021,"PicoPage.alreadyBoughtFunction","PicoPage.hx",89,0xdcc6714a)
HX_LOCAL_STACK_FRAME(_hx_pos_d862f455d063f75f_106_update,"PicoPage","update",0x74cc4143,"PicoPage.update","PicoPage.hx",106,0xdcc6714a)
HX_LOCAL_STACK_FRAME(_hx_pos_d862f455d063f75f_164_save,"PicoPage","save",0x777123f7,"PicoPage.save","PicoPage.hx",164,0xdcc6714a)
HX_LOCAL_STACK_FRAME(_hx_pos_d862f455d063f75f_156_checkIfBought,"PicoPage","checkIfBought",0x5009aad6,"PicoPage.checkIfBought","PicoPage.hx",156,0xdcc6714a)
HX_LOCAL_STACK_FRAME(_hx_pos_d862f455d063f75f_31_boot,"PicoPage","boot",0x6c3f1cec,"PicoPage.boot","PicoPage.hx",31,0xdcc6714a)

void PicoPage_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_d862f455d063f75f_16_new)
HXLINE(  30)		this->picoHatAmount = 100;
HXLINE(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic PicoPage_obj::__CreateEmpty() { return new PicoPage_obj; }

void *PicoPage_obj::_hx_vtable = 0;

Dynamic PicoPage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PicoPage_obj > _hx_result = new PicoPage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PicoPage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x547e5a18) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x547e5a18;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void PicoPage_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_d862f455d063f75f_34_create)
HXLINE(  35)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-2,0,null());
HXDLIN(  35)		::String library = null();
HXDLIN(  35)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buyingState/BG",e8,e1,7c,50)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  36)		this->add(this->bg);
HXLINE(  38)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,50,170,null());
HXDLIN(  38)		::String library1 = null();
HXDLIN(  38)		this->picoPage = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buyingState/chars/PICO",ba,99,e9,ef)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  39)		this->add(this->picoPage);
HXLINE(  41)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,460,610,null());
HXDLIN(  41)		::String library2 = null();
HXDLIN(  41)		this->buyNow = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buyingState/buyNow",13,93,08,94)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  42)		this->buyNow->set_alpha(((Float)0.5));
HXLINE(  43)		this->add(this->buyNow);
HXLINE(  45)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(1920,1920,-16777216,null(),null());
HXLINE(  46)		this->blackScreen->set_alpha(((Float)0.55));
HXLINE(  48)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-15,0,null());
HXDLIN(  48)		::String library3 = null();
HXDLIN(  48)		this->owned = _hx_tmp3->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/owned",49,e5,84,45)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE(  49)		this->owned->set_alpha(((Float)0.4));
HXLINE(  51)		this->super::create();
            	}


void PicoPage_obj::Bought(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::PicoPage,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_d862f455d063f75f_63_Bought)
HXLINE(  64)			_gthis->remove(_gthis->bought,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  65)			_gthis->remove(_gthis->blackScreen,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_d862f455d063f75f_55_Bought)
HXDLIN(  55)		 ::PicoPage _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  56)		this->add(this->blackScreen);
HXLINE(  57)		this->bought =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),HX_("Just bought Pico with the Luigi Hat!",f3,53,b5,19),null(),null());
HXLINE(  58)		this->bought->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),60,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  59)		{
HXLINE(  59)			 ::flixel::text::FlxText _this = this->bought;
HXDLIN(  59)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  59)			bool _hx_tmp;
HXDLIN(  59)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  59)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  59)					_hx_tmp = false;
            				}
            			}
HXDLIN(  59)			if (_hx_tmp) {
HXLINE(  59)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  59)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  59)			bool _hx_tmp1;
HXDLIN(  59)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  59)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  59)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  59)			if (_hx_tmp1) {
HXLINE(  59)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  59)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  60)		this->add(this->bought);
HXLINE(  62)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  68)		::haxe::Log_obj::trace(HX_("bought",2b,3a,18,66),::hx::SourceInfo(HX_("source/PicoPage.hx",d6,9e,90,28),68,HX_("PicoPage",f4,81,0b,a2),HX_("Bought",4b,ae,ac,9a)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PicoPage_obj,Bought,(void))

void PicoPage_obj::notEnoughFunction(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::PicoPage,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_d862f455d063f75f_80_notEnoughFunction)
HXLINE(  81)			_gthis->remove(_gthis->notEnough,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  82)			_gthis->remove(_gthis->blackScreen,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_d862f455d063f75f_72_notEnoughFunction)
HXDLIN(  72)		 ::PicoPage _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  73)		this->add(this->blackScreen);
HXLINE(  74)		this->notEnough =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),(((HX_("Can't buy: ",69,2d,f4,4e) + HX_("You have ",97,b7,ab,11)) + ::WiiShopChannel_obj::wiiPoints) + HX_(" Wii Points",6c,63,42,ce)),null(),null());
HXLINE(  75)		this->notEnough->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),46,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  76)		{
HXLINE(  76)			 ::flixel::text::FlxText _this = this->notEnough;
HXDLIN(  76)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  76)			bool _hx_tmp;
HXDLIN(  76)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  76)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  76)					_hx_tmp = false;
            				}
            			}
HXDLIN(  76)			if (_hx_tmp) {
HXLINE(  76)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  76)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  76)			bool _hx_tmp1;
HXDLIN(  76)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  76)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  76)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  76)			if (_hx_tmp1) {
HXLINE(  76)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  76)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  77)		this->add(this->notEnough);
HXLINE(  79)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  85)		::haxe::Log_obj::trace(HX_("not enogh",ba,98,42,84),::hx::SourceInfo(HX_("source/PicoPage.hx",d6,9e,90,28),85,HX_("PicoPage",f4,81,0b,a2),HX_("notEnoughFunction",5b,b1,cc,fb)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PicoPage_obj,notEnoughFunction,(void))

void PicoPage_obj::alreadyBoughtFunction(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::PicoPage,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_d862f455d063f75f_97_alreadyBoughtFunction)
HXLINE(  98)			_gthis->remove(_gthis->blackScreen,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  99)			_gthis->remove(_gthis->alreadyBought,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_d862f455d063f75f_89_alreadyBoughtFunction)
HXDLIN(  89)		 ::PicoPage _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  90)		this->add(this->blackScreen);
HXLINE(  91)		this->alreadyBought =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),HX_("You Already Bought this Character!",0e,8e,89,0e),null(),null());
HXLINE(  92)		this->alreadyBought->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),50,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  93)		{
HXLINE(  93)			 ::flixel::text::FlxText _this = this->alreadyBought;
HXDLIN(  93)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  93)			bool _hx_tmp;
HXDLIN(  93)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  93)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  93)					_hx_tmp = false;
            				}
            			}
HXDLIN(  93)			if (_hx_tmp) {
HXLINE(  93)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  93)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  93)			bool _hx_tmp1;
HXDLIN(  93)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  93)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  93)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  93)			if (_hx_tmp1) {
HXLINE(  93)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  93)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  94)		this->add(this->alreadyBought);
HXLINE(  96)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 102)		::haxe::Log_obj::trace(HX_("alredy gbnoh",5f,5a,eb,7b),::hx::SourceInfo(HX_("source/PicoPage.hx",d6,9e,90,28),102,HX_("PicoPage",f4,81,0b,a2),HX_("alreadyBoughtFunction",1b,8a,91,54)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PicoPage_obj,alreadyBoughtFunction,(void))

void PicoPage_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_d862f455d063f75f_106_update)
HXLINE( 107)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 107)		if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE( 109)			::WiiShopChannel_obj::backSound->play(null(),null(),null());
HXLINE( 110)			{
HXLINE( 110)				 ::flixel::FlxState nextState =  ::WiiShopCharacters_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 110)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 110)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 113)		if (::flixel::FlxG_obj::mouse->overlaps(this->buyNow,null())) {
HXLINE( 115)			this->buyNow->set_alpha(( (Float)(1) ));
HXLINE( 116)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 118)				if ((::WiiShopChannel_obj::wiiPoints >= this->picoHatAmount)) {
HXLINE( 120)					if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtPICOWithLUIGIHat",6f,0d,dd,99),::hx::paccDynamic),false )) {
HXLINE( 122)						this->Bought();
HXLINE( 123)						::PicoPage_obj::boughtPICOWithLUIGIHat = true;
HXLINE( 124)						::SelectYourPlayableChar_obj::displayPico = true;
HXLINE( 125)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::WiiShopChannel >();
HXDLIN( 125)						::WiiShopChannel_obj::wiiPoints = (::WiiShopChannel_obj::wiiPoints - this->picoHatAmount);
HXLINE( 126)						this->save();
HXLINE( 127)						::flixel::FlxG_obj::save->data->__SetField(HX_("displayPico",47,88,4a,32),true,::hx::paccDynamic);
            					}
            					else {
HXLINE( 129)						if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtPICOWithLUIGIHat",6f,0d,dd,99),::hx::paccDynamic),true )) {
HXLINE( 131)							this->alreadyBoughtFunction();
            						}
            					}
            				}
            				else {
HXLINE( 136)					this->notEnoughFunction();
            				}
            			}
            		}
HXLINE( 140)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->buyNow,null()))) {
HXLINE( 142)			this->buyNow->set_alpha(((Float)0.5));
            		}
HXLINE( 145)		if ((::PicoPage_obj::boughtPICOWithLUIGIHat == true)) {
HXLINE( 147)			this->add(this->owned);
            		}
HXLINE( 150)		this->super::update(elapsed);
HXLINE( 152)		::flixel::FlxG_obj::save->data->__SetField(HX_("boughtPICOWithLUIGIHat",6f,0d,dd,99),::PicoPage_obj::boughtPICOWithLUIGIHat,::hx::paccDynamic);
            	}


void PicoPage_obj::save(){
            	HX_STACKFRAME(&_hx_pos_d862f455d063f75f_164_save)
HXLINE( 165)		::flixel::FlxG_obj::save->data->__SetField(HX_("boughtPICOWithLUIGIHat",6f,0d,dd,99),::PicoPage_obj::boughtPICOWithLUIGIHat,::hx::paccDynamic);
HXLINE( 167)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(PicoPage_obj,save,(void))

bool PicoPage_obj::boughtPICOWithLUIGIHat;

bool PicoPage_obj::checkIfBought(){
            	HX_STACKFRAME(&_hx_pos_d862f455d063f75f_156_checkIfBought)
HXLINE( 157)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtPICOWithLUIGIHat",6f,0d,dd,99),::hx::paccDynamic) )) {
HXLINE( 158)			return ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtPICOWithLUIGIHat",6f,0d,dd,99),::hx::paccDynamic)) );
            		}
HXLINE( 160)		return ::PicoPage_obj::boughtPICOWithLUIGIHat;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PicoPage_obj,checkIfBought,return )


::hx::ObjectPtr< PicoPage_obj > PicoPage_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< PicoPage_obj > __this = new PicoPage_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< PicoPage_obj > PicoPage_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	PicoPage_obj *__this = (PicoPage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PicoPage_obj), true, "PicoPage"));
	*(void **)__this = PicoPage_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

PicoPage_obj::PicoPage_obj()
{
}

void PicoPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PicoPage);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(buyNow,"buyNow");
	HX_MARK_MEMBER_NAME(owned,"owned");
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(picoPage,"picoPage");
	HX_MARK_MEMBER_NAME(bought,"bought");
	HX_MARK_MEMBER_NAME(notEnough,"notEnough");
	HX_MARK_MEMBER_NAME(alreadyBought,"alreadyBought");
	HX_MARK_MEMBER_NAME(picoHatAmount,"picoHatAmount");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PicoPage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(buyNow,"buyNow");
	HX_VISIT_MEMBER_NAME(owned,"owned");
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(picoPage,"picoPage");
	HX_VISIT_MEMBER_NAME(bought,"bought");
	HX_VISIT_MEMBER_NAME(notEnough,"notEnough");
	HX_VISIT_MEMBER_NAME(alreadyBought,"alreadyBought");
	HX_VISIT_MEMBER_NAME(picoHatAmount,"picoHatAmount");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PicoPage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	case 8:
		if (HX_FIELD_EQ(inName,"picoPage") ) { return ::hx::Val( picoPage ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"notEnough") ) { return ::hx::Val( notEnough ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alreadyBought") ) { return ::hx::Val( alreadyBought ); }
		if (HX_FIELD_EQ(inName,"picoHatAmount") ) { return ::hx::Val( picoHatAmount ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"notEnoughFunction") ) { return ::hx::Val( notEnoughFunction_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"alreadyBoughtFunction") ) { return ::hx::Val( alreadyBoughtFunction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PicoPage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"checkIfBought") ) { outValue = checkIfBought_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"boughtPICOWithLUIGIHat") ) { outValue = ( boughtPICOWithLUIGIHat ); return true; }
	}
	return false;
}

::hx::Val PicoPage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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
	case 8:
		if (HX_FIELD_EQ(inName,"picoPage") ) { picoPage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"notEnough") ) { notEnough=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alreadyBought") ) { alreadyBought=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"picoHatAmount") ) { picoHatAmount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PicoPage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"boughtPICOWithLUIGIHat") ) { boughtPICOWithLUIGIHat=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void PicoPage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("buyNow",70,9d,11,dd));
	outFields->push(HX_("owned",25,98,76,38));
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("picoPage",d4,c5,59,c8));
	outFields->push(HX_("bought",2b,3a,18,66));
	outFields->push(HX_("notEnough",23,ef,bf,7e));
	outFields->push(HX_("alreadyBought",e3,07,9e,f2));
	outFields->push(HX_("picoHatAmount",ee,6d,5c,93));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PicoPage_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PicoPage_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PicoPage_obj,buyNow),HX_("buyNow",70,9d,11,dd)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PicoPage_obj,owned),HX_("owned",25,98,76,38)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PicoPage_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PicoPage_obj,picoPage),HX_("picoPage",d4,c5,59,c8)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PicoPage_obj,bought),HX_("bought",2b,3a,18,66)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PicoPage_obj,notEnough),HX_("notEnough",23,ef,bf,7e)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PicoPage_obj,alreadyBought),HX_("alreadyBought",e3,07,9e,f2)},
	{::hx::fsInt,(int)offsetof(PicoPage_obj,picoHatAmount),HX_("picoHatAmount",ee,6d,5c,93)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PicoPage_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &PicoPage_obj::boughtPICOWithLUIGIHat,HX_("boughtPICOWithLUIGIHat",6f,0d,dd,99)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PicoPage_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("buyNow",70,9d,11,dd),
	HX_("owned",25,98,76,38),
	HX_("blackScreen",8b,de,f4,5d),
	HX_("picoPage",d4,c5,59,c8),
	HX_("bought",2b,3a,18,66),
	HX_("notEnough",23,ef,bf,7e),
	HX_("alreadyBought",e3,07,9e,f2),
	HX_("picoHatAmount",ee,6d,5c,93),
	HX_("create",fc,66,0f,7c),
	HX_("Bought",4b,ae,ac,9a),
	HX_("notEnoughFunction",5b,b1,cc,fb),
	HX_("alreadyBoughtFunction",1b,8a,91,54),
	HX_("update",09,86,05,87),
	HX_("save",3d,8b,4d,4c),
	::String(null()) };

static void PicoPage_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PicoPage_obj::boughtPICOWithLUIGIHat,"boughtPICOWithLUIGIHat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PicoPage_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PicoPage_obj::boughtPICOWithLUIGIHat,"boughtPICOWithLUIGIHat");
};

#endif

::hx::Class PicoPage_obj::__mClass;

static ::String PicoPage_obj_sStaticFields[] = {
	HX_("boughtPICOWithLUIGIHat",6f,0d,dd,99),
	HX_("checkIfBought",d0,2a,45,8a),
	::String(null())
};

void PicoPage_obj::__register()
{
	PicoPage_obj _hx_dummy;
	PicoPage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PicoPage",f4,81,0b,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PicoPage_obj::__GetStatic;
	__mClass->mSetStaticField = &PicoPage_obj::__SetStatic;
	__mClass->mMarkFunc = PicoPage_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PicoPage_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PicoPage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PicoPage_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PicoPage_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PicoPage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PicoPage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PicoPage_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d862f455d063f75f_31_boot)
HXDLIN(  31)		boughtPICOWithLUIGIHat = false;
            	}
}

