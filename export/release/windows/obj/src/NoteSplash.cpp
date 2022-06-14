#include <hxcpp.h>

#ifndef INCLUDED_NoteSplash
#include <NoteSplash.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fc43ca8ee61f3046_48_new,"NoteSplash","new",0xb1e3348b,"NoteSplash.new","NoteSplash.hx",48,0x3ec9e545)
HX_LOCAL_STACK_FRAME(_hx_pos_fc43ca8ee61f3046_64_setupNoteSplash,"NoteSplash","setupNoteSplash",0x4d379881,"NoteSplash.setupNoteSplash","NoteSplash.hx",64,0x3ec9e545)
HX_LOCAL_STACK_FRAME(_hx_pos_fc43ca8ee61f3046_80_update,"NoteSplash","update",0x2e98cebe,"NoteSplash.update","NoteSplash.hx",80,0x3ec9e545)

void NoteSplash_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fc43ca8ee61f3046_48_new)
HXLINE(  49)		super::__construct(null(),null(),null());
HXLINE(  50)		::String library = null();
HXDLIN(  50)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("notes/splashes/noteSplashes",13,84,38,8e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  50)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("notes/splashes/noteSplashes",13,84,38,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  52)		this->animation->addByPrefix(HX_("note1-0",22,41,39,4d),HX_("note impact 1  blue",9f,28,67,5c),24,false,null(),null());
HXLINE(  53)		this->animation->addByPrefix(HX_("note2-0",63,03,3a,4d),HX_("note impact 1 green",a8,64,68,48),24,false,null(),null());
HXLINE(  54)		this->animation->addByPrefix(HX_("note0-0",e1,7e,38,4d),HX_("note impact 1 purple",b7,c8,f9,6e),24,false,null(),null());
HXLINE(  55)		this->animation->addByPrefix(HX_("note3-0",a4,c5,3a,4d),HX_("note impact 1 red",f6,7b,28,9d),24,false,null(),null());
HXLINE(  57)		this->animation->addByPrefix(HX_("note1-1",23,41,39,4d),HX_("note impact 2 blue",b4,4c,11,42),24,false,null(),null());
HXLINE(  58)		this->animation->addByPrefix(HX_("note2-1",64,03,3a,4d),HX_("note impact 2 green",69,db,fd,71),24,false,null(),null());
HXLINE(  59)		this->animation->addByPrefix(HX_("note0-1",e2,7e,38,4d),HX_("note impact 2 purple",d6,3a,2c,a8),24,false,null(),null());
HXLINE(  60)		this->animation->addByPrefix(HX_("note3-1",a5,c5,3a,4d),HX_("note impact 2 red",77,10,8f,30),24,false,null(),null());
            	}

Dynamic NoteSplash_obj::__CreateEmpty() { return new NoteSplash_obj; }

void *NoteSplash_obj::_hx_vtable = 0;

Dynamic NoteSplash_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NoteSplash_obj > _hx_result = new NoteSplash_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NoteSplash_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6c20b5d9) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x6c20b5d9;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void NoteSplash_obj::setupNoteSplash(Float xPos,Float yPos,int note){
            	HX_STACKFRAME(&_hx_pos_fc43ca8ee61f3046_64_setupNoteSplash)
HXLINE(  65)		if ((note == 0)) {
HXLINE(  67)			note = 0;
            		}
HXLINE(  69)		this->set_x(xPos);
HXLINE(  70)		this->set_y(yPos);
HXLINE(  71)		this->set_alpha(((Float)0.6));
HXLINE(  72)		 ::flixel::animation::FlxAnimationController _hx_tmp = this->animation;
HXDLIN(  72)		_hx_tmp->play((((HX_("note",f2,17,0a,49) + note) + HX_("-",2d,00,00,00)) + ::flixel::FlxG_obj::random->_hx_int(0,1,null())),true,null(),null());
HXLINE(  73)		 ::flixel::animation::FlxAnimation a = this->animation->_curAnim;
HXLINE(  74)		Float a1 = a->frameRate;
HXDLIN(  74)		a->set_frameRate((a1 + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
HXLINE(  75)		this->updateHitbox();
HXLINE(  76)		 ::flixel::math::FlxPoint _hx_tmp1 = this->offset;
HXDLIN(  76)		Float _hx_tmp2 = (((Float)0.3) * this->get_width());
HXDLIN(  76)		_hx_tmp1->set(_hx_tmp2,(((Float)0.3) * this->get_height()));
            	}


HX_DEFINE_DYNAMIC_FUNC3(NoteSplash_obj,setupNoteSplash,(void))

void NoteSplash_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_fc43ca8ee61f3046_80_update)
HXLINE(  82)		if ((this->animation->_curAnim->finished == true)) {
HXLINE(  84)			this->kill();
            		}
HXLINE(  86)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< NoteSplash_obj > NoteSplash_obj::__new() {
	::hx::ObjectPtr< NoteSplash_obj > __this = new NoteSplash_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NoteSplash_obj > NoteSplash_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NoteSplash_obj *__this = (NoteSplash_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NoteSplash_obj), true, "NoteSplash"));
	*(void **)__this = NoteSplash_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NoteSplash_obj::NoteSplash_obj()
{
}

::hx::Val NoteSplash_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setupNoteSplash") ) { return ::hx::Val( setupNoteSplash_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NoteSplash_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NoteSplash_obj_sStaticStorageInfo = 0;
#endif

static ::String NoteSplash_obj_sMemberFields[] = {
	HX_("setupNoteSplash",d6,1f,cd,18),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class NoteSplash_obj::__mClass;

void NoteSplash_obj::__register()
{
	NoteSplash_obj _hx_dummy;
	NoteSplash_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("NoteSplash",19,93,5d,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NoteSplash_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NoteSplash_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NoteSplash_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NoteSplash_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

