#include <hxcpp.h>

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Trophies
#include <Trophies.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_api_FlxGameJolt
#include <flixel/addons/api/FlxGameJolt.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_996db5b30be977c5_11_new,"Trophies","new",0xa26b7f60,"Trophies.new","Trophies.hx",11,0xbab38c10)
HX_LOCAL_STACK_FRAME(_hx_pos_996db5b30be977c5_15_unlockTrophy,"Trophies","unlockTrophy",0xd077f5d4,"Trophies.unlockTrophy","Trophies.hx",15,0xbab38c10)

void Trophies_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_996db5b30be977c5_11_new)
HXDLIN(  11)		super::__construct(TransIn,TransOut);
            	}

Dynamic Trophies_obj::__CreateEmpty() { return new Trophies_obj; }

void *Trophies_obj::_hx_vtable = 0;

Dynamic Trophies_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Trophies_obj > _hx_result = new Trophies_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Trophies_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x1f1b6792) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1f1b6792;
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

void Trophies_obj::unlockTrophy(int id){
            	HX_STACKFRAME(&_hx_pos_996db5b30be977c5_15_unlockTrophy)
HXDLIN(  15)		::flixel::addons::api::FlxGameJolt_obj::addTrophy(id,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Trophies_obj,unlockTrophy,(void))


::hx::ObjectPtr< Trophies_obj > Trophies_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< Trophies_obj > __this = new Trophies_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< Trophies_obj > Trophies_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	Trophies_obj *__this = (Trophies_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Trophies_obj), true, "Trophies"));
	*(void **)__this = Trophies_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

Trophies_obj::Trophies_obj()
{
}

bool Trophies_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"unlockTrophy") ) { outValue = unlockTrophy_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Trophies_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Trophies_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Trophies_obj::__mClass;

static ::String Trophies_obj_sStaticFields[] = {
	HX_("unlockTrophy",d4,84,7d,05),
	::String(null())
};

void Trophies_obj::__register()
{
	Trophies_obj _hx_dummy;
	Trophies_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Trophies",6e,8f,a8,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Trophies_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Trophies_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Trophies_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Trophies_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Trophies_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

