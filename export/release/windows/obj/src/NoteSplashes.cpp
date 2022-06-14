#include <hxcpp.h>

#ifndef INCLUDED_NoteSplashes
#include <NoteSplashes.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bbf78c8a30254c5c_677_new,"NoteSplashes","new",0x12c23439,"NoteSplashes.new","Options.hx",677,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_bbf78c8a30254c5c_682_press,"NoteSplashes","press",0x1e3a1f9c,"NoteSplashes.press","Options.hx",682,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_bbf78c8a30254c5c_690_updateDisplay,"NoteSplashes","updateDisplay",0x6ea99c52,"NoteSplashes.updateDisplay","Options.hx",690,0x9d9a0240)

void NoteSplashes_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_bbf78c8a30254c5c_677_new)
HXLINE( 678)		super::__construct();
HXLINE( 679)		this->description = desc;
            	}

Dynamic NoteSplashes_obj::__CreateEmpty() { return new NoteSplashes_obj; }

void *NoteSplashes_obj::_hx_vtable = 0;

Dynamic NoteSplashes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NoteSplashes_obj > _hx_result = new NoteSplashes_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NoteSplashes_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x3e1cf687;
	}
}

bool NoteSplashes_obj::press(){
            	HX_STACKFRAME(&_hx_pos_bbf78c8a30254c5c_682_press)
HXLINE( 683)		::flixel::FlxG_obj::save->data->__SetField(HX_("noteSplash",f9,8e,ac,5d),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("noteSplash",f9,8e,ac,5d),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 684)		this->display = this->updateDisplay();
HXLINE( 685)		return true;
            	}


::String NoteSplashes_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_bbf78c8a30254c5c_690_updateDisplay)
HXDLIN( 690)		::String _hx_tmp;
HXDLIN( 690)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("noteSplash",f9,8e,ac,5d),::hx::paccDynamic)) ))) {
HXDLIN( 690)			_hx_tmp = HX_("off",6f,93,54,00);
            		}
            		else {
HXDLIN( 690)			_hx_tmp = HX_("on",1f,61,00,00);
            		}
HXDLIN( 690)		return (HX_("Note Splashes: ",e9,20,dc,19) + _hx_tmp);
            	}



::hx::ObjectPtr< NoteSplashes_obj > NoteSplashes_obj::__new(::String desc) {
	::hx::ObjectPtr< NoteSplashes_obj > __this = new NoteSplashes_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< NoteSplashes_obj > NoteSplashes_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	NoteSplashes_obj *__this = (NoteSplashes_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NoteSplashes_obj), true, "NoteSplashes"));
	*(void **)__this = NoteSplashes_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

NoteSplashes_obj::NoteSplashes_obj()
{
}

::hx::Val NoteSplashes_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *NoteSplashes_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NoteSplashes_obj_sStaticStorageInfo = 0;
#endif

static ::String NoteSplashes_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class NoteSplashes_obj::__mClass;

void NoteSplashes_obj::__register()
{
	NoteSplashes_obj _hx_dummy;
	NoteSplashes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("NoteSplashes",c7,a3,3b,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NoteSplashes_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NoteSplashes_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NoteSplashes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NoteSplashes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

