#ifndef INCLUDED_SpookyPage
#define INCLUDED_SpookyPage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(SpookyPage)
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



class HXCPP_CLASS_ATTRIBUTES SpookyPage_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef SpookyPage_obj OBJ_;
		SpookyPage_obj();

	public:
		enum { _hx_ClassId = 0x370abcba };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SpookyPage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SpookyPage"); }
		static ::hx::ObjectPtr< SpookyPage_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< SpookyPage_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SpookyPage_obj();

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
		::String __ToString() const { return HX_("SpookyPage",fa,99,47,1f); }

		static void __boot();
		static bool boughtSPOOKYHats;
		static bool checkIfBought();
		static ::Dynamic checkIfBought_dyn();

		 ::flixel::FlxSprite bg;
		 ::flixel::FlxSprite buyNow;
		 ::flixel::FlxSprite owned;
		 ::flixel::FlxSprite spookyPage;
		 ::flixel::text::FlxText bought;
		 ::flixel::text::FlxText notEnough;
		 ::flixel::FlxSprite blackScreen;
		int spookyHatsAmount;
		 ::flixel::text::FlxText alreadyBought;
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


#endif /* INCLUDED_SpookyPage */ 
