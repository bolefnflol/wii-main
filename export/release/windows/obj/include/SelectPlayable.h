#ifndef INCLUDED_SelectPlayable
#define INCLUDED_SelectPlayable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS0(SelectPlayable)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES SelectPlayable_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef SelectPlayable_obj OBJ_;
		SelectPlayable_obj();

	public:
		enum { _hx_ClassId = 0x2b15ef8a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SelectPlayable")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SelectPlayable"); }
		static ::hx::ObjectPtr< SelectPlayable_obj > __new();
		static ::hx::ObjectPtr< SelectPlayable_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SelectPlayable_obj();

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
		::String __ToString() const { return HX_("SelectPlayable",ca,6c,2a,49); }

		static void __boot();
		static ::String _hx_char;
		static bool bfMarioHatSelected;
		static bool picoLuigiHatSelected;
		static bool spookyHatsSelected;
		static bool eduardoSelected;
		 ::flixel::FlxSprite bg;
		 ::flixel::FlxSprite bgActual;
		 ::flixel::FlxSprite title;
		 ::flixel::FlxSprite bf;
		 ::flixel::FlxSprite pico;
		 ::flixel::FlxSprite spooky;
		 ::flixel::FlxSprite eduardo;
		Float alpha;
		Float alpha2;
		 ::flixel::FlxSprite continueButton;
		bool curSelected;
		void create();

		void update(Float elapsed);

};


#endif /* INCLUDED_SelectPlayable */ 
