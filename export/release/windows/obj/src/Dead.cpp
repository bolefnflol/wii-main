#include <hxcpp.h>

#ifndef INCLUDED_Dead
#include <Dead.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_vlc_VideoHandler
#include <vlc/VideoHandler.h>
#endif
#ifndef INCLUDED_vlc_bitmap_VlcBitmap
#include <vlc/bitmap/VlcBitmap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06180dda74b2425d_6_new,"Dead","new",0x14c9cdb6,"Dead.new","Dead.hx",6,0x89d9da7a)
HX_LOCAL_STACK_FRAME(_hx_pos_06180dda74b2425d_16_create,"Dead","create",0x528de366,"Dead.create","Dead.hx",16,0x89d9da7a)
HX_LOCAL_STACK_FRAME(_hx_pos_06180dda74b2425d_11_create,"Dead","create",0x528de366,"Dead.create","Dead.hx",11,0x89d9da7a)
HX_LOCAL_STACK_FRAME(_hx_pos_06180dda74b2425d_29_update,"Dead","update",0x5d840273,"Dead.update","Dead.hx",29,0x89d9da7a)

void Dead_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_06180dda74b2425d_6_new)
HXDLIN(   6)		super::__construct(TransIn,TransOut);
            	}

Dynamic Dead_obj::__CreateEmpty() { return new Dead_obj; }

void *Dead_obj::_hx_vtable = 0;

Dynamic Dead_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Dead_obj > _hx_result = new Dead_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Dead_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x019270e8) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x019270e8;
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

void Dead_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_06180dda74b2425d_16_create)
HXLINE(  17)			::flixel::FlxG_obj::save->data->__SetField(HX_("comeDead",c8,05,ef,0f),false,::hx::paccDynamic);
HXLINE(  18)			::flixel::FlxG_obj::save->data->__SetField(HX_("a",61,00,00,00),false,::hx::paccDynamic);
HXLINE(  19)			::flixel::FlxG_obj::save->flush(null(),null());
HXLINE(  20)			::Sys_obj::command(HX_("start assets/shared/images/seriously.txt",b8,50,57,fd),null());
HXLINE(  21)			::Sys_obj::exit(1);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_06180dda74b2425d_11_create)
HXLINE(  12)		 ::vlc::VideoHandler video =  ::vlc::VideoHandler_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  14)		video->playVideo((HX_("assets/videos/",cb,c4,dd,db) + HX_("dead.mp4",a7,58,17,3b)),null(),null());
HXLINE(  15)		video->finishCallback =  ::Dynamic(new _hx_Closure_0());
HXLINE(  24)		this->super::create();
            	}


void Dead_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_06180dda74b2425d_29_update)
HXDLIN(  29)		this->super::update(elapsed);
            	}


bool Dead_obj::hello;


::hx::ObjectPtr< Dead_obj > Dead_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< Dead_obj > __this = new Dead_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< Dead_obj > Dead_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	Dead_obj *__this = (Dead_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Dead_obj), true, "Dead"));
	*(void **)__this = Dead_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

Dead_obj::Dead_obj()
{
}

::hx::Val Dead_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Dead_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"hello") ) { outValue = ( hello ); return true; }
	}
	return false;
}

bool Dead_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"hello") ) { hello=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Dead_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Dead_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &Dead_obj::hello,HX_("hello",12,33,c1,24)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Dead_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void Dead_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Dead_obj::hello,"hello");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Dead_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Dead_obj::hello,"hello");
};

#endif

::hx::Class Dead_obj::__mClass;

static ::String Dead_obj_sStaticFields[] = {
	HX_("hello",12,33,c1,24),
	::String(null())
};

void Dead_obj::__register()
{
	Dead_obj _hx_dummy;
	Dead_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Dead",c4,7a,3f,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Dead_obj::__GetStatic;
	__mClass->mSetStaticField = &Dead_obj::__SetStatic;
	__mClass->mMarkFunc = Dead_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Dead_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Dead_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Dead_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Dead_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Dead_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Dead_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

