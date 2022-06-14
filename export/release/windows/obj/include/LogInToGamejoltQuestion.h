#ifndef INCLUDED_LogInToGamejoltQuestion
#define INCLUDED_LogInToGamejoltQuestion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(LogInToGamejoltQuestion)
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES LogInToGamejoltQuestion_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef LogInToGamejoltQuestion_obj OBJ_;
		LogInToGamejoltQuestion_obj();

	public:
		enum { _hx_ClassId = 0x446b7185 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="LogInToGamejoltQuestion")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"LogInToGamejoltQuestion"); }
		static ::hx::ObjectPtr< LogInToGamejoltQuestion_obj > __new();
		static ::hx::ObjectPtr< LogInToGamejoltQuestion_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LogInToGamejoltQuestion_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LogInToGamejoltQuestion",29,81,25,c1); }

		 ::flixel::FlxSprite bg;
		 ::flixel::FlxSprite sign;
		 ::flixel::FlxSprite ye;
		 ::flixel::FlxSprite noThx;
		void update(Float elapsed);

};


#endif /* INCLUDED_LogInToGamejoltQuestion */ 
