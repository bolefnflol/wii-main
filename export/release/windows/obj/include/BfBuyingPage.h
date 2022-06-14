#ifndef INCLUDED_BfBuyingPage
#define INCLUDED_BfBuyingPage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(BfBuyingPage)
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



class HXCPP_CLASS_ATTRIBUTES BfBuyingPage_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef BfBuyingPage_obj OBJ_;
		BfBuyingPage_obj();

	public:
		enum { _hx_ClassId = 0x2acf2257 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="BfBuyingPage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"BfBuyingPage"); }
		static ::hx::ObjectPtr< BfBuyingPage_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< BfBuyingPage_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BfBuyingPage_obj();

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
		::String __ToString() const { return HX_("BfBuyingPage",cf,00,59,dd); }

		static void __boot();
		static  ::flixel::FlxSprite owned;
		static int bfHatAmount;
		static bool pointsIsEnough;
		static bool boughtBfWithMarioHat;
		static bool checkIfBought();
		static ::Dynamic checkIfBought_dyn();

		 ::flixel::FlxSprite bg;
		 ::flixel::FlxSprite buyNow;
		 ::flixel::FlxSprite bfPage;
		 ::flixel::FlxSprite blackScreen;
		 ::flixel::text::FlxText bought;
		 ::flixel::text::FlxText notEnough;
		 ::flixel::text::FlxText alreadyBought;
		 ::flixel::text::FlxText bfText;
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


#endif /* INCLUDED_BfBuyingPage */ 
