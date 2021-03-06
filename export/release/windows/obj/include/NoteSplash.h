#ifndef INCLUDED_NoteSplash
#define INCLUDED_NoteSplash

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(NoteSplash)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES NoteSplash_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef NoteSplash_obj OBJ_;
		NoteSplash_obj();

	public:
		enum { _hx_ClassId = 0x6c20b5d9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="NoteSplash")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"NoteSplash"); }
		static ::hx::ObjectPtr< NoteSplash_obj > __new();
		static ::hx::ObjectPtr< NoteSplash_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NoteSplash_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NoteSplash",19,93,5d,54); }

		void setupNoteSplash(Float xPos,Float yPos,int note);
		::Dynamic setupNoteSplash_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_NoteSplash */ 
