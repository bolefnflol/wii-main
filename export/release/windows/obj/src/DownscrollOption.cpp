#include <hxcpp.h>

#ifndef INCLUDED_DownscrollOption
#include <DownscrollOption.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_524d86a494ed656f_102_new,"DownscrollOption","new",0xc6fce9d6,"DownscrollOption.new","Options.hx",102,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_524d86a494ed656f_108_press,"DownscrollOption","press",0x5ec33679,"DownscrollOption.press","Options.hx",108,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_524d86a494ed656f_116_updateDisplay,"DownscrollOption","updateDisplay",0xb9a0582f,"DownscrollOption.updateDisplay","Options.hx",116,0x9d9a0240)

void DownscrollOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_524d86a494ed656f_102_new)
HXLINE( 103)		super::__construct();
HXLINE( 104)		this->description = desc;
            	}

Dynamic DownscrollOption_obj::__CreateEmpty() { return new DownscrollOption_obj; }

void *DownscrollOption_obj::_hx_vtable = 0;

Dynamic DownscrollOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DownscrollOption_obj > _hx_result = new DownscrollOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DownscrollOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x524bb9a4;
	}
}

bool DownscrollOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_524d86a494ed656f_108_press)
HXLINE( 109)		::flixel::FlxG_obj::save->data->__SetField(HX_("downscroll",ef,45,d4,4f),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("downscroll",ef,45,d4,4f),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 110)		this->display = this->updateDisplay();
HXLINE( 111)		return true;
            	}


::String DownscrollOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_524d86a494ed656f_116_updateDisplay)
HXDLIN( 116)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("downscroll",ef,45,d4,4f),::hx::paccDynamic)) )) {
HXDLIN( 116)			return HX_("Downscroll",0f,4a,85,46);
            		}
            		else {
HXDLIN( 116)			return HX_("Upscroll",c8,b0,88,76);
            		}
HXDLIN( 116)		return null();
            	}



::hx::ObjectPtr< DownscrollOption_obj > DownscrollOption_obj::__new(::String desc) {
	::hx::ObjectPtr< DownscrollOption_obj > __this = new DownscrollOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< DownscrollOption_obj > DownscrollOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	DownscrollOption_obj *__this = (DownscrollOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DownscrollOption_obj), true, "DownscrollOption"));
	*(void **)__this = DownscrollOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

DownscrollOption_obj::DownscrollOption_obj()
{
}

::hx::Val DownscrollOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DownscrollOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DownscrollOption_obj_sStaticStorageInfo = 0;
#endif

static ::String DownscrollOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class DownscrollOption_obj::__mClass;

void DownscrollOption_obj::__register()
{
	DownscrollOption_obj _hx_dummy;
	DownscrollOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DownscrollOption",e4,06,6a,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DownscrollOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DownscrollOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DownscrollOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DownscrollOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

