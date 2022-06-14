#include <hxcpp.h>

#ifndef INCLUDED_BfBuyingPage
#include <BfBuyingPage.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_16_new,"BfBuyingPage","new",0x4c86b541,"BfBuyingPage.new","BfBuyingPage.hx",16,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_39_create,"BfBuyingPage","create",0xa47c04bb,"BfBuyingPage.create","BfBuyingPage.hx",39,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_70_Bought,"BfBuyingPage","Bought",0xc3194c0a,"BfBuyingPage.Bought","BfBuyingPage.hx",70,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_62_Bought,"BfBuyingPage","Bought",0xc3194c0a,"BfBuyingPage.Bought","BfBuyingPage.hx",62,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_87_notEnoughFunction,"BfBuyingPage","notEnoughFunction",0x86edfdfc,"BfBuyingPage.notEnoughFunction","BfBuyingPage.hx",87,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_79_notEnoughFunction,"BfBuyingPage","notEnoughFunction",0x86edfdfc,"BfBuyingPage.notEnoughFunction","BfBuyingPage.hx",79,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_104_alreadyBoughtFunction,"BfBuyingPage","alreadyBoughtFunction",0xabcc3b3c,"BfBuyingPage.alreadyBoughtFunction","BfBuyingPage.hx",104,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_96_alreadyBoughtFunction,"BfBuyingPage","alreadyBoughtFunction",0xabcc3b3c,"BfBuyingPage.alreadyBoughtFunction","BfBuyingPage.hx",96,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_112_update,"BfBuyingPage","update",0xaf7223c8,"BfBuyingPage.update","BfBuyingPage.hx",112,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_170_save,"BfBuyingPage","save",0xaca2eb3c,"BfBuyingPage.save","BfBuyingPage.hx",170,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_162_checkIfBought,"BfBuyingPage","checkIfBought",0x23f952f1,"BfBuyingPage.checkIfBought","BfBuyingPage.hx",162,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_29_boot,"BfBuyingPage","boot",0xa170e431,"BfBuyingPage.boot","BfBuyingPage.hx",29,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_31_boot,"BfBuyingPage","boot",0xa170e431,"BfBuyingPage.boot","BfBuyingPage.hx",31,0xc93d6d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_64e5c205c8dfa1c6_33_boot,"BfBuyingPage","boot",0xa170e431,"BfBuyingPage.boot","BfBuyingPage.hx",33,0xc93d6d4f)

void BfBuyingPage_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_16_new)
HXDLIN(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic BfBuyingPage_obj::__CreateEmpty() { return new BfBuyingPage_obj; }

void *BfBuyingPage_obj::_hx_vtable = 0;

Dynamic BfBuyingPage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BfBuyingPage_obj > _hx_result = new BfBuyingPage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BfBuyingPage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2acf2257) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2acf2257;
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

void BfBuyingPage_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_39_create)
HXLINE(  40)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-2,0,null());
HXDLIN(  40)		::String library = null();
HXDLIN(  40)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buyingState/BG",e8,e1,7c,50)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  41)		this->add(this->bg);
HXLINE(  43)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,50,160,null());
HXDLIN(  43)		::String library1 = null();
HXDLIN(  43)		this->bfPage = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buyingState/chars/BF",59,d3,87,56)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  44)		this->add(this->bfPage);
HXLINE(  46)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,460,610,null());
HXDLIN(  46)		::String library2 = null();
HXDLIN(  46)		this->buyNow = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buyingState/buyNow",13,93,08,94)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  47)		this->buyNow->set_alpha(((Float)0.5));
HXLINE(  48)		this->add(this->buyNow);
HXLINE(  50)		this->bfText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),HX_("BF with a Mario Hat!",9f,8e,e3,44),null(),null());
HXLINE(  52)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-15,0,null());
HXDLIN(  52)		::String library3 = null();
HXDLIN(  52)		::BfBuyingPage_obj::owned = _hx_tmp3->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/owned",49,e5,84,45)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE(  53)		::BfBuyingPage_obj::owned->set_alpha(((Float)0.4));
HXLINE(  55)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(1920,1920,-16777216,null(),null());
HXLINE(  56)		this->blackScreen->set_alpha(((Float)0.55));
HXLINE(  58)		this->super::create();
            	}


void BfBuyingPage_obj::Bought(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::BfBuyingPage,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_70_Bought)
HXLINE(  71)			_gthis->remove(_gthis->bought,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  72)			_gthis->remove(_gthis->blackScreen,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_62_Bought)
HXDLIN(  62)		 ::BfBuyingPage _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  63)		this->add(this->blackScreen);
HXLINE(  64)		this->bought =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),HX_("Just bought BF with a Mario Hat!",e0,66,a7,f8),null(),null());
HXLINE(  65)		this->bought->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),60,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  66)		{
HXLINE(  66)			 ::flixel::text::FlxText _this = this->bought;
HXDLIN(  66)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  66)			bool _hx_tmp;
HXDLIN(  66)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  66)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  66)					_hx_tmp = false;
            				}
            			}
HXDLIN(  66)			if (_hx_tmp) {
HXLINE(  66)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  66)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  66)			bool _hx_tmp1;
HXDLIN(  66)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  66)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  66)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  66)			if (_hx_tmp1) {
HXLINE(  66)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  66)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  67)		this->add(this->bought);
HXLINE(  69)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  75)		::haxe::Log_obj::trace(HX_("bought",2b,3a,18,66),::hx::SourceInfo(HX_("source/BfBuyingPage.hx",db,50,3b,66),75,HX_("BfBuyingPage",cf,00,59,dd),HX_("Bought",4b,ae,ac,9a)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BfBuyingPage_obj,Bought,(void))

void BfBuyingPage_obj::notEnoughFunction(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::BfBuyingPage,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_87_notEnoughFunction)
HXLINE(  88)			_gthis->remove(_gthis->notEnough,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  89)			_gthis->remove(_gthis->blackScreen,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_79_notEnoughFunction)
HXDLIN(  79)		 ::BfBuyingPage _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  80)		this->add(this->blackScreen);
HXLINE(  81)		this->notEnough =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),(((HX_("Can't buy: ",69,2d,f4,4e) + HX_("You have ",97,b7,ab,11)) + ::WiiShopChannel_obj::wiiPoints) + HX_(" Wii Points",6c,63,42,ce)),null(),null());
HXLINE(  82)		this->notEnough->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),46,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  83)		{
HXLINE(  83)			 ::flixel::text::FlxText _this = this->notEnough;
HXDLIN(  83)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  83)			bool _hx_tmp;
HXDLIN(  83)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  83)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  83)					_hx_tmp = false;
            				}
            			}
HXDLIN(  83)			if (_hx_tmp) {
HXLINE(  83)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  83)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  83)			bool _hx_tmp1;
HXDLIN(  83)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  83)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  83)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  83)			if (_hx_tmp1) {
HXLINE(  83)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  83)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  84)		this->add(this->notEnough);
HXLINE(  86)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  92)		::haxe::Log_obj::trace(HX_("not enogh",ba,98,42,84),::hx::SourceInfo(HX_("source/BfBuyingPage.hx",db,50,3b,66),92,HX_("BfBuyingPage",cf,00,59,dd),HX_("notEnoughFunction",5b,b1,cc,fb)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BfBuyingPage_obj,notEnoughFunction,(void))

void BfBuyingPage_obj::alreadyBoughtFunction(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::BfBuyingPage,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_104_alreadyBoughtFunction)
HXLINE( 105)			_gthis->remove(_gthis->blackScreen,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 106)			_gthis->remove(_gthis->alreadyBought,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_96_alreadyBoughtFunction)
HXDLIN(  96)		 ::BfBuyingPage _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  97)		this->add(this->blackScreen);
HXLINE(  98)		this->alreadyBought =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),HX_("You Already Bought this Character!",0e,8e,89,0e),null(),null());
HXLINE(  99)		this->alreadyBought->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),50,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 100)		{
HXLINE( 100)			 ::flixel::text::FlxText _this = this->alreadyBought;
HXDLIN( 100)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN( 100)			bool _hx_tmp;
HXDLIN( 100)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 100)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE( 100)					_hx_tmp = false;
            				}
            			}
HXDLIN( 100)			if (_hx_tmp) {
HXLINE( 100)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 100)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 100)			bool _hx_tmp1;
HXDLIN( 100)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 100)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE( 100)					_hx_tmp1 = false;
            				}
            			}
HXDLIN( 100)			if (_hx_tmp1) {
HXLINE( 100)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 100)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 101)		this->add(this->alreadyBought);
HXLINE( 103)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 109)		::haxe::Log_obj::trace(HX_("alredy gbnoh",5f,5a,eb,7b),::hx::SourceInfo(HX_("source/BfBuyingPage.hx",db,50,3b,66),109,HX_("BfBuyingPage",cf,00,59,dd),HX_("alreadyBoughtFunction",1b,8a,91,54)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BfBuyingPage_obj,alreadyBoughtFunction,(void))

void BfBuyingPage_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_112_update)
HXLINE( 114)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 114)		if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE( 116)			::WiiShopChannel_obj::backSound->play(null(),null(),null());
HXLINE( 117)			{
HXLINE( 117)				 ::flixel::FlxState nextState =  ::WiiShopCharacters_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 117)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 117)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 120)		if (::flixel::FlxG_obj::mouse->overlaps(this->buyNow,null())) {
HXLINE( 122)			this->buyNow->set_alpha(( (Float)(1) ));
HXLINE( 123)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 125)				if ((::WiiShopChannel_obj::wiiPoints >= ::BfBuyingPage_obj::bfHatAmount)) {
HXLINE( 127)					if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtBfWithMarioHat",4c,4b,2e,34),::hx::paccDynamic),false )) {
HXLINE( 129)						this->Bought();
HXLINE( 130)						::BfBuyingPage_obj::boughtBfWithMarioHat = true;
HXLINE( 131)						::SelectYourPlayableChar_obj::displayBf = true;
HXLINE( 132)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::WiiShopChannel >();
HXDLIN( 132)						::WiiShopChannel_obj::wiiPoints = (::WiiShopChannel_obj::wiiPoints - ::BfBuyingPage_obj::bfHatAmount);
HXLINE( 133)						this->save();
HXLINE( 134)						::flixel::FlxG_obj::save->data->__SetField(HX_("displayBf",a6,f8,da,c1),true,::hx::paccDynamic);
            					}
            					else {
HXLINE( 136)						if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtBfWithMarioHat",4c,4b,2e,34),::hx::paccDynamic),true )) {
HXLINE( 138)							this->alreadyBoughtFunction();
            						}
            					}
            				}
            				else {
HXLINE( 143)					this->notEnoughFunction();
            				}
            			}
            		}
HXLINE( 147)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->buyNow,null()))) {
HXLINE( 149)			this->buyNow->set_alpha(((Float)0.5));
            		}
HXLINE( 152)		if ((::BfBuyingPage_obj::boughtBfWithMarioHat == true)) {
HXLINE( 154)			this->add(::BfBuyingPage_obj::owned);
            		}
HXLINE( 156)		this->super::update(elapsed);
HXLINE( 158)		::flixel::FlxG_obj::save->data->__SetField(HX_("boughtBfWithMarioHat",4c,4b,2e,34),::BfBuyingPage_obj::boughtBfWithMarioHat,::hx::paccDynamic);
            	}


void BfBuyingPage_obj::save(){
            	HX_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_170_save)
HXLINE( 171)		::flixel::FlxG_obj::save->data->__SetField(HX_("boughtBfWithMarioHat",4c,4b,2e,34),::BfBuyingPage_obj::boughtBfWithMarioHat,::hx::paccDynamic);
HXLINE( 173)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BfBuyingPage_obj,save,(void))

 ::flixel::FlxSprite BfBuyingPage_obj::owned;

int BfBuyingPage_obj::bfHatAmount;

bool BfBuyingPage_obj::pointsIsEnough;

bool BfBuyingPage_obj::boughtBfWithMarioHat;

bool BfBuyingPage_obj::checkIfBought(){
            	HX_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_162_checkIfBought)
HXLINE( 163)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtBfWithMarioHat",4c,4b,2e,34),::hx::paccDynamic) )) {
HXLINE( 164)			return ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtBfWithMarioHat",4c,4b,2e,34),::hx::paccDynamic)) );
            		}
HXLINE( 166)		return ::BfBuyingPage_obj::boughtBfWithMarioHat;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BfBuyingPage_obj,checkIfBought,return )


::hx::ObjectPtr< BfBuyingPage_obj > BfBuyingPage_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< BfBuyingPage_obj > __this = new BfBuyingPage_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< BfBuyingPage_obj > BfBuyingPage_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	BfBuyingPage_obj *__this = (BfBuyingPage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BfBuyingPage_obj), true, "BfBuyingPage"));
	*(void **)__this = BfBuyingPage_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

BfBuyingPage_obj::BfBuyingPage_obj()
{
}

void BfBuyingPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BfBuyingPage);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(buyNow,"buyNow");
	HX_MARK_MEMBER_NAME(bfPage,"bfPage");
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(bought,"bought");
	HX_MARK_MEMBER_NAME(notEnough,"notEnough");
	HX_MARK_MEMBER_NAME(alreadyBought,"alreadyBought");
	HX_MARK_MEMBER_NAME(bfText,"bfText");
	HX_MARK_MEMBER_NAME(notEnoughText,"notEnoughText");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BfBuyingPage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(buyNow,"buyNow");
	HX_VISIT_MEMBER_NAME(bfPage,"bfPage");
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(bought,"bought");
	HX_VISIT_MEMBER_NAME(notEnough,"notEnough");
	HX_VISIT_MEMBER_NAME(alreadyBought,"alreadyBought");
	HX_VISIT_MEMBER_NAME(bfText,"bfText");
	HX_VISIT_MEMBER_NAME(notEnoughText,"notEnoughText");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BfBuyingPage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buyNow") ) { return ::hx::Val( buyNow ); }
		if (HX_FIELD_EQ(inName,"bfPage") ) { return ::hx::Val( bfPage ); }
		if (HX_FIELD_EQ(inName,"bought") ) { return ::hx::Val( bought ); }
		if (HX_FIELD_EQ(inName,"bfText") ) { return ::hx::Val( bfText ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"Bought") ) { return ::hx::Val( Bought_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"notEnough") ) { return ::hx::Val( notEnough ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		break;
	case 13:
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

bool BfBuyingPage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"owned") ) { outValue = ( owned ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bfHatAmount") ) { outValue = ( bfHatAmount ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkIfBought") ) { outValue = checkIfBought_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointsIsEnough") ) { outValue = ( pointsIsEnough ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"boughtBfWithMarioHat") ) { outValue = ( boughtBfWithMarioHat ); return true; }
	}
	return false;
}

::hx::Val BfBuyingPage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buyNow") ) { buyNow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bfPage") ) { bfPage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bought") ) { bought=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bfText") ) { bfText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"notEnough") ) { notEnough=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alreadyBought") ) { alreadyBought=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"notEnoughText") ) { notEnoughText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BfBuyingPage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"owned") ) { owned=ioValue.Cast<  ::flixel::FlxSprite >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bfHatAmount") ) { bfHatAmount=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointsIsEnough") ) { pointsIsEnough=ioValue.Cast< bool >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"boughtBfWithMarioHat") ) { boughtBfWithMarioHat=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void BfBuyingPage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("buyNow",70,9d,11,dd));
	outFields->push(HX_("bfPage",33,8e,03,1f));
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("bought",2b,3a,18,66));
	outFields->push(HX_("notEnough",23,ef,bf,7e));
	outFields->push(HX_("alreadyBought",e3,07,9e,f2));
	outFields->push(HX_("bfText",91,80,ab,21));
	outFields->push(HX_("notEnoughText",70,b5,bc,6d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BfBuyingPage_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(BfBuyingPage_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(BfBuyingPage_obj,buyNow),HX_("buyNow",70,9d,11,dd)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(BfBuyingPage_obj,bfPage),HX_("bfPage",33,8e,03,1f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(BfBuyingPage_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(BfBuyingPage_obj,bought),HX_("bought",2b,3a,18,66)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(BfBuyingPage_obj,notEnough),HX_("notEnough",23,ef,bf,7e)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(BfBuyingPage_obj,alreadyBought),HX_("alreadyBought",e3,07,9e,f2)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(BfBuyingPage_obj,bfText),HX_("bfText",91,80,ab,21)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(BfBuyingPage_obj,notEnoughText),HX_("notEnoughText",70,b5,bc,6d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo BfBuyingPage_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(void *) &BfBuyingPage_obj::owned,HX_("owned",25,98,76,38)},
	{::hx::fsInt,(void *) &BfBuyingPage_obj::bfHatAmount,HX_("bfHatAmount",2f,ed,24,d4)},
	{::hx::fsBool,(void *) &BfBuyingPage_obj::pointsIsEnough,HX_("pointsIsEnough",7d,d6,83,d9)},
	{::hx::fsBool,(void *) &BfBuyingPage_obj::boughtBfWithMarioHat,HX_("boughtBfWithMarioHat",4c,4b,2e,34)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String BfBuyingPage_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("buyNow",70,9d,11,dd),
	HX_("bfPage",33,8e,03,1f),
	HX_("blackScreen",8b,de,f4,5d),
	HX_("bought",2b,3a,18,66),
	HX_("notEnough",23,ef,bf,7e),
	HX_("alreadyBought",e3,07,9e,f2),
	HX_("bfText",91,80,ab,21),
	HX_("notEnoughText",70,b5,bc,6d),
	HX_("create",fc,66,0f,7c),
	HX_("Bought",4b,ae,ac,9a),
	HX_("notEnoughFunction",5b,b1,cc,fb),
	HX_("alreadyBoughtFunction",1b,8a,91,54),
	HX_("update",09,86,05,87),
	HX_("save",3d,8b,4d,4c),
	::String(null()) };

static void BfBuyingPage_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BfBuyingPage_obj::owned,"owned");
	HX_MARK_MEMBER_NAME(BfBuyingPage_obj::bfHatAmount,"bfHatAmount");
	HX_MARK_MEMBER_NAME(BfBuyingPage_obj::pointsIsEnough,"pointsIsEnough");
	HX_MARK_MEMBER_NAME(BfBuyingPage_obj::boughtBfWithMarioHat,"boughtBfWithMarioHat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BfBuyingPage_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BfBuyingPage_obj::owned,"owned");
	HX_VISIT_MEMBER_NAME(BfBuyingPage_obj::bfHatAmount,"bfHatAmount");
	HX_VISIT_MEMBER_NAME(BfBuyingPage_obj::pointsIsEnough,"pointsIsEnough");
	HX_VISIT_MEMBER_NAME(BfBuyingPage_obj::boughtBfWithMarioHat,"boughtBfWithMarioHat");
};

#endif

::hx::Class BfBuyingPage_obj::__mClass;

static ::String BfBuyingPage_obj_sStaticFields[] = {
	HX_("owned",25,98,76,38),
	HX_("bfHatAmount",2f,ed,24,d4),
	HX_("pointsIsEnough",7d,d6,83,d9),
	HX_("boughtBfWithMarioHat",4c,4b,2e,34),
	HX_("checkIfBought",d0,2a,45,8a),
	::String(null())
};

void BfBuyingPage_obj::__register()
{
	BfBuyingPage_obj _hx_dummy;
	BfBuyingPage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("BfBuyingPage",cf,00,59,dd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BfBuyingPage_obj::__GetStatic;
	__mClass->mSetStaticField = &BfBuyingPage_obj::__SetStatic;
	__mClass->mMarkFunc = BfBuyingPage_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BfBuyingPage_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BfBuyingPage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BfBuyingPage_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BfBuyingPage_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BfBuyingPage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BfBuyingPage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BfBuyingPage_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_29_boot)
HXDLIN(  29)		bfHatAmount = 50;
            	}
{
            	HX_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_31_boot)
HXDLIN(  31)		pointsIsEnough = (::WiiShopChannel_obj::wiiPoints == ::BfBuyingPage_obj::bfHatAmount);
            	}
{
            	HX_STACKFRAME(&_hx_pos_64e5c205c8dfa1c6_33_boot)
HXDLIN(  33)		boughtBfWithMarioHat = false;
            	}
}

