#ifndef INCLUDED_PowerUps
#define INCLUDED_PowerUps

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(PowerUps)
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
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PowerUps_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef PowerUps_obj OBJ_;
		PowerUps_obj();

	public:
		enum { _hx_ClassId = 0x4aaed593 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PowerUps")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PowerUps"); }
		static ::hx::ObjectPtr< PowerUps_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< PowerUps_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PowerUps_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PowerUps",d3,e2,1d,ef); }

		static void __boot();
		static int healthGainers;
		static int healthGainerAmount;
		 ::flixel::FlxSprite actualBg;
		 ::flixel::FlxSprite bg;
		 ::flixel::text::FlxText healthGainersText;
		Float healthGainersSine;
		 ::flixel::FlxSprite buy;
		 ::flixel::FlxSprite plus;
		 ::flixel::FlxSprite healthgainer;
		void create();

		void update(Float elapsed);

		void buying( ::Dynamic enough, ::Dynamic notenough);
		::Dynamic buying_dyn();

		void sell( ::Dynamic isPossible);
		::Dynamic sell_dyn();

		void sellAll();
		::Dynamic sellAll_dyn();

		void refreshText();
		::Dynamic refreshText_dyn();

		int getGainers();
		::Dynamic getGainers_dyn();

		void saveGainers(int healthGainers);
		::Dynamic saveGainers_dyn();

};


#endif /* INCLUDED_PowerUps */ 
