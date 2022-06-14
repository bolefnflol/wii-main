#include <hxcpp.h>

#ifndef INCLUDED_MiddleScroll
#include <MiddleScroll.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3900401c5d87433c_658_new,"MiddleScroll","new",0xcc6c1354,"MiddleScroll.new","Options.hx",658,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_3900401c5d87433c_663_press,"MiddleScroll","press",0xfd6e3b77,"MiddleScroll.press","Options.hx",663,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_3900401c5d87433c_671_updateDisplay,"MiddleScroll","updateDisplay",0x8c758b2d,"MiddleScroll.updateDisplay","Options.hx",671,0x9d9a0240)

void MiddleScroll_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_3900401c5d87433c_658_new)
HXLINE( 659)		super::__construct();
HXLINE( 660)		this->description = desc;
            	}

Dynamic MiddleScroll_obj::__CreateEmpty() { return new MiddleScroll_obj; }

void *MiddleScroll_obj::_hx_vtable = 0;

Dynamic MiddleScroll_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MiddleScroll_obj > _hx_result = new MiddleScroll_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MiddleScroll_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x134c6c22) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x134c6c22;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool MiddleScroll_obj::press(){
            	HX_STACKFRAME(&_hx_pos_3900401c5d87433c_663_press)
HXLINE( 664)		::flixel::FlxG_obj::save->data->__SetField(HX_("middleScroll",42,cd,58,62),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 665)		this->display = this->updateDisplay();
HXLINE( 666)		return true;
            	}


::String MiddleScroll_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_3900401c5d87433c_671_updateDisplay)
HXDLIN( 671)		::String _hx_tmp;
HXDLIN( 671)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic)) ))) {
HXDLIN( 671)			_hx_tmp = HX_("off",6f,93,54,00);
            		}
            		else {
HXDLIN( 671)			_hx_tmp = HX_("on",1f,61,00,00);
            		}
HXDLIN( 671)		return (HX_("Middle Scroll: ",1e,66,28,96) + _hx_tmp);
            	}



::hx::ObjectPtr< MiddleScroll_obj > MiddleScroll_obj::__new(::String desc) {
	::hx::ObjectPtr< MiddleScroll_obj > __this = new MiddleScroll_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< MiddleScroll_obj > MiddleScroll_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	MiddleScroll_obj *__this = (MiddleScroll_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MiddleScroll_obj), true, "MiddleScroll"));
	*(void **)__this = MiddleScroll_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

MiddleScroll_obj::MiddleScroll_obj()
{
}

::hx::Val MiddleScroll_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *MiddleScroll_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MiddleScroll_obj_sStaticStorageInfo = 0;
#endif

static ::String MiddleScroll_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class MiddleScroll_obj::__mClass;

void MiddleScroll_obj::__register()
{
	MiddleScroll_obj _hx_dummy;
	MiddleScroll_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MiddleScroll",62,19,6b,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MiddleScroll_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MiddleScroll_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MiddleScroll_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MiddleScroll_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

