#include <hxcpp.h>

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_SelectYourPlayableChar
#include <SelectYourPlayableChar.h>
#endif
#ifndef INCLUDED_SpookyPage
#include <SpookyPage.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_88b1c3855576464a_16_new,"SpookyPage","new",0x2e70bfec,"SpookyPage.new","SpookyPage.hx",16,0x2e20a104)
HX_LOCAL_STACK_FRAME(_hx_pos_88b1c3855576464a_38_create,"SpookyPage","create",0x5dfbb6f0,"SpookyPage.create","SpookyPage.hx",38,0x2e20a104)
HX_LOCAL_STACK_FRAME(_hx_pos_88b1c3855576464a_69_Bought,"SpookyPage","Bought",0x7c98fe3f,"SpookyPage.Bought","SpookyPage.hx",69,0x2e20a104)
HX_LOCAL_STACK_FRAME(_hx_pos_88b1c3855576464a_61_Bought,"SpookyPage","Bought",0x7c98fe3f,"SpookyPage.Bought","SpookyPage.hx",61,0x2e20a104)
HX_LOCAL_STACK_FRAME(_hx_pos_88b1c3855576464a_86_notEnoughFunction,"SpookyPage","notEnoughFunction",0x86a93de7,"SpookyPage.notEnoughFunction","SpookyPage.hx",86,0x2e20a104)
HX_LOCAL_STACK_FRAME(_hx_pos_88b1c3855576464a_78_notEnoughFunction,"SpookyPage","notEnoughFunction",0x86a93de7,"SpookyPage.notEnoughFunction","SpookyPage.hx",78,0x2e20a104)
HX_LOCAL_STACK_FRAME(_hx_pos_88b1c3855576464a_103_alreadyBoughtFunction,"SpookyPage","alreadyBoughtFunction",0x32bd4ca7,"SpookyPage.alreadyBoughtFunction","SpookyPage.hx",103,0x2e20a104)
HX_LOCAL_STACK_FRAME(_hx_pos_88b1c3855576464a_95_alreadyBoughtFunction,"SpookyPage","alreadyBoughtFunction",0x32bd4ca7,"SpookyPage.alreadyBoughtFunction","SpookyPage.hx",95,0x2e20a104)
HX_LOCAL_STACK_FRAME(_hx_pos_88b1c3855576464a_111_update,"SpookyPage","update",0x68f1d5fd,"SpookyPage.update","SpookyPage.hx",111,0x2e20a104)
HX_LOCAL_STACK_FRAME(_hx_pos_88b1c3855576464a_169_save,"SpookyPage","save",0x77823631,"SpookyPage.save","SpookyPage.hx",169,0x2e20a104)
HX_LOCAL_STACK_FRAME(_hx_pos_88b1c3855576464a_161_checkIfBought,"SpookyPage","checkIfBought",0x1325815c,"SpookyPage.checkIfBought","SpookyPage.hx",161,0x2e20a104)
HX_LOCAL_STACK_FRAME(_hx_pos_88b1c3855576464a_33_boot,"SpookyPage","boot",0x6c502f26,"SpookyPage.boot","SpookyPage.hx",33,0x2e20a104)

void SpookyPage_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_88b1c3855576464a_16_new)
HXLINE(  29)		this->spookyHatsAmount = 200;
HXLINE(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic SpookyPage_obj::__CreateEmpty() { return new SpookyPage_obj; }

void *SpookyPage_obj::_hx_vtable = 0;

Dynamic SpookyPage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SpookyPage_obj > _hx_result = new SpookyPage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SpookyPage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x370abcba || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void SpookyPage_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_88b1c3855576464a_38_create)
HXLINE(  39)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-2,0,null());
HXDLIN(  39)		::String library = null();
HXDLIN(  39)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buyingState/BG",e8,e1,7c,50)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  40)		this->add(this->bg);
HXLINE(  42)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,50,170,null());
HXDLIN(  42)		::String library1 = null();
HXDLIN(  42)		this->spookyPage = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buyingState/chars/SPOOKY",00,f2,9d,33)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  43)		this->add(this->spookyPage);
HXLINE(  45)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,460,610,null());
HXDLIN(  45)		::String library2 = null();
HXDLIN(  45)		this->buyNow = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buyingState/buyNow",13,93,08,94)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  46)		this->buyNow->set_alpha(((Float)0.5));
HXLINE(  47)		this->add(this->buyNow);
HXLINE(  49)		this->notEnoughText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),((HX_("Not enough Wii Points. You Have: ",f0,c1,54,65) + ::WiiShopChannel_obj::wiiPoints) + HX_("Wii Points",4c,fb,74,b2)),null(),null());
HXLINE(  51)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-15,0,null());
HXDLIN(  51)		::String library3 = null();
HXDLIN(  51)		this->owned = _hx_tmp3->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/owned",49,e5,84,45)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE(  52)		this->owned->set_alpha(((Float)0.4));
HXLINE(  54)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(1920,1920,-16777216,null(),null());
HXLINE(  55)		this->blackScreen->set_alpha(((Float)0.55));
HXLINE(  57)		this->super::create();
            	}


void SpookyPage_obj::Bought(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::SpookyPage,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_88b1c3855576464a_69_Bought)
HXLINE(  70)			_gthis->remove(_gthis->bought,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  71)			_gthis->remove(_gthis->blackScreen,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_88b1c3855576464a_61_Bought)
HXDLIN(  61)		 ::SpookyPage _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  62)		this->add(this->blackScreen);
HXLINE(  63)		this->bought =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),HX_("Just bought Spooky Kids With Wario And Luigi Hats!",b5,9c,48,c4),null(),null());
HXLINE(  64)		this->bought->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),40,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  65)		{
HXLINE(  65)			 ::flixel::text::FlxText _this = this->bought;
HXDLIN(  65)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  65)			bool _hx_tmp;
HXDLIN(  65)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  65)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  65)					_hx_tmp = false;
            				}
            			}
HXDLIN(  65)			if (_hx_tmp) {
HXLINE(  65)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  65)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  65)			bool _hx_tmp1;
HXDLIN(  65)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  65)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  65)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  65)			if (_hx_tmp1) {
HXLINE(  65)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  65)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  66)		this->add(this->bought);
HXLINE(  68)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  74)		::haxe::Log_obj::trace(HX_("bought",2b,3a,18,66),::hx::SourceInfo(HX_("source/SpookyPage.hx",90,49,fa,a2),74,HX_("SpookyPage",fa,99,47,1f),HX_("Bought",4b,ae,ac,9a)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpookyPage_obj,Bought,(void))

void SpookyPage_obj::notEnoughFunction(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::SpookyPage,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_88b1c3855576464a_86_notEnoughFunction)
HXLINE(  87)			_gthis->remove(_gthis->notEnough,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  88)			_gthis->remove(_gthis->blackScreen,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_88b1c3855576464a_78_notEnoughFunction)
HXDLIN(  78)		 ::SpookyPage _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  79)		this->add(this->blackScreen);
HXLINE(  80)		this->notEnough =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),(((HX_("Can't buy: ",69,2d,f4,4e) + HX_("You have ",97,b7,ab,11)) + ::WiiShopChannel_obj::wiiPoints) + HX_(" Wii Points",6c,63,42,ce)),null(),null());
HXLINE(  81)		this->notEnough->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),46,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  82)		{
HXLINE(  82)			 ::flixel::text::FlxText _this = this->notEnough;
HXDLIN(  82)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  82)			bool _hx_tmp;
HXDLIN(  82)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  82)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  82)					_hx_tmp = false;
            				}
            			}
HXDLIN(  82)			if (_hx_tmp) {
HXLINE(  82)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  82)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  82)			bool _hx_tmp1;
HXDLIN(  82)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  82)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  82)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  82)			if (_hx_tmp1) {
HXLINE(  82)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  82)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  83)		this->add(this->notEnough);
HXLINE(  85)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  91)		::haxe::Log_obj::trace(HX_("not enogh",ba,98,42,84),::hx::SourceInfo(HX_("source/SpookyPage.hx",90,49,fa,a2),91,HX_("SpookyPage",fa,99,47,1f),HX_("notEnoughFunction",5b,b1,cc,fb)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpookyPage_obj,notEnoughFunction,(void))

void SpookyPage_obj::alreadyBoughtFunction(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::SpookyPage,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_88b1c3855576464a_103_alreadyBoughtFunction)
HXLINE( 104)			_gthis->remove(_gthis->blackScreen,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 105)			_gthis->remove(_gthis->alreadyBought,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_88b1c3855576464a_95_alreadyBoughtFunction)
HXDLIN(  95)		 ::SpookyPage _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  96)		this->add(this->blackScreen);
HXLINE(  97)		this->alreadyBought =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),HX_("You Already Bought this Character!",0e,8e,89,0e),null(),null());
HXLINE(  98)		this->alreadyBought->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),50,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  99)		{
HXLINE(  99)			 ::flixel::text::FlxText _this = this->alreadyBought;
HXDLIN(  99)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  99)			bool _hx_tmp;
HXDLIN(  99)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  99)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  99)					_hx_tmp = false;
            				}
            			}
HXDLIN(  99)			if (_hx_tmp) {
HXLINE(  99)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  99)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  99)			bool _hx_tmp1;
HXDLIN(  99)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  99)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  99)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  99)			if (_hx_tmp1) {
HXLINE(  99)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  99)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 100)		this->add(this->alreadyBought);
HXLINE( 102)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 108)		::haxe::Log_obj::trace(HX_("alredy gbnoh",5f,5a,eb,7b),::hx::SourceInfo(HX_("source/SpookyPage.hx",90,49,fa,a2),108,HX_("SpookyPage",fa,99,47,1f),HX_("alreadyBoughtFunction",1b,8a,91,54)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpookyPage_obj,alreadyBoughtFunction,(void))

void SpookyPage_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_88b1c3855576464a_111_update)
HXLINE( 112)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 112)		if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE( 114)			::WiiShopChannel_obj::backSound->play(null(),null(),null());
HXLINE( 115)			{
HXLINE( 115)				 ::flixel::FlxState nextState =  ::WiiShopCharacters_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 115)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 115)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 118)		if (::flixel::FlxG_obj::mouse->overlaps(this->buyNow,null())) {
HXLINE( 120)			this->buyNow->set_alpha(( (Float)(1) ));
HXLINE( 121)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 123)				if ((::WiiShopChannel_obj::wiiPoints >= this->spookyHatsAmount)) {
HXLINE( 125)					if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtSPOOKYHats",2e,56,56,28),::hx::paccDynamic),false )) {
HXLINE( 127)						this->Bought();
HXLINE( 128)						::SpookyPage_obj::boughtSPOOKYHats = true;
HXLINE( 129)						::SelectYourPlayableChar_obj::displaySpooky = true;
HXLINE( 130)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::WiiShopChannel >();
HXDLIN( 130)						::WiiShopChannel_obj::wiiPoints = (::WiiShopChannel_obj::wiiPoints - this->spookyHatsAmount);
HXLINE( 131)						this->save();
HXLINE( 132)						::flixel::FlxG_obj::save->data->__SetField(HX_("displaySpooky",cd,79,01,83),true,::hx::paccDynamic);
            					}
            					else {
HXLINE( 134)						if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtSPOOKYHats",2e,56,56,28),::hx::paccDynamic),true )) {
HXLINE( 136)							this->alreadyBoughtFunction();
            						}
            					}
            				}
            				else {
HXLINE( 141)					this->notEnoughFunction();
            				}
            			}
            		}
HXLINE( 145)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->buyNow,null()))) {
HXLINE( 147)			this->buyNow->set_alpha(((Float)0.5));
            		}
HXLINE( 150)		if ((::SpookyPage_obj::boughtSPOOKYHats == true)) {
HXLINE( 152)			this->add(this->owned);
            		}
HXLINE( 155)		this->super::update(elapsed);
HXLINE( 157)		::flixel::FlxG_obj::save->data->__SetField(HX_("boughtSPOOKYHats",2e,56,56,28),::SpookyPage_obj::boughtSPOOKYHats,::hx::paccDynamic);
            	}


void SpookyPage_obj::save(){
            	HX_STACKFRAME(&_hx_pos_88b1c3855576464a_169_save)
HXLINE( 170)		::flixel::FlxG_obj::save->data->__SetField(HX_("boughtSPOOKYHats",2e,56,56,28),::SpookyPage_obj::boughtSPOOKYHats,::hx::paccDynamic);
HXLINE( 172)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpookyPage_obj,save,(void))

bool SpookyPage_obj::boughtSPOOKYHats;

bool SpookyPage_obj::checkIfBought(){
            	HX_STACKFRAME(&_hx_pos_88b1c3855576464a_161_checkIfBought)
HXLINE( 162)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtSPOOKYHats",2e,56,56,28),::hx::paccDynamic) )) {
HXLINE( 163)			return ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtSPOOKYHats",2e,56,56,28),::hx::paccDynamic)) );
            		}
HXLINE( 165)		return ::SpookyPage_obj::boughtSPOOKYHats;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SpookyPage_obj,checkIfBought,return )


::hx::ObjectPtr< SpookyPage_obj > SpookyPage_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< SpookyPage_obj > __this = new SpookyPage_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< SpookyPage_obj > SpookyPage_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	SpookyPage_obj *__this = (SpookyPage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SpookyPage_obj), true, "SpookyPage"));
	*(void **)__this = SpookyPage_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

SpookyPage_obj::SpookyPage_obj()
{
}

void SpookyPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpookyPage);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(buyNow,"buyNow");
	HX_MARK_MEMBER_NAME(owned,"owned");
	HX_MARK_MEMBER_NAME(spookyPage,"spookyPage");
	HX_MARK_MEMBER_NAME(bought,"bought");
	HX_MARK_MEMBER_NAME(notEnough,"notEnough");
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(spookyHatsAmount,"spookyHatsAmount");
	HX_MARK_MEMBER_NAME(alreadyBought,"alreadyBought");
	HX_MARK_MEMBER_NAME(notEnoughText,"notEnoughText");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpookyPage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(buyNow,"buyNow");
	HX_VISIT_MEMBER_NAME(owned,"owned");
	HX_VISIT_MEMBER_NAME(spookyPage,"spookyPage");
	HX_VISIT_MEMBER_NAME(bought,"bought");
	HX_VISIT_MEMBER_NAME(notEnough,"notEnough");
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(spookyHatsAmount,"spookyHatsAmount");
	HX_VISIT_MEMBER_NAME(alreadyBought,"alreadyBought");
	HX_VISIT_MEMBER_NAME(notEnoughText,"notEnoughText");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SpookyPage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	case 10:
		if (HX_FIELD_EQ(inName,"spookyPage") ) { return ::hx::Val( spookyPage ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alreadyBought") ) { return ::hx::Val( alreadyBought ); }
		if (HX_FIELD_EQ(inName,"notEnoughText") ) { return ::hx::Val( notEnoughText ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"spookyHatsAmount") ) { return ::hx::Val( spookyHatsAmount ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"notEnoughFunction") ) { return ::hx::Val( notEnoughFunction_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"alreadyBoughtFunction") ) { return ::hx::Val( alreadyBoughtFunction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SpookyPage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"checkIfBought") ) { outValue = checkIfBought_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"boughtSPOOKYHats") ) { outValue = ( boughtSPOOKYHats ); return true; }
	}
	return false;
}

::hx::Val SpookyPage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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
	case 10:
		if (HX_FIELD_EQ(inName,"spookyPage") ) { spookyPage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alreadyBought") ) { alreadyBought=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"notEnoughText") ) { notEnoughText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"spookyHatsAmount") ) { spookyHatsAmount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SpookyPage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"boughtSPOOKYHats") ) { boughtSPOOKYHats=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void SpookyPage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("buyNow",70,9d,11,dd));
	outFields->push(HX_("owned",25,98,76,38));
	outFields->push(HX_("spookyPage",da,95,96,28));
	outFields->push(HX_("bought",2b,3a,18,66));
	outFields->push(HX_("notEnough",23,ef,bf,7e));
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("spookyHatsAmount",7b,86,7b,59));
	outFields->push(HX_("alreadyBought",e3,07,9e,f2));
	outFields->push(HX_("notEnoughText",70,b5,bc,6d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SpookyPage_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SpookyPage_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SpookyPage_obj,buyNow),HX_("buyNow",70,9d,11,dd)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SpookyPage_obj,owned),HX_("owned",25,98,76,38)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SpookyPage_obj,spookyPage),HX_("spookyPage",da,95,96,28)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(SpookyPage_obj,bought),HX_("bought",2b,3a,18,66)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(SpookyPage_obj,notEnough),HX_("notEnough",23,ef,bf,7e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SpookyPage_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsInt,(int)offsetof(SpookyPage_obj,spookyHatsAmount),HX_("spookyHatsAmount",7b,86,7b,59)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(SpookyPage_obj,alreadyBought),HX_("alreadyBought",e3,07,9e,f2)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(SpookyPage_obj,notEnoughText),HX_("notEnoughText",70,b5,bc,6d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SpookyPage_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &SpookyPage_obj::boughtSPOOKYHats,HX_("boughtSPOOKYHats",2e,56,56,28)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SpookyPage_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("buyNow",70,9d,11,dd),
	HX_("owned",25,98,76,38),
	HX_("spookyPage",da,95,96,28),
	HX_("bought",2b,3a,18,66),
	HX_("notEnough",23,ef,bf,7e),
	HX_("blackScreen",8b,de,f4,5d),
	HX_("spookyHatsAmount",7b,86,7b,59),
	HX_("alreadyBought",e3,07,9e,f2),
	HX_("notEnoughText",70,b5,bc,6d),
	HX_("create",fc,66,0f,7c),
	HX_("Bought",4b,ae,ac,9a),
	HX_("notEnoughFunction",5b,b1,cc,fb),
	HX_("alreadyBoughtFunction",1b,8a,91,54),
	HX_("update",09,86,05,87),
	HX_("save",3d,8b,4d,4c),
	::String(null()) };

static void SpookyPage_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpookyPage_obj::boughtSPOOKYHats,"boughtSPOOKYHats");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SpookyPage_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpookyPage_obj::boughtSPOOKYHats,"boughtSPOOKYHats");
};

#endif

::hx::Class SpookyPage_obj::__mClass;

static ::String SpookyPage_obj_sStaticFields[] = {
	HX_("boughtSPOOKYHats",2e,56,56,28),
	HX_("checkIfBought",d0,2a,45,8a),
	::String(null())
};

void SpookyPage_obj::__register()
{
	SpookyPage_obj _hx_dummy;
	SpookyPage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SpookyPage",fa,99,47,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SpookyPage_obj::__GetStatic;
	__mClass->mSetStaticField = &SpookyPage_obj::__SetStatic;
	__mClass->mMarkFunc = SpookyPage_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SpookyPage_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SpookyPage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SpookyPage_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SpookyPage_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SpookyPage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SpookyPage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SpookyPage_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_88b1c3855576464a_33_boot)
HXDLIN(  33)		boughtSPOOKYHats = false;
            	}
}

