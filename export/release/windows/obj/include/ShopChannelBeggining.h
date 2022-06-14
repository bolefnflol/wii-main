#ifndef INCLUDED_ShopChannelBeggining
#define INCLUDED_ShopChannelBeggining

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(ShopChannelBeggining)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES ShopChannelBeggining_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef ShopChannelBeggining_obj OBJ_;
		ShopChannelBeggining_obj();

	public:
		enum { _hx_ClassId = 0x7547c34d };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ShopChannelBeggining")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ShopChannelBeggining"); }
		static ::hx::ObjectPtr< ShopChannelBeggining_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< ShopChannelBeggining_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShopChannelBeggining_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShopChannelBeggining",8d,b0,b5,ba); }

		 ::flixel::FlxSprite shop;
		 ::flixel::FlxSprite bottom;
		 ::flixel::FlxSprite bottomOptions;
		 ::flixel::FlxSprite hover1;
		 ::flixel::FlxSprite hover2;
		 ::flixel::FlxSprite wiimenubigger;
		 ::flixel::FlxSprite startbigger;
		 ::flixel::_hx_system::FlxSound pressSound;
		void create();

		void update(Float elapsed);

};


#endif /* INCLUDED_ShopChannelBeggining */ 
