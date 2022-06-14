#include <hxcpp.h>

#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_13_new,"HealthIcon","new",0x9b7badc7,"HealthIcon.new","HealthIcon.hx",13,0xf7836789)
static const int _hx_array_data_f8f9be55_2[] = {
	(int)0,
};
static const int _hx_array_data_f8f9be55_3[] = {
	(int)1,
};
static const int _hx_array_data_f8f9be55_4[] = {
	(int)2,
};
static const int _hx_array_data_f8f9be55_5[] = {
	(int)0,
};
static const int _hx_array_data_f8f9be55_6[] = {
	(int)1,
};
static const int _hx_array_data_f8f9be55_7[] = {
	(int)2,
};
static const int _hx_array_data_f8f9be55_8[] = {
	(int)0,
};
static const int _hx_array_data_f8f9be55_9[] = {
	(int)1,
};
static const int _hx_array_data_f8f9be55_10[] = {
	(int)2,
};
static const int _hx_array_data_f8f9be55_11[] = {
	(int)0,
};
static const int _hx_array_data_f8f9be55_12[] = {
	(int)1,
};
static const int _hx_array_data_f8f9be55_13[] = {
	(int)2,
};
static const int _hx_array_data_f8f9be55_14[] = {
	(int)0,
};
static const int _hx_array_data_f8f9be55_15[] = {
	(int)1,
};
static const int _hx_array_data_f8f9be55_16[] = {
	(int)2,
};
static const int _hx_array_data_f8f9be55_17[] = {
	(int)0,
};
static const int _hx_array_data_f8f9be55_18[] = {
	(int)1,
};
static const int _hx_array_data_f8f9be55_19[] = {
	(int)2,
};
static const int _hx_array_data_f8f9be55_20[] = {
	(int)0,
};
static const int _hx_array_data_f8f9be55_21[] = {
	(int)1,
};
static const int _hx_array_data_f8f9be55_22[] = {
	(int)2,
};
static const int _hx_array_data_f8f9be55_23[] = {
	(int)0,
};
static const int _hx_array_data_f8f9be55_24[] = {
	(int)1,
};
static const int _hx_array_data_f8f9be55_25[] = {
	(int)2,
};
static const int _hx_array_data_f8f9be55_26[] = {
	(int)0,
};
static const int _hx_array_data_f8f9be55_27[] = {
	(int)1,
};
static const int _hx_array_data_f8f9be55_28[] = {
	(int)2,
};
static const int _hx_array_data_f8f9be55_29[] = {
	(int)0,
};
static const int _hx_array_data_f8f9be55_30[] = {
	(int)1,
};
static const int _hx_array_data_f8f9be55_31[] = {
	(int)2,
};
static const int _hx_array_data_f8f9be55_32[] = {
	(int)0,
};
static const int _hx_array_data_f8f9be55_33[] = {
	(int)1,
};
static const int _hx_array_data_f8f9be55_34[] = {
	(int)2,
};
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_98_update,"HealthIcon","update",0x767ac302,"HealthIcon.update","HealthIcon.hx",98,0xf7836789)

void HealthIcon_obj::__construct(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            		bool isPlayer = __o_isPlayer.Default(false);
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_13_new)
HXLINE(  14)		super::__construct(null(),null(),null());
HXLINE(  16)		::String _hx_switch_0 = _hx_char;
            		if (  (_hx_switch_0==HX_("3-0",56,da,26,00)) ){
HXLINE(  85)			this->set_antialiasing(true);
HXLINE(  86)			::String library = null();
HXDLIN(  86)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/3-",74,ab,93,af)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  87)			this->animation->add(HX_("alive",cd,63,91,21),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_2,1),0,false,isPlayer,null());
HXLINE(  88)			this->animation->add(HX_("dead",a4,4e,66,42),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_3,1),0,false,isPlayer,null());
HXLINE(  89)			this->animation->add(HX_("inLead",21,e2,15,84),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_4,1),0,false,isPlayer,null());
HXLINE(  84)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE(  19)			this->set_antialiasing(true);
HXLINE(  20)			::String library = null();
HXDLIN(  20)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/boyfrenddd",9d,ff,91,20)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  21)			this->animation->add(HX_("alive",cd,63,91,21),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_5,1),0,false,isPlayer,null());
HXLINE(  22)			this->animation->add(HX_("dead",a4,4e,66,42),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_6,1),0,false,isPlayer,null());
HXLINE(  23)			this->animation->add(HX_("inLead",21,e2,15,84),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_7,1),0,false,isPlayer,null());
HXLINE(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bfMarioHat",9b,bd,d7,f1)) ){
HXLINE(  31)			this->set_antialiasing(true);
HXLINE(  32)			::String library = null();
HXDLIN(  32)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/mario hat bf",5f,93,c9,ef)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  33)			this->animation->add(HX_("alive",cd,63,91,21),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_8,1),0,false,isPlayer,null());
HXLINE(  34)			this->animation->add(HX_("dead",a4,4e,66,42),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_9,1),0,false,isPlayer,null());
HXLINE(  35)			this->animation->add(HX_("inLead",21,e2,15,84),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_10,1),0,false,isPlayer,null());
HXLINE(  30)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("eduardo",f2,58,fe,01)) ){
HXLINE(  61)			this->set_antialiasing(true);
HXLINE(  62)			::String library = null();
HXDLIN(  62)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/wellwellwell",84,62,b5,6b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  63)			this->animation->add(HX_("alive",cd,63,91,21),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_11,1),0,false,isPlayer,null());
HXLINE(  64)			this->animation->add(HX_("dead",a4,4e,66,42),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_12,1),0,false,isPlayer,null());
HXLINE(  65)			this->animation->add(HX_("inLead",21,e2,15,84),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_13,1),0,false,isPlayer,null());
HXLINE(  60)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE(  37)			this->set_antialiasing(true);
HXLINE(  38)			::String library = null();
HXDLIN(  38)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/urMom",d4,c5,be,90)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  39)			this->animation->add(HX_("alive",cd,63,91,21),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_14,1),0,false,isPlayer,null());
HXLINE(  40)			this->animation->add(HX_("dead",a4,4e,66,42),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_15,1),0,false,isPlayer,null());
HXLINE(  41)			this->animation->add(HX_("inLead",21,e2,15,84),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_16,1),0,false,isPlayer,null());
HXLINE(  36)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gfCrown",58,68,11,63)) ){
HXLINE(  79)			this->set_antialiasing(true);
HXLINE(  80)			::String library = null();
HXDLIN(  80)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/gfCrown",3e,d3,e1,7f)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  81)			this->animation->add(HX_("alive",cd,63,91,21),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_17,1),0,false,isPlayer,null());
HXLINE(  82)			this->animation->add(HX_("dead",a4,4e,66,42),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_18,1),0,false,isPlayer,null());
HXLINE(  83)			this->animation->add(HX_("inLead",21,e2,15,84),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_19,1),0,false,isPlayer,null());
HXLINE(  78)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("matt",d4,41,56,48)) ){
HXLINE(  43)			this->set_antialiasing(true);
HXLINE(  44)			::String library = null();
HXDLIN(  44)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/matt",2e,ab,ea,a2)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  45)			this->animation->add(HX_("alive",cd,63,91,21),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_20,1),0,false,isPlayer,null());
HXLINE(  46)			this->animation->add(HX_("dead",a4,4e,66,42),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_21,1),0,false,isPlayer,null());
HXLINE(  47)			this->animation->add(HX_("inLead",21,e2,15,84),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_22,1),0,false,isPlayer,null());
HXLINE(  42)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mickey",78,e6,ba,4b)) ){
HXLINE(  55)			this->set_antialiasing(true);
HXLINE(  56)			::String library = null();
HXDLIN(  56)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/mickey",52,da,3f,c3)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  57)			this->animation->add(HX_("alive",cd,63,91,21),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_23,1),0,false,isPlayer,null());
HXLINE(  58)			this->animation->add(HX_("dead",a4,4e,66,42),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_24,1),0,false,isPlayer,null());
HXLINE(  59)			this->animation->add(HX_("inLead",21,e2,15,84),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_25,1),0,false,isPlayer,null());
HXLINE(  54)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("oswald",26,20,a4,e7)) ){
HXLINE(  49)			this->set_antialiasing(true);
HXLINE(  50)			::String library = null();
HXDLIN(  50)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/oswald",00,14,29,5f)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  51)			this->animation->add(HX_("alive",cd,63,91,21),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_26,1),0,false,isPlayer,null());
HXLINE(  52)			this->animation->add(HX_("dead",a4,4e,66,42),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_27,1),0,false,isPlayer,null());
HXLINE(  53)			this->animation->add(HX_("inLead",21,e2,15,84),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_28,1),0,false,isPlayer,null());
HXLINE(  48)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("picoLuigiHat",9e,fe,18,fe)) ){
HXLINE(  73)			this->set_antialiasing(true);
HXLINE(  74)			::String library = null();
HXDLIN(  74)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/pico luigi hat",fc,82,d1,6b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  75)			this->animation->add(HX_("alive",cd,63,91,21),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_29,1),0,false,isPlayer,null());
HXLINE(  76)			this->animation->add(HX_("dead",a4,4e,66,42),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_30,1),0,false,isPlayer,null());
HXLINE(  77)			this->animation->add(HX_("inLead",21,e2,15,84),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_31,1),0,false,isPlayer,null());
HXLINE(  72)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("spookyWaluigiWarioHat",fa,52,e8,49)) ){
HXLINE(  67)			this->set_antialiasing(true);
HXLINE(  68)			::String library = null();
HXDLIN(  68)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/spookyHats",1d,d5,21,91)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  69)			this->animation->add(HX_("alive",cd,63,91,21),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_32,1),0,false,isPlayer,null());
HXLINE(  70)			this->animation->add(HX_("dead",a4,4e,66,42),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_33,1),0,false,isPlayer,null());
HXLINE(  71)			this->animation->add(HX_("inLead",21,e2,15,84),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_34,1),0,false,isPlayer,null());
HXLINE(  66)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("wii",17,a8,5a,00)) ){
HXLINE(  25)			this->set_antialiasing(true);
HXLINE(  26)			::String library = null();
HXDLIN(  26)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/wii_what",06,82,cf,bb)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  26)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("healthIcon/wii_what",06,82,cf,bb)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  27)			this->animation->addByPrefix(HX_("alive",cd,63,91,21),HX_("wii alive instance 1",82,c6,40,60),24,true,null(),null());
HXLINE(  28)			this->animation->addByPrefix(HX_("dead",a4,4e,66,42),HX_("wii dead instance 1",d9,c8,5f,25),24,true,null(),null());
HXLINE(  29)			this->animation->addByPrefix(HX_("inLead",21,e2,15,84),HX_("wii lead instance 1",e1,c6,3c,cd),24,true,null(),null());
HXLINE(  24)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  92)		this->animation->play(HX_("alive",cd,63,91,21),null(),null(),null());
HXLINE(  94)		this->scrollFactor->set(null(),null());
            	}

Dynamic HealthIcon_obj::__CreateEmpty() { return new HealthIcon_obj; }

void *HealthIcon_obj::_hx_vtable = 0;

Dynamic HealthIcon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthIcon_obj > _hx_result = new HealthIcon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HealthIcon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x10bce115) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x10bce115;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HealthIcon_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_98_update)
HXLINE(  99)		this->super::update(elapsed);
HXLINE( 101)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE( 102)			Float _hx_tmp = this->sprTracker->x;
HXDLIN( 102)			Float _hx_tmp1 = ((_hx_tmp + this->sprTracker->get_width()) + 10);
HXDLIN( 102)			this->setPosition(_hx_tmp1,(this->sprTracker->y - ( (Float)(30) )));
            		}
            	}



::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__new(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer) {
	::hx::ObjectPtr< HealthIcon_obj > __this = new HealthIcon_obj();
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__hx_char,::hx::Null< bool >  __o_isPlayer) {
	HealthIcon_obj *__this = (HealthIcon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthIcon_obj), true, "HealthIcon"));
	*(void **)__this = HealthIcon_obj::_hx_vtable;
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

HealthIcon_obj::HealthIcon_obj()
{
}

void HealthIcon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HealthIcon);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HealthIcon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HealthIcon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HealthIcon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HealthIcon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HealthIcon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthIcon_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HealthIcon_obj_sStaticStorageInfo = 0;
#endif

static ::String HealthIcon_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class HealthIcon_obj::__mClass;

void HealthIcon_obj::__register()
{
	HealthIcon_obj _hx_dummy;
	HealthIcon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HealthIcon",55,be,f9,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HealthIcon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthIcon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthIcon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

