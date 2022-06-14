#ifndef INCLUDED_GFPage
#define INCLUDED_GFPage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(GFPage)
HX_DECLARE_CLASS0(MusicBeatState)
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



class HXCPP_CLASS_ATTRIBUTES GFPage_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef GFPage_obj OBJ_;
		GFPage_obj();

	public:
		enum { _hx_ClassId = 0x47d902ce };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GFPage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GFPage"); }
		static ::hx::ObjectPtr< GFPage_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< GFPage_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GFPage_obj();

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
		::String __ToString() const { return HX_("GFPage",0e,40,8e,e6); }

		static void __boot();
		static bool boughtgfCrown;
		static bool checkIfBought();
		static ::Dynamic checkIfBought_dyn();

		 ::flixel::FlxSprite bg;
		 ::flixel::FlxSprite buyNow;
		 ::flixel::FlxSprite owned;
		 ::flixel::FlxSprite gfCrownPage;
		 ::flixel::text::FlxText bought;
		 ::flixel::text::FlxText notEnough;
		 ::flixel::text::FlxText alreadyBought;
		 ::flixel::FlxSprite blackScreen;
		int gfCrownAmount;
		 ::flixel::text::FlxText notEnoughText;
		void create();

		void Bought();
		::Dynamic Bought_dyn();

		void notEnoughFunction();
		::Dynamic notEnoughFunction_dyn();

		void alreadyBoughtFunction();
		::Dynamic alreadyBoughtFunction_dyn();

		void update(Float elapsed);

		void save();
		::Dynamic save_dyn();

};


#endif /* INCLUDED_GFPage */ 
