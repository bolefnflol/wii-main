#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_LimitedChars
#include <LimitedChars.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_SelectTypeOfChar
#include <SelectTypeOfChar.h>
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
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_542e8caeb3ad77f3_16_new,"LimitedChars","new",0x9aa3d4b5,"LimitedChars.new","LimitedChars.hx",16,0xfc19f85b)
HX_LOCAL_STACK_FRAME(_hx_pos_542e8caeb3ad77f3_24_create,"LimitedChars","create",0x10c905c7,"LimitedChars.create","LimitedChars.hx",24,0xfc19f85b)
HX_LOCAL_STACK_FRAME(_hx_pos_542e8caeb3ad77f3_62_update,"LimitedChars","update",0x1bbf24d4,"LimitedChars.update","LimitedChars.hx",62,0xfc19f85b)

void LimitedChars_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_542e8caeb3ad77f3_16_new)
HXLINE(  21)		this->noCurrentSkinsSine = ((Float)0);
HXLINE(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic LimitedChars_obj::__CreateEmpty() { return new LimitedChars_obj; }

void *LimitedChars_obj::_hx_vtable = 0;

Dynamic LimitedChars_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LimitedChars_obj > _hx_result = new LimitedChars_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LimitedChars_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x07581067) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x07581067;
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

void LimitedChars_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_542e8caeb3ad77f3_24_create)
HXLINE(  27)		::DiscordClient_obj::changePresence(HX_("Limited Characters Menu",ef,e4,7e,11),null(),null(),null(),null());
HXLINE(  30)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  30)		::String library = null();
HXDLIN(  30)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/bg",6e,fe,d0,6b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  31)		this->add(this->bg);
HXLINE(  33)		this->noCurrentSkins =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),HX_("No limited skins available. Come back Later!",be,d6,52,36),null(),null());
HXLINE(  34)		this->noCurrentSkins->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),42,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  35)		{
HXLINE(  35)			 ::flixel::text::FlxText _this = this->noCurrentSkins;
HXDLIN(  35)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  35)			bool _hx_tmp1;
HXDLIN(  35)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  35)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  35)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  35)			if (_hx_tmp1) {
HXLINE(  35)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  35)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  35)			bool _hx_tmp2;
HXDLIN(  35)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  35)					_hx_tmp2 = true;
            				}
            				break;
            				default:{
HXLINE(  35)					_hx_tmp2 = false;
            				}
            			}
HXDLIN(  35)			if (_hx_tmp2) {
HXLINE(  35)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  35)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  36)		this->noCurrentSkins->scrollFactor->set(null(),null());
HXLINE(  37)		this->noCurrentSkins->set_borderSize(( (Float)(4) ));
HXLINE(  38)		this->noCurrentSkins->set_borderQuality(( (Float)(2) ));
HXLINE(  40)		this->noCurrentSkins1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),HX_("There is a skin available. aaaaaaaaaaaaaaaa",51,eb,e9,fd),null(),null());
HXLINE(  41)		this->noCurrentSkins1->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),42,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  42)		{
HXLINE(  42)			 ::flixel::text::FlxText _this1 = this->noCurrentSkins1;
HXDLIN(  42)			 ::flixel::util::FlxAxes axes1 = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  42)			bool _hx_tmp3;
HXDLIN(  42)			switch((int)(axes1->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  42)					_hx_tmp3 = true;
            				}
            				break;
            				default:{
HXLINE(  42)					_hx_tmp3 = false;
            				}
            			}
HXDLIN(  42)			if (_hx_tmp3) {
HXLINE(  42)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  42)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  42)			bool _hx_tmp4;
HXDLIN(  42)			switch((int)(axes1->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  42)					_hx_tmp4 = true;
            				}
            				break;
            				default:{
HXLINE(  42)					_hx_tmp4 = false;
            				}
            			}
HXDLIN(  42)			if (_hx_tmp4) {
HXLINE(  42)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  42)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  43)		this->noCurrentSkins1->scrollFactor->set(null(),null());
HXLINE(  44)		this->noCurrentSkins1->set_borderSize(( (Float)(4) ));
HXLINE(  45)		this->noCurrentSkins1->set_borderQuality(( (Float)(2) ));
HXLINE(  58)		this->super::create();
            	}


void LimitedChars_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_542e8caeb3ad77f3_62_update)
HXLINE(  63)		if (this->noCurrentSkins->visible) {
HXLINE(  65)			 ::LimitedChars _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  65)			_hx_tmp->noCurrentSkinsSine = (_hx_tmp->noCurrentSkinsSine + (( (Float)(180) ) * elapsed));
HXLINE(  66)			this->noCurrentSkins->set_alpha((( (Float)(1) ) - ::Math_obj::sin(((::Math_obj::PI * this->noCurrentSkinsSine) / ( (Float)(180) )))));
HXLINE(  67)			this->noCurrentSkins1->set_alpha((( (Float)(1) ) - ::Math_obj::sin(((::Math_obj::PI * this->noCurrentSkinsSine) / ( (Float)(180) )))));
            		}
HXLINE(  70)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  70)		if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE(  72)			 ::flixel::FlxState nextState =  ::SelectTypeOfChar_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  72)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  72)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE(  75)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< LimitedChars_obj > LimitedChars_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< LimitedChars_obj > __this = new LimitedChars_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< LimitedChars_obj > LimitedChars_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	LimitedChars_obj *__this = (LimitedChars_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LimitedChars_obj), true, "LimitedChars"));
	*(void **)__this = LimitedChars_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

LimitedChars_obj::LimitedChars_obj()
{
}

void LimitedChars_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LimitedChars);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(noCurrentSkins,"noCurrentSkins");
	HX_MARK_MEMBER_NAME(noCurrentSkins1,"noCurrentSkins1");
	HX_MARK_MEMBER_NAME(noCurrentSkinsSine,"noCurrentSkinsSine");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LimitedChars_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(noCurrentSkins,"noCurrentSkins");
	HX_VISIT_MEMBER_NAME(noCurrentSkins1,"noCurrentSkins1");
	HX_VISIT_MEMBER_NAME(noCurrentSkinsSine,"noCurrentSkinsSine");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LimitedChars_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"noCurrentSkins") ) { return ::hx::Val( noCurrentSkins ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"noCurrentSkins1") ) { return ::hx::Val( noCurrentSkins1 ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"noCurrentSkinsSine") ) { return ::hx::Val( noCurrentSkinsSine ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LimitedChars_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"noCurrentSkins") ) { noCurrentSkins=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"noCurrentSkins1") ) { noCurrentSkins1=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"noCurrentSkinsSine") ) { noCurrentSkinsSine=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LimitedChars_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("noCurrentSkins",3e,06,2d,72));
	outFields->push(HX_("noCurrentSkins1",33,70,38,75));
	outFields->push(HX_("noCurrentSkinsSine",ab,bf,2c,de));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LimitedChars_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LimitedChars_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(LimitedChars_obj,noCurrentSkins),HX_("noCurrentSkins",3e,06,2d,72)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(LimitedChars_obj,noCurrentSkins1),HX_("noCurrentSkins1",33,70,38,75)},
	{::hx::fsFloat,(int)offsetof(LimitedChars_obj,noCurrentSkinsSine),HX_("noCurrentSkinsSine",ab,bf,2c,de)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LimitedChars_obj_sStaticStorageInfo = 0;
#endif

static ::String LimitedChars_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("noCurrentSkins",3e,06,2d,72),
	HX_("noCurrentSkins1",33,70,38,75),
	HX_("noCurrentSkinsSine",ab,bf,2c,de),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class LimitedChars_obj::__mClass;

void LimitedChars_obj::__register()
{
	LimitedChars_obj _hx_dummy;
	LimitedChars_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LimitedChars",43,56,2c,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LimitedChars_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LimitedChars_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LimitedChars_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LimitedChars_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

