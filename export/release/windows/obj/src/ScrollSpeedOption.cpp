#include <hxcpp.h>

#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_ScrollSpeedOption
#include <ScrollSpeedOption.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_aba31ccdfcd6978a_414_new,"ScrollSpeedOption","new",0xe9c533a1,"ScrollSpeedOption.new","Options.hx",414,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_aba31ccdfcd6978a_422_press,"ScrollSpeedOption","press",0xfb89c904,"ScrollSpeedOption.press","Options.hx",422,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_aba31ccdfcd6978a_427_updateDisplay,"ScrollSpeedOption","updateDisplay",0xc35cedba,"ScrollSpeedOption.updateDisplay","Options.hx",427,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_aba31ccdfcd6978a_430_right,"ScrollSpeedOption","right",0x1c65815d,"ScrollSpeedOption.right","Options.hx",430,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_aba31ccdfcd6978a_442_getValue,"ScrollSpeedOption","getValue",0x2069c01a,"ScrollSpeedOption.getValue","Options.hx",442,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_aba31ccdfcd6978a_445_left,"ScrollSpeedOption","left",0xa1757da6,"ScrollSpeedOption.left","Options.hx",445,0x9d9a0240)

void ScrollSpeedOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_aba31ccdfcd6978a_414_new)
HXLINE( 415)		super::__construct();
HXLINE( 416)		this->description = desc;
HXLINE( 417)		this->acceptValues = true;
            	}

Dynamic ScrollSpeedOption_obj::__CreateEmpty() { return new ScrollSpeedOption_obj; }

void *ScrollSpeedOption_obj::_hx_vtable = 0;

Dynamic ScrollSpeedOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollSpeedOption_obj > _hx_result = new ScrollSpeedOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollSpeedOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08bb846f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08bb846f;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool ScrollSpeedOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_aba31ccdfcd6978a_422_press)
HXDLIN( 422)		return false;
            	}


::String ScrollSpeedOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_aba31ccdfcd6978a_427_updateDisplay)
HXDLIN( 427)		return HX_("Scroll Speed",34,bf,42,cb);
            	}


bool ScrollSpeedOption_obj::right(){
            	HX_STACKFRAME(&_hx_pos_aba31ccdfcd6978a_430_right)
HXLINE( 431)		 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 431)		fh->__SetField(HX_("scrollSpeed",3a,e0,46,cb),(fh->__Field(HX_("scrollSpeed",3a,e0,46,cb),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
HXLINE( 433)		if (::hx::IsLess( ::flixel::FlxG_obj::save->data->__Field(HX_("scrollSpeed",3a,e0,46,cb),::hx::paccDynamic),1 )) {
HXLINE( 434)			::flixel::FlxG_obj::save->data->__SetField(HX_("scrollSpeed",3a,e0,46,cb),1,::hx::paccDynamic);
            		}
HXLINE( 436)		if (::hx::IsGreater( ::flixel::FlxG_obj::save->data->__Field(HX_("scrollSpeed",3a,e0,46,cb),::hx::paccDynamic),4 )) {
HXLINE( 437)			::flixel::FlxG_obj::save->data->__SetField(HX_("scrollSpeed",3a,e0,46,cb),4,::hx::paccDynamic);
            		}
HXLINE( 438)		return true;
            	}


::String ScrollSpeedOption_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_aba31ccdfcd6978a_442_getValue)
HXDLIN( 442)		return (HX_("Current Scroll Speed: ",01,df,c7,04) + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("scrollSpeed",3a,e0,46,cb),::hx::paccDynamic)) ),1));
            	}


bool ScrollSpeedOption_obj::left(){
            	HX_STACKFRAME(&_hx_pos_aba31ccdfcd6978a_445_left)
HXLINE( 446)		 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 446)		fh->__SetField(HX_("scrollSpeed",3a,e0,46,cb),( ::Dynamic(fh->__Field(HX_("scrollSpeed",3a,e0,46,cb),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
HXLINE( 448)		if (::hx::IsLess( ::flixel::FlxG_obj::save->data->__Field(HX_("scrollSpeed",3a,e0,46,cb),::hx::paccDynamic),1 )) {
HXLINE( 449)			::flixel::FlxG_obj::save->data->__SetField(HX_("scrollSpeed",3a,e0,46,cb),1,::hx::paccDynamic);
            		}
HXLINE( 451)		if (::hx::IsGreater( ::flixel::FlxG_obj::save->data->__Field(HX_("scrollSpeed",3a,e0,46,cb),::hx::paccDynamic),4 )) {
HXLINE( 452)			::flixel::FlxG_obj::save->data->__SetField(HX_("scrollSpeed",3a,e0,46,cb),4,::hx::paccDynamic);
            		}
HXLINE( 454)		return true;
            	}



::hx::ObjectPtr< ScrollSpeedOption_obj > ScrollSpeedOption_obj::__new(::String desc) {
	::hx::ObjectPtr< ScrollSpeedOption_obj > __this = new ScrollSpeedOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< ScrollSpeedOption_obj > ScrollSpeedOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	ScrollSpeedOption_obj *__this = (ScrollSpeedOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollSpeedOption_obj), true, "ScrollSpeedOption"));
	*(void **)__this = ScrollSpeedOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

ScrollSpeedOption_obj::ScrollSpeedOption_obj()
{
}

::hx::Val ScrollSpeedOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ScrollSpeedOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ScrollSpeedOption_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollSpeedOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	HX_("right",dc,0b,64,e9),
	HX_("getValue",fb,8e,8f,91),
	HX_("left",07,08,b0,47),
	::String(null()) };

::hx::Class ScrollSpeedOption_obj::__mClass;

void ScrollSpeedOption_obj::__register()
{
	ScrollSpeedOption_obj _hx_dummy;
	ScrollSpeedOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ScrollSpeedOption",2f,cf,20,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollSpeedOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollSpeedOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollSpeedOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollSpeedOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

