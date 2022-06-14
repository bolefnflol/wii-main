#ifndef INCLUDED_WiiShopChannel
#define INCLUDED_WiiShopChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(WiiShopChannel)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES WiiShopChannel_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef WiiShopChannel_obj OBJ_;
		WiiShopChannel_obj();

	public:
		enum { _hx_ClassId = 0x114377a2 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="WiiShopChannel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"WiiShopChannel"); }
		static ::hx::ObjectPtr< WiiShopChannel_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< WiiShopChannel_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WiiShopChannel_obj();

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
		::String __ToString() const { return HX_("WiiShopChannel",b6,db,9d,b9); }

		static void __boot();
		static int wiiPoints;
		static  ::flixel::_hx_system::FlxSound pressSound;
		static  ::flixel::_hx_system::FlxSound backSound;
		static bool promoCodeConsole;
		static bool promoCodebolefnf;
		static bool promoCodeitswariotime;
		static bool promoCodetypethisone;
		static bool promoCodewahoo;
		static bool promoCodeplayer;
		static bool promoCodeA;
		static  ::flixel::FlxSprite wiiCursor;
		 ::flixel::FlxSprite bg;
		 ::flixel::FlxSprite selection;
		 ::flixel::FlxSprite bottomSelection;
		 ::flixel::FlxSprite songsOverlapsprite;
		 ::flixel::FlxSprite charactersOverlapsprite;
		 ::flixel::FlxSprite menuOverlapsprite;
		 ::flixel::FlxSprite guideOverlapsprite;
		 ::flixel::FlxSprite songsSelectionsprite;
		 ::flixel::FlxSprite charactersSelectionsprite;
		 ::flixel::FlxSprite menuSelectionsprite;
		 ::flixel::FlxSprite guideSelectionsprite;
		 ::flixel::text::FlxText wiipointsText;
		 ::flixel::FlxSprite blackScreen;
		 ::flixel::FlxSprite promoCodes;
		 ::flixel::FlxSprite powerUps;
		 ::flixel::addons::ui::FlxInputText passwordText;
		 ::flixel::text::FlxText enterText;
		 ::flixel::FlxSprite blackBox;
		bool shakeCam;
		bool shakeCam2;
		bool isEnteringPassWord;
		bool wrongPass;
		void create();

		void update(Float elapsed);

		void bottomOnlyFade();
		::Dynamic bottomOnlyFade_dyn();

		void selectionOnlyFade();
		::Dynamic selectionOnlyFade_dyn();

		void updateWiiPointsText();
		::Dynamic updateWiiPointsText_dyn();

		void promoCodeValid(int amount, ::Dynamic includeGoodSprite, ::Dynamic includeBadSprite, ::Dynamic includeEpicSprite);
		::Dynamic promoCodeValid_dyn();

		void isUsedPromoCode();
		::Dynamic isUsedPromoCode_dyn();

		int getWiiPoints();
		::Dynamic getWiiPoints_dyn();

		void savePoints(int wiiPoints);
		::Dynamic savePoints_dyn();

};


#endif /* INCLUDED_WiiShopChannel */ 
