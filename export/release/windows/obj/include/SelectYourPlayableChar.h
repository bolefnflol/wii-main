#ifndef INCLUDED_SelectYourPlayableChar
#define INCLUDED_SelectYourPlayableChar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(SelectYourPlayableChar)
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



class HXCPP_CLASS_ATTRIBUTES SelectYourPlayableChar_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef SelectYourPlayableChar_obj OBJ_;
		SelectYourPlayableChar_obj();

	public:
		enum { _hx_ClassId = 0x6f91c037 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SelectYourPlayableChar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SelectYourPlayableChar"); }
		static ::hx::ObjectPtr< SelectYourPlayableChar_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< SelectYourPlayableChar_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SelectYourPlayableChar_obj();

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
		::String __ToString() const { return HX_("SelectYourPlayableChar",13,71,72,d7); }

		static void __boot();
		static bool displayBf;
		static bool displayPico;
		static bool displaySpooky;
		static bool displayEduardo;
		static bool displayGf;
		static bool saveDisplayBf;
		static bool saveDisplayPico;
		static bool saveDisplaySpooky;
		static bool saveDisplayEduardo;
		static bool saveDisplayGf;
		static bool mark1Selected;
		static bool mark2Selected;
		static bool mark3Selected;
		static bool mark4Selected;
		static bool mark5Selected;
		static int charactersInt;
		static bool checkIfBFExsits();
		static ::Dynamic checkIfBFExsits_dyn();

		static bool checkIPicoFExsits();
		static ::Dynamic checkIPicoFExsits_dyn();

		static bool checkISpookyFExsits();
		static ::Dynamic checkISpookyFExsits_dyn();

		static bool checkIEduardoFExsits();
		static ::Dynamic checkIEduardoFExsits_dyn();

		static bool checkIGFExsits();
		static ::Dynamic checkIGFExsits_dyn();

		 ::flixel::FlxSprite bg;
		 ::flixel::FlxSprite bf;
		 ::flixel::FlxSprite pico;
		 ::flixel::FlxSprite spooky;
		 ::flixel::FlxSprite eduardo;
		 ::flixel::FlxSprite gf;
		 ::flixel::FlxSprite mark1;
		 ::flixel::FlxSprite mark2;
		 ::flixel::FlxSprite mark3;
		 ::flixel::FlxSprite mark4;
		 ::flixel::FlxSprite mark5;
		 ::flixel::text::FlxText text;
		 ::flixel::text::FlxText text2;
		 ::flixel::FlxSprite wiiCursor;
		void create();

		void update(Float elapsed);

		void check();
		::Dynamic check_dyn();

		void saveBF();
		::Dynamic saveBF_dyn();

		void savePico();
		::Dynamic savePico_dyn();

		void saveSpooky();
		::Dynamic saveSpooky_dyn();

		void saveEduardo();
		::Dynamic saveEduardo_dyn();

		void saveGF();
		::Dynamic saveGF_dyn();

		void offsetShit( ::flixel::FlxObject object);
		::Dynamic offsetShit_dyn();

};


#endif /* INCLUDED_SelectYourPlayableChar */ 
