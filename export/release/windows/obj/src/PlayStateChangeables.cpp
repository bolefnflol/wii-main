#include <hxcpp.h>

#ifndef INCLUDED_PlayStateChangeables
#include <PlayStateChangeables.h>
#endif


void PlayStateChangeables_obj::__construct() { }

Dynamic PlayStateChangeables_obj::__CreateEmpty() { return new PlayStateChangeables_obj; }

void *PlayStateChangeables_obj::_hx_vtable = 0;

Dynamic PlayStateChangeables_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayStateChangeables_obj > _hx_result = new PlayStateChangeables_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlayStateChangeables_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13a5a580;
}

bool PlayStateChangeables_obj::useDownscroll;

int PlayStateChangeables_obj::safeFrames;

Float PlayStateChangeables_obj::scrollSpeed;

bool PlayStateChangeables_obj::botPlay;

bool PlayStateChangeables_obj::Optimize;


PlayStateChangeables_obj::PlayStateChangeables_obj()
{
}

bool PlayStateChangeables_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"botPlay") ) { outValue = ( botPlay ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Optimize") ) { outValue = ( Optimize ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"safeFrames") ) { outValue = ( safeFrames ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { outValue = ( scrollSpeed ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useDownscroll") ) { outValue = ( useDownscroll ); return true; }
	}
	return false;
}

bool PlayStateChangeables_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"botPlay") ) { botPlay=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Optimize") ) { Optimize=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"safeFrames") ) { safeFrames=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { scrollSpeed=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useDownscroll") ) { useDownscroll=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlayStateChangeables_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PlayStateChangeables_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &PlayStateChangeables_obj::useDownscroll,HX_("useDownscroll",16,35,3d,88)},
	{::hx::fsInt,(void *) &PlayStateChangeables_obj::safeFrames,HX_("safeFrames",d3,18,18,62)},
	{::hx::fsFloat,(void *) &PlayStateChangeables_obj::scrollSpeed,HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsBool,(void *) &PlayStateChangeables_obj::botPlay,HX_("botPlay",9b,27,83,4c)},
	{::hx::fsBool,(void *) &PlayStateChangeables_obj::Optimize,HX_("Optimize",fd,48,ca,f6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PlayStateChangeables_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayStateChangeables_obj::useDownscroll,"useDownscroll");
	HX_MARK_MEMBER_NAME(PlayStateChangeables_obj::safeFrames,"safeFrames");
	HX_MARK_MEMBER_NAME(PlayStateChangeables_obj::scrollSpeed,"scrollSpeed");
	HX_MARK_MEMBER_NAME(PlayStateChangeables_obj::botPlay,"botPlay");
	HX_MARK_MEMBER_NAME(PlayStateChangeables_obj::Optimize,"Optimize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlayStateChangeables_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayStateChangeables_obj::useDownscroll,"useDownscroll");
	HX_VISIT_MEMBER_NAME(PlayStateChangeables_obj::safeFrames,"safeFrames");
	HX_VISIT_MEMBER_NAME(PlayStateChangeables_obj::scrollSpeed,"scrollSpeed");
	HX_VISIT_MEMBER_NAME(PlayStateChangeables_obj::botPlay,"botPlay");
	HX_VISIT_MEMBER_NAME(PlayStateChangeables_obj::Optimize,"Optimize");
};

#endif

::hx::Class PlayStateChangeables_obj::__mClass;

static ::String PlayStateChangeables_obj_sStaticFields[] = {
	HX_("useDownscroll",16,35,3d,88),
	HX_("safeFrames",d3,18,18,62),
	HX_("scrollSpeed",3a,e0,46,cb),
	HX_("botPlay",9b,27,83,4c),
	HX_("Optimize",fd,48,ca,f6),
	::String(null())
};

void PlayStateChangeables_obj::__register()
{
	PlayStateChangeables_obj _hx_dummy;
	PlayStateChangeables_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayStateChangeables",cc,79,e3,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PlayStateChangeables_obj::__GetStatic;
	__mClass->mSetStaticField = &PlayStateChangeables_obj::__SetStatic;
	__mClass->mMarkFunc = PlayStateChangeables_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PlayStateChangeables_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PlayStateChangeables_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlayStateChangeables_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayStateChangeables_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayStateChangeables_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

