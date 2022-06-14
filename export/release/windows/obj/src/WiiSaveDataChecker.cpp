#include <hxcpp.h>

#ifndef INCLUDED_BfBuyingPage
#include <BfBuyingPage.h>
#endif
#ifndef INCLUDED_EduardoPage
#include <EduardoPage.h>
#endif
#ifndef INCLUDED_GFPage
#include <GFPage.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PicoPage
#include <PicoPage.h>
#endif
#ifndef INCLUDED_PowerUps
#include <PowerUps.h>
#endif
#ifndef INCLUDED_SelectYourPlayableChar
#include <SelectYourPlayableChar.h>
#endif
#ifndef INCLUDED_SpookyPage
#include <SpookyPage.h>
#endif
#ifndef INCLUDED_WiiSaveDataChecker
#include <WiiSaveDataChecker.h>
#endif
#ifndef INCLUDED_WiiShopChannel
#include <WiiShopChannel.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_20d56b8dc075dfaa_5_new,"WiiSaveDataChecker","new",0xb4178829,"WiiSaveDataChecker.new","WiiSaveDataChecker.hx",5,0xc88e6f67)
HX_LOCAL_STACK_FRAME(_hx_pos_20d56b8dc075dfaa_8_checkSaveData,"WiiSaveDataChecker","checkSaveData",0x3147f9f8,"WiiSaveDataChecker.checkSaveData","WiiSaveDataChecker.hx",8,0xc88e6f67)
HX_LOCAL_STACK_FRAME(_hx_pos_20d56b8dc075dfaa_74_limitedCharSaveChecker,"WiiSaveDataChecker","limitedCharSaveChecker",0xad1068df,"WiiSaveDataChecker.limitedCharSaveChecker","WiiSaveDataChecker.hx",74,0xc88e6f67)

void WiiSaveDataChecker_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_20d56b8dc075dfaa_5_new)
HXDLIN(   5)		super::__construct(TransIn,TransOut);
            	}

Dynamic WiiSaveDataChecker_obj::__CreateEmpty() { return new WiiSaveDataChecker_obj; }

void *WiiSaveDataChecker_obj::_hx_vtable = 0;

Dynamic WiiSaveDataChecker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WiiSaveDataChecker_obj > _hx_result = new WiiSaveDataChecker_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WiiSaveDataChecker_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62402277) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62402277;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void WiiSaveDataChecker_obj::checkSaveData(){
            	HX_STACKFRAME(&_hx_pos_20d56b8dc075dfaa_8_checkSaveData)
HXLINE(  10)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("wiiPoints",9a,d9,f8,bd),::hx::paccDynamic) )) {
HXLINE(  11)			::WiiShopChannel_obj::wiiPoints = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("wiiPoints",9a,d9,f8,bd),::hx::paccDynamic)) );
            		}
HXLINE(  12)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("healthGainers",0b,bb,73,1b),::hx::paccDynamic) )) {
HXLINE(  13)			::PowerUps_obj::healthGainers = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("healthGainers",0b,bb,73,1b),::hx::paccDynamic)) );
            		}
HXLINE(  16)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtBfWithMarioHat",4c,4b,2e,34),::hx::paccDynamic) )) {
HXLINE(  17)			::BfBuyingPage_obj::boughtBfWithMarioHat = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtBfWithMarioHat",4c,4b,2e,34),::hx::paccDynamic)) );
            		}
HXLINE(  19)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtPICOWithLUIGIHat",6f,0d,dd,99),::hx::paccDynamic) )) {
HXLINE(  20)			::PicoPage_obj::boughtPICOWithLUIGIHat = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtPICOWithLUIGIHat",6f,0d,dd,99),::hx::paccDynamic)) );
            		}
HXLINE(  22)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtSPOOKYHats",2e,56,56,28),::hx::paccDynamic) )) {
HXLINE(  23)			::SpookyPage_obj::boughtSPOOKYHats = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtSPOOKYHats",2e,56,56,28),::hx::paccDynamic)) );
            		}
HXLINE(  25)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtEduardo",07,b2,8b,e5),::hx::paccDynamic) )) {
HXLINE(  26)			::EduardoPage_obj::boughtEduardo = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtEduardo",07,b2,8b,e5),::hx::paccDynamic)) );
            		}
HXLINE(  28)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("boughtgfCrown",8d,99,4d,79),::hx::paccDynamic) )) {
HXLINE(  29)			::GFPage_obj::boughtgfCrown = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("boughtgfCrown",8d,99,4d,79),::hx::paccDynamic)) );
            		}
HXLINE(  33)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("displayBf",a6,f8,da,c1),::hx::paccDynamic) )) {
HXLINE(  34)			::SelectYourPlayableChar_obj::displayBf = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("displayBf",a6,f8,da,c1),::hx::paccDynamic)) );
            		}
HXLINE(  36)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("displayPico",47,88,4a,32),::hx::paccDynamic) )) {
HXLINE(  37)			::SelectYourPlayableChar_obj::displayPico = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("displayPico",47,88,4a,32),::hx::paccDynamic)) );
            		}
HXLINE(  39)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("displaySpooky",cd,79,01,83),::hx::paccDynamic) )) {
HXLINE(  40)			::SelectYourPlayableChar_obj::displaySpooky = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("displaySpooky",cd,79,01,83),::hx::paccDynamic)) );
            		}
HXLINE(  42)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("displayEduardo",d0,02,00,77),::hx::paccDynamic) )) {
HXLINE(  43)			::SelectYourPlayableChar_obj::displayEduardo = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("displayEduardo",d0,02,00,77),::hx::paccDynamic)) );
            		}
HXLINE(  45)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("displayGf",01,fd,da,c1),::hx::paccDynamic) )) {
HXLINE(  46)			::SelectYourPlayableChar_obj::displayGf = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("displayGf",01,fd,da,c1),::hx::paccDynamic)) );
            		}
HXLINE(  51)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("promoCodeConsole",1b,69,17,13),::hx::paccDynamic) )) {
HXLINE(  52)			::WiiShopChannel_obj::promoCodeConsole = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("promoCodeConsole",1b,69,17,13),::hx::paccDynamic)) );
            		}
HXLINE(  54)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("promoCodebolefnf",3c,d2,1b,ec),::hx::paccDynamic) )) {
HXLINE(  55)			::WiiShopChannel_obj::promoCodebolefnf = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("promoCodebolefnf",3c,d2,1b,ec),::hx::paccDynamic)) );
            		}
HXLINE(  57)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("promoCodeitswariotime",8f,3a,ae,9a),::hx::paccDynamic) )) {
HXLINE(  58)			::WiiShopChannel_obj::promoCodeitswariotime = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("promoCodeitswariotime",8f,3a,ae,9a),::hx::paccDynamic)) );
            		}
HXLINE(  60)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("promoCodewahoo",a2,5a,22,64),::hx::paccDynamic) )) {
HXLINE(  61)			::WiiShopChannel_obj::promoCodewahoo = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("promoCodewahoo",a2,5a,22,64),::hx::paccDynamic)) );
            		}
HXLINE(  63)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("promoCodeplayer",fd,dd,3c,be),::hx::paccDynamic) )) {
HXLINE(  64)			::WiiShopChannel_obj::promoCodeplayer = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("promoCodeplayer",fd,dd,3c,be),::hx::paccDynamic)) );
            		}
HXLINE(  66)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("promoCodeA",25,13,b9,d0),::hx::paccDynamic) )) {
HXLINE(  67)			::WiiShopChannel_obj::promoCodeA = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("promoCodeA",25,13,b9,d0),::hx::paccDynamic)) );
            		}
HXLINE(  69)		::WiiSaveDataChecker_obj::limitedCharSaveChecker();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WiiSaveDataChecker_obj,checkSaveData,(void))

void WiiSaveDataChecker_obj::limitedCharSaveChecker(){
            	HX_STACKFRAME(&_hx_pos_20d56b8dc075dfaa_74_limitedCharSaveChecker)
HXDLIN(  74)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("promoCodeplayer",fd,dd,3c,be),::hx::paccDynamic) )) {
HXLINE(  75)			::WiiShopChannel_obj::promoCodeplayer = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("promoCodeplayer",fd,dd,3c,be),::hx::paccDynamic)) );
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WiiSaveDataChecker_obj,limitedCharSaveChecker,(void))


::hx::ObjectPtr< WiiSaveDataChecker_obj > WiiSaveDataChecker_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< WiiSaveDataChecker_obj > __this = new WiiSaveDataChecker_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< WiiSaveDataChecker_obj > WiiSaveDataChecker_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	WiiSaveDataChecker_obj *__this = (WiiSaveDataChecker_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WiiSaveDataChecker_obj), true, "WiiSaveDataChecker"));
	*(void **)__this = WiiSaveDataChecker_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

WiiSaveDataChecker_obj::WiiSaveDataChecker_obj()
{
}

bool WiiSaveDataChecker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"checkSaveData") ) { outValue = checkSaveData_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"limitedCharSaveChecker") ) { outValue = limitedCharSaveChecker_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *WiiSaveDataChecker_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *WiiSaveDataChecker_obj_sStaticStorageInfo = 0;
#endif

::hx::Class WiiSaveDataChecker_obj::__mClass;

static ::String WiiSaveDataChecker_obj_sStaticFields[] = {
	HX_("checkSaveData",ef,4c,77,de),
	HX_("limitedCharSaveChecker",08,7f,40,c4),
	::String(null())
};

void WiiSaveDataChecker_obj::__register()
{
	WiiSaveDataChecker_obj _hx_dummy;
	WiiSaveDataChecker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WiiSaveDataChecker",b7,3f,7c,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WiiSaveDataChecker_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WiiSaveDataChecker_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< WiiSaveDataChecker_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WiiSaveDataChecker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WiiSaveDataChecker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

