#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae240c01d039da8e_10_new,"Character","new",0x74bf54fb,"Character.new","Character.hx",10,0xf073a2d5)
static const int _hx_array_data_e3a4bb89_2[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_3[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_4[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_5[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const int _hx_array_data_e3a4bb89_6[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,
};
static const int _hx_array_data_e3a4bb89_7[] = {
	(int)0,(int)2,(int)6,
};
static const int _hx_array_data_e3a4bb89_8[] = {
	(int)8,(int)10,(int)12,(int)14,
};
static const int _hx_array_data_e3a4bb89_9[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,
};
static const int _hx_array_data_e3a4bb89_10[] = {
	(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,
};
static const int _hx_array_data_e3a4bb89_11[] = {
	(int)11,(int)10,(int)9,(int)8,(int)7,(int)6,(int)5,(int)4,(int)3,(int)2,(int)1,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_408_update,"Character","update",0x0e18944e,"Character.update","Character.hx",408,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_446_dance,"Character","dance",0xde4da48e,"Character.dance","Character.hx",446,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_478_playAnim,"Character","playAnim",0xed2bd3aa,"Character.playAnim","Character.hx",478,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_509_addOffset,"Character","addOffset",0x6dc9376f,"Character.addOffset","Character.hx",509,0xf073a2d5)

void Character_obj::__construct(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            		 ::Dynamic isPlayer = __o_isPlayer;
            		if (::hx::IsNull(__o_isPlayer)) isPlayer = false;
            	HX_GC_STACKFRAME(&_hx_pos_ae240c01d039da8e_10_new)
HXLINE( 442)		this->danced = false;
HXLINE(  19)		this->holdTimer = ((Float)0);
HXLINE(  17)		this->playerColor = HX_("31B0D1",39,90,9a,c6);
HXLINE(  16)		this->curCharacter = HX_("bf",c4,55,00,00);
HXLINE(  15)		this->isPlayer = false;
HXLINE(  13)		this->debugMode = false;
HXLINE(  23)		super::__construct(x,y,null());
HXLINE(  25)		this->animOffsets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  26)		this->curCharacter = character;
HXLINE(  27)		this->isPlayer = ( (bool)(isPlayer) );
HXLINE(  29)		 ::flixel::graphics::frames::FlxAtlasFrames tex;
HXLINE(  30)		this->set_antialiasing(true);
HXLINE(  32)		::String _hx_switch_0 = this->curCharacter;
            		if (  (_hx_switch_0==HX_("3-0",56,da,26,00)) ){
HXLINE( 369)			::String library = null();
HXDLIN( 369)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/freeplay/3-",c4,39,c4,af)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 369)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/freeplay/3-",c4,39,c4,af)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 370)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("idle",14,a7,b3,45),24,null(),null(),null());
HXLINE( 371)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("up",5b,66,00,00),24,null(),null(),null());
HXLINE( 372)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("right",dc,0b,64,e9),24,null(),null(),null());
HXLINE( 373)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("down",62,f8,6d,42),24,null(),null(),null());
HXLINE( 374)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("left",07,08,b0,47),24,null(),null(),null());
HXLINE( 375)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 376)			this->addOffset(HX_("singUP",6a,52,21,b9),14,88);
HXLINE( 377)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-16,12);
HXLINE( 378)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),71,7);
HXLINE( 379)			this->addOffset(HX_("singDOWN",31,2a,ad,36),112,-309);
HXLINE( 380)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 381)			this->playerColor = HX_("fcc09f",77,f9,a6,0a);
HXLINE( 368)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE(  67)			::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/BOYFRIEND",65,2c,9c,1b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d));
HXDLIN(  67)			 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/BOYFRIEND",65,2c,9c,1b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d)));
HXLINE(  68)			this->set_frames(tex1);
HXLINE(  69)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE(  70)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE(  71)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE(  72)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE(  73)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE(  74)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE(  75)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE(  76)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE(  77)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE(  78)			this->animation->addByPrefix(HX_("hey",dc,42,4f,00),HX_("BF HEY",60,1e,f8,c6),24,false,null(),null());
HXLINE(  79)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF dies",0f,cb,bf,64),24,false,null(),null());
HXLINE(  80)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("BF Dead Loop",04,f4,36,2f),24,true,null(),null());
HXLINE(  81)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("BF Dead confirm",80,6b,f9,23),24,false,null(),null());
HXLINE(  82)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("BF idle shaking",53,d0,da,8d),24,false,null(),null());
HXLINE(  83)			this->animation->addByPrefix(HX_("hit",53,46,4f,00),HX_("BF hit",f7,85,10,c7),24,false,null(),null());
HXLINE(  84)			this->animation->addByPrefix(HX_("preAttack",4b,0c,b1,3e),HX_("bf pre attack",01,2f,7e,b5),24,false,null(),null());
HXLINE(  85)			this->animation->addByPrefix(HX_("attack",c8,fb,0f,e0),HX_("boyfriend attack",be,0b,31,b6),24,false,null(),null());
HXLINE(  86)			this->animation->addByPrefix(HX_("dodge",d7,ec,bc,dd),HX_("boyfriend dodge",a1,8d,c8,91),24,false,null(),null());
HXLINE(  87)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE(  88)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE(  89)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-7);
HXLINE(  90)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),12,-6);
HXLINE(  91)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-50);
HXLINE(  92)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-29,27);
HXLINE(  93)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-30,21);
HXLINE(  94)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),12,24);
HXLINE(  95)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-11,-19);
HXLINE(  96)			this->addOffset(HX_("hey",dc,42,4f,00),7,4);
HXLINE(  97)			this->addOffset(HX_("firstDeath",e4,d8,fc,14),37,11);
HXLINE(  98)			this->addOffset(HX_("deathLoop",b8,0b,79,2e),37,5);
HXLINE(  99)			this->addOffset(HX_("deathConfirm",2c,44,2b,12),37,69);
HXLINE( 100)			this->addOffset(HX_("scared",20,78,2a,3c),-4,null());
HXLINE( 101)			this->addOffset(HX_("hit",53,46,4f,00),24,19);
HXLINE( 102)			this->addOffset(HX_("preAttack",4b,0c,b1,3e),-14,-40);
HXLINE( 103)			this->addOffset(HX_("attack",c8,fb,0f,e0),296,270);
HXLINE( 104)			this->addOffset(HX_("dodge",d7,ec,bc,dd),-4,1);
HXLINE( 105)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 106)			this->set_flipX(true);
HXLINE( 107)			this->playerColor = HX_("31b0d1",f9,7f,c1,db);
HXLINE(  66)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bfMarioHat",9b,bd,d7,f1)) ){
HXLINE( 130)			::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/wii_shop_chars/BoyFriend_Assets_WiiHat",dd,fd,e0,88)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d));
HXDLIN( 130)			 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/wii_shop_chars/BoyFriend_Assets_WiiHat",dd,fd,e0,88)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d)));
HXLINE( 131)			this->set_frames(tex1);
HXLINE( 132)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 133)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 134)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 135)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 136)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 137)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 138)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 139)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 140)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 141)			this->animation->addByPrefix(HX_("hey",dc,42,4f,00),HX_("BF HEY",60,1e,f8,c6),24,false,null(),null());
HXLINE( 142)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF dies",0f,cb,bf,64),24,false,null(),null());
HXLINE( 143)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("BF Dead Loop",04,f4,36,2f),24,true,null(),null());
HXLINE( 144)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("BF Dead confirm",80,6b,f9,23),24,false,null(),null());
HXLINE( 145)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("BF idle shaking",53,d0,da,8d),24,false,null(),null());
HXLINE( 146)			this->animation->addByPrefix(HX_("hit",53,46,4f,00),HX_("BF hit",f7,85,10,c7),24,false,null(),null());
HXLINE( 147)			this->animation->addByPrefix(HX_("preAttack",4b,0c,b1,3e),HX_("bf pre attack",01,2f,7e,b5),24,false,null(),null());
HXLINE( 148)			this->animation->addByPrefix(HX_("attack",c8,fb,0f,e0),HX_("boyfriend attack",be,0b,31,b6),24,false,null(),null());
HXLINE( 149)			this->animation->addByPrefix(HX_("dodge",d7,ec,bc,dd),HX_("boyfriend dodge",a1,8d,c8,91),24,false,null(),null());
HXLINE( 150)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE( 151)			this->addOffset(HX_("singUP",6a,52,21,b9),-41,76);
HXLINE( 152)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-7);
HXLINE( 153)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),6,10);
HXLINE( 154)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-5,-62);
HXLINE( 155)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-30,77);
HXLINE( 156)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-24,-18);
HXLINE( 157)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),7,19);
HXLINE( 158)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),244,-60);
HXLINE( 159)			this->addOffset(HX_("hey",dc,42,4f,00),17,15);
HXLINE( 160)			this->addOffset(HX_("firstDeath",e4,d8,fc,14),37,-110);
HXLINE( 161)			this->addOffset(HX_("deathLoop",b8,0b,79,2e),37,-116);
HXLINE( 162)			this->addOffset(HX_("deathConfirm",2c,44,2b,12),37,-52);
HXLINE( 163)			this->addOffset(HX_("scared",20,78,2a,3c),15,9);
HXLINE( 164)			this->addOffset(HX_("hit",53,46,4f,00),34,27);
HXLINE( 165)			this->addOffset(HX_("preAttack",4b,0c,b1,3e),-10,-150);
HXLINE( 166)			this->addOffset(HX_("attack",c8,fb,0f,e0),304,157);
HXLINE( 167)			this->addOffset(HX_("dodge",d7,ec,bc,dd),10,-126);
HXLINE( 168)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 169)			this->set_flipX(true);
HXLINE( 170)			this->playerColor = HX_("31b0d1",f9,7f,c1,db);
HXLINE( 129)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("eduardo",f2,58,fe,01)) ){
HXLINE( 172)			::String library = null();
HXDLIN( 172)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/wii_shop_chars/EduardoAssets",27,f4,02,d2)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 172)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/wii_shop_chars/EduardoAssets",27,f4,02,d2)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 173)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("EduardoIdle",06,25,c2,87),24,null(),null(),null());
HXLINE( 174)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("EduardoUp",cd,23,cf,e2),24,null(),null(),null());
HXLINE( 175)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("EduardoRight",aa,c1,03,74),24,null(),null(),null());
HXLINE( 176)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("EduardoLeft",f9,85,be,89),24,null(),null(),null());
HXLINE( 177)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("EduardoDown",54,76,7c,84),24,null(),null(),null());
HXLINE( 178)			this->animation->addByPrefix(HX_("well",0e,66,f5,4e),HX_("EduardoWell",00,e4,03,91),24,null(),null(),null());
HXLINE( 179)			if (( (bool)(isPlayer) )) {
HXLINE( 181)				this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 182)				this->addOffset(HX_("singUP",6a,52,21,b9),-26,18);
HXLINE( 183)				this->addOffset(HX_("singRIGHT",0d,6f,70,ac),10,-6);
HXLINE( 184)				this->addOffset(HX_("singLEFT",d6,39,ef,3b),-9,-7);
HXLINE( 185)				this->addOffset(HX_("singDOWN",31,2a,ad,36),18,-20);
HXLINE( 186)				this->addOffset(HX_("well",0e,66,f5,4e),null(),null());
HXLINE( 187)				this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            			else {
HXLINE( 191)				this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 192)				this->addOffset(HX_("singUP",6a,52,21,b9),-26,18);
HXLINE( 193)				this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-10,-7);
HXLINE( 194)				this->addOffset(HX_("singLEFT",d6,39,ef,3b),1,-7);
HXLINE( 195)				this->addOffset(HX_("singDOWN",31,2a,ad,36),18,-20);
HXLINE( 196)				this->addOffset(HX_("well",0e,66,f5,4e),null(),null());
HXLINE( 197)				this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
HXLINE( 199)			this->playerColor = HX_("106e2a",7d,db,b6,5e);
HXLINE( 171)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE(  35)			::String library = null();
HXDLIN(  35)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/GF_assets",fe,40,c5,18)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  35)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/GF_assets",fe,40,c5,18)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  36)			this->set_frames(tex);
HXLINE(  37)			this->animation->addByPrefix(HX_("cheer",8d,9a,b6,45),HX_("GF Cheer",ac,b5,2b,e0),24,false,null(),null());
HXLINE(  38)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("GF left note",6a,dd,c6,b9),24,false,null(),null());
HXLINE(  39)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("GF Right Note",57,7f,86,75),24,false,null(),null());
HXLINE(  40)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("GF Up Note",d6,e4,46,60),24,false,null(),null());
HXLINE(  41)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("GF Down Note",2f,cf,a8,47),24,false,null(),null());
HXLINE(  42)			this->animation->addByIndices(HX_("sad",16,98,57,00),HX_("gf sad",95,c1,1f,ff),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_2,13),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  43)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_3,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  44)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_4,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  45)			this->animation->addByIndices(HX_("hairBlow",b4,c9,39,c9),HX_("GF Dancing Beat Hair blowing",4b,14,4a,db),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_5,4),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  46)			this->animation->addByIndices(HX_("hairFall",bd,48,d6,cb),HX_("GF Dancing Beat Hair Landing",52,45,8f,42),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_6,12),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  47)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("GF FEAR",91,45,bb,20),24,null(),null(),null());
HXLINE(  49)			this->addOffset(HX_("cheer",8d,9a,b6,45),null(),null());
HXLINE(  50)			this->addOffset(HX_("sad",16,98,57,00),-2,-2);
HXLINE(  51)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,-9);
HXLINE(  52)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,-9);
HXLINE(  54)			this->addOffset(HX_("singUP",6a,52,21,b9),0,4);
HXLINE(  55)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,-20);
HXLINE(  56)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),0,-19);
HXLINE(  57)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-20);
HXLINE(  58)			this->addOffset(HX_("hairBlow",b4,c9,39,c9),45,-8);
HXLINE(  59)			this->addOffset(HX_("hairFall",bd,48,d6,cb),0,-9);
HXLINE(  61)			this->addOffset(HX_("scared",20,78,2a,3c),-2,-17);
HXLINE(  63)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  64)			this->playerColor = HX_("A5004D",64,0a,4e,a1);
HXLINE(  34)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("matt",d4,41,56,48)) ){
HXLINE( 201)			::String library = null();
HXDLIN( 201)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/freeplay/matt_assets",64,b8,ae,81)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 201)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/freeplay/matt_assets",64,b8,ae,81)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 202)			this->set_frames(tex);
HXLINE( 203)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("matt idle",e0,d4,8c,68),24,null(),null(),null());
HXLINE( 204)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("matt up note",8b,d1,5c,2f),24,false,null(),null());
HXLINE( 205)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("matt down note",24,5b,56,c3),24,false,null(),null());
HXLINE( 206)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("matt left note",5f,75,20,c2),24,false,null(),null());
HXLINE( 207)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("matt right note",82,ad,07,da),24,false,null(),null());
HXLINE( 208)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("miss up",ff,60,4d,33),24,false,null(),null());
HXLINE( 209)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("miss down",06,e4,e9,9e),24,false,null(),null());
HXLINE( 210)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("miss left",ab,f3,2b,a4),24,false,null(),null());
HXLINE( 211)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("miss right",b8,4f,56,79),24,false,null(),null());
HXLINE( 213)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 214)			this->addOffset(HX_("singUP",6a,52,21,b9),-41,21);
HXLINE( 215)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-10,-14);
HXLINE( 216)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),63,-24);
HXLINE( 217)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-62,-19);
HXLINE( 219)			if (( (bool)(isPlayer) )) {
HXLINE( 221)				this->addOffset(HX_("singUP",6a,52,21,b9),-21,21);
HXLINE( 222)				this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-40,-14);
HXLINE( 223)				this->addOffset(HX_("singLEFT",d6,39,ef,3b),63,-24);
HXLINE( 224)				this->addOffset(HX_("singDOWN",31,2a,ad,36),-30,-19);
            			}
HXLINE( 227)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-21,21);
HXLINE( 228)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-40,-14);
HXLINE( 229)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),63,-24);
HXLINE( 230)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-15,-28);
HXLINE( 232)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 233)			this->playerColor = HX_("fe9641",59,b5,b5,15);
HXLINE( 200)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mickey",78,e6,ba,4b)) ){
HXLINE( 265)			::String library = null();
HXDLIN( 265)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/freeplay/Mickey",c2,44,72,c6)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 265)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/freeplay/Mickey",c2,44,72,c6)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 266)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("mickey idle",bc,dd,5c,b4),24,null(),null(),null());
HXLINE( 267)			this->animation->addByPrefix(HX_("idleAlt",75,ae,38,7c),HX_("mickey idle",bc,dd,5c,b4),24,null(),null(),null());
HXLINE( 268)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("mickey up",03,23,03,9b),24,null(),null(),null());
HXLINE( 269)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("mickey right",34,a8,ca,4e),24,null(),null(),null());
HXLINE( 270)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("mickey left",af,3e,59,b6),24,null(),null(),null());
HXLINE( 271)			if (( (bool)(isPlayer) )) {
HXLINE( 273)				this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("mickey left",af,3e,59,b6),24,null(),null(),null());
HXLINE( 274)				this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("mickey right",34,a8,ca,4e),24,null(),null(),null());
            			}
HXLINE( 276)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("mickey down",0a,2f,17,b1),24,null(),null(),null());
HXLINE( 277)			if (( (bool)(isPlayer) )) {
HXLINE( 279)				this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 280)				this->addOffset(HX_("idleAlt",75,ae,38,7c),null(),null());
HXLINE( 281)				this->addOffset(HX_("singUP",6a,52,21,b9),-119,20);
HXLINE( 282)				this->addOffset(HX_("singRIGHT",0d,6f,70,ac),64,15);
HXLINE( 283)				this->addOffset(HX_("singLEFT",d6,39,ef,3b),-4,8);
HXLINE( 284)				this->addOffset(HX_("singDOWN",31,2a,ad,36),-213,6);
            			}
            			else {
HXLINE( 288)				this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 289)				this->addOffset(HX_("idleAlt",75,ae,38,7c),null(),null());
HXLINE( 290)				this->addOffset(HX_("singUP",6a,52,21,b9),-49,20);
HXLINE( 291)				this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-42,15);
HXLINE( 292)				this->addOffset(HX_("singLEFT",d6,39,ef,3b),14,8);
HXLINE( 293)				this->addOffset(HX_("singDOWN",31,2a,ad,36),-2,6);
            			}
HXLINE( 295)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 296)			this->set_flipX(true);
HXLINE( 297)			this->playerColor = HX_("b70103",59,da,e2,f9);
HXLINE( 264)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("oswald",26,20,a4,e7)) ){
HXLINE( 236)			::String library = null();
HXDLIN( 236)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/freeplay/Oswald",70,7e,5b,62)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 236)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/freeplay/Oswald",70,7e,5b,62)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 237)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("oswald idle",4e,cd,7d,35),24,null(),null(),null());
HXLINE( 238)			this->animation->addByPrefix(HX_("idleAlt",75,ae,38,7c),HX_("oswald idle",4e,cd,7d,35),24,null(),null(),null());
HXLINE( 239)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("oswald up",15,aa,e6,b6),24,null(),null(),null());
HXLINE( 240)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("oswald right",62,58,7b,ca),24,null(),null(),null());
HXLINE( 241)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("oswald down",9c,1e,38,32),24,null(),null(),null());
HXLINE( 242)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("oswald left",41,2e,7a,37),24,null(),null(),null());
HXLINE( 243)			if (( (bool)(isPlayer) )) {
HXLINE( 245)				this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 246)				this->addOffset(HX_("idleAlt",75,ae,38,7c),null(),null());
HXLINE( 247)				this->addOffset(HX_("singUP",6a,52,21,b9),20,-1);
HXLINE( 248)				this->addOffset(HX_("singRIGHT",0d,6f,70,ac),48,0);
HXLINE( 249)				this->addOffset(HX_("singLEFT",d6,39,ef,3b),-11,-3);
HXLINE( 250)				this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-3);
            			}
            			else {
HXLINE( 254)				this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 255)				this->addOffset(HX_("idleAlt",75,ae,38,7c),null(),null());
HXLINE( 256)				this->addOffset(HX_("singUP",6a,52,21,b9),29,-1);
HXLINE( 257)				this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-70,0);
HXLINE( 258)				this->addOffset(HX_("singLEFT",d6,39,ef,3b),111,-3);
HXLINE( 259)				this->addOffset(HX_("singDOWN",31,2a,ad,36),-21,-2);
            			}
HXLINE( 261)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 262)			this->playerColor = HX_("008af5",78,10,ab,f9);
HXLINE( 235)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("picoLuigiHat",9e,fe,18,fe)) ){
HXLINE( 299)			::String library = null();
HXDLIN( 299)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/wii_shop_chars/Pico_FNF_assetssLuigiHat",5c,4c,60,64)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 299)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/wii_shop_chars/Pico_FNF_assetssLuigiHat",5c,4c,60,64)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 300)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Pico Idle Dance",62,48,dd,f6),24,null(),null(),null());
HXLINE( 301)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("pico Up note",7c,99,36,e5),24,null(),null(),null());
HXLINE( 302)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Pico Note Right",69,3c,25,a7),24,null(),null(),null());
HXLINE( 303)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Pico NOTE LEFT",1a,dc,f1,8f),24,null(),null(),null());
HXLINE( 304)			if (( (bool)(isPlayer) )) {
HXLINE( 306)				this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Pico NOTE LEFT",1a,dc,f1,8f),24,null(),null(),null());
HXLINE( 307)				this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Pico Note Right",69,3c,25,a7),24,null(),null(),null());
            			}
HXLINE( 309)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Pico Down Note",95,81,55,8e),24,null(),null(),null());
HXLINE( 310)			if (( (bool)(isPlayer) )) {
HXLINE( 312)				this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 313)				this->addOffset(HX_("singUP",6a,52,21,b9),21,44);
HXLINE( 314)				this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-44,-28);
HXLINE( 315)				this->addOffset(HX_("singLEFT",d6,39,ef,3b),92,-10);
HXLINE( 316)				this->addOffset(HX_("singDOWN",31,2a,ad,36),86,-105);
            			}
            			else {
HXLINE( 320)				this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 321)				this->addOffset(HX_("singUP",6a,52,21,b9),64,40);
HXLINE( 322)				this->addOffset(HX_("singRIGHT",0d,6f,70,ac),60,-30);
HXLINE( 323)				this->addOffset(HX_("singLEFT",d6,39,ef,3b),-62,-8);
HXLINE( 324)				this->addOffset(HX_("singDOWN",31,2a,ad,36),206,-105);
            			}
HXLINE( 326)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 327)			this->set_flipX(true);
HXLINE( 328)			this->playerColor = HX_("b2d252",bb,d2,41,3b);
HXLINE( 298)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("spookyWaluigiWarioHat",fa,52,e8,49)) ){
HXLINE( 331)			::String library = null();
HXDLIN( 331)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/wii_shop_chars/spooky_kids_assetsWARIOnWALUIGI",49,45,27,b2)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 331)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/wii_shop_chars/spooky_kids_assetsWARIOnWALUIGI",49,45,27,b2)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 332)			this->set_frames(tex);
HXLINE( 333)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("spooky dance idle",36,a7,32,19),24,false,null(),null());
HXLINE( 334)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("spooky UP NOTE",a2,20,d8,ff),24,false,null(),null());
HXLINE( 335)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("spooky DOWN note",fb,b1,f7,73),24,false,null(),null());
HXLINE( 336)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("note sing left",ca,f9,5d,8a),24,false,null(),null());
HXLINE( 337)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("spooky sing right",60,bf,ae,3b),24,false,null(),null());
HXLINE( 338)			if (( (bool)(isPlayer) )) {
HXLINE( 340)				this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("spooky sing right",60,bf,ae,3b),24,false,null(),null());
HXLINE( 341)				this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("note sing left",ca,f9,5d,8a),24,false,null(),null());
            			}
HXLINE( 343)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("spooky dance idle",36,a7,32,19),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_7,3),HX_("",00,00,00,00),12,false,null(),null());
HXLINE( 344)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("spooky dance idle",36,a7,32,19),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_8,4),HX_("",00,00,00,00),12,false,null(),null());
HXLINE( 346)			this->addOffset(HX_("idle",14,a7,b3,45),43,22);
HXLINE( 347)			this->addOffset(HX_("danceLeft",da,cc,f9,df),43,22);
HXLINE( 348)			this->addOffset(HX_("danceRight",a9,7f,a6,91),43,22);
HXLINE( 350)			if (( (bool)(isPlayer) )) {
HXLINE( 352)				this->addOffset(HX_("singUP",6a,52,21,b9),-10,36);
HXLINE( 353)				this->addOffset(HX_("singRIGHT",0d,6f,70,ac),130,20);
HXLINE( 354)				this->addOffset(HX_("singLEFT",d6,39,ef,3b),-130,-14);
HXLINE( 355)				this->addOffset(HX_("singDOWN",31,2a,ad,36),30,-135);
            			}
            			else {
HXLINE( 359)				this->addOffset(HX_("singUP",6a,52,21,b9),-80,36);
HXLINE( 360)				this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-34,26);
HXLINE( 361)				this->addOffset(HX_("singLEFT",d6,39,ef,3b),89,-12);
HXLINE( 362)				this->addOffset(HX_("singDOWN",31,2a,ad,36),60,-135);
            			}
HXLINE( 365)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE( 366)			this->playerColor = HX_("d57e00",9f,5d,94,a4);
HXLINE( 330)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("wii",17,a8,5a,00)) ){
HXLINE( 109)			::String library = null();
HXDLIN( 109)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/WiiAssets",f5,82,2c,ee)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 109)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/WiiAssets",f5,82,2c,ee)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 110)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("wii idle",bd,db,bf,52),24,null(),null(),null());
HXLINE( 111)			this->animation->addByPrefix(HX_("idleAlt",75,ae,38,7c),HX_("wii idle",bd,db,bf,52),24,null(),null(),null());
HXLINE( 112)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("wii up",c4,ee,0a,4f),24,null(),null(),null());
HXLINE( 113)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("wii right",13,eb,05,47),24,null(),null(),null());
HXLINE( 114)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("wii down",0b,2d,7a,4f),24,null(),null(),null());
HXLINE( 115)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("wii left",b0,3c,bc,54),24,null(),null(),null());
HXLINE( 116)			this->animation->addByIndices(HX_("wiiThrowStart",53,6c,b0,35),HX_("wii throw",5d,3c,32,6d),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_9,6),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 117)			this->animation->addByIndices(HX_("wiiThrow",8f,71,f7,42),HX_("wii throw",5d,3c,32,6d),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_10,6),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 118)			this->animation->addByIndices(HX_("wiiThrowBringBack",ca,74,1e,cd),HX_("wii throw",5d,3c,32,6d),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_11,12),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 119)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 120)			this->addOffset(HX_("singUP",6a,52,21,b9),5,80);
HXLINE( 121)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-45,27);
HXLINE( 122)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),60,20);
HXLINE( 123)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-70);
HXLINE( 124)			this->addOffset(HX_("wiiThrowStart",53,6c,b0,35),57,12);
HXLINE( 125)			this->addOffset(HX_("wiiThrow",8f,71,f7,42),57,12);
HXLINE( 126)			this->addOffset(HX_("wiiThrowBringBack",ca,74,1e,cd),57,12);
HXLINE( 127)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 128)			this->playerColor = HX_("c8dee2",e3,86,2b,16);
HXLINE( 108)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE( 384)		this->dance();
HXLINE( 386)		if (( (bool)(isPlayer) )) {
HXLINE( 388)			this->set_flipX(!(this->flipX));
HXLINE( 390)			if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("bf",c4,55,00,00)))) {
HXLINE( 391)				if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("matt",d4,41,56,48)))) {
HXLINE( 393)					::Array< int > oldRight = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHT",0d,6f,70,ac))) )->frames;
HXLINE( 394)					( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHT",0d,6f,70,ac))) )->frames = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFT",d6,39,ef,3b))) )->frames;
HXLINE( 395)					( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFT",d6,39,ef,3b))) )->frames = oldRight;
HXLINE( 397)					if (::hx::IsNotNull( this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3)) )) {
HXLINE( 399)						::Array< int > oldMiss = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3))) )->frames;
HXLINE( 400)						( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3))) )->frames = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFTmiss",d2,2f,9c,b6))) )->frames;
HXLINE( 401)						( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFTmiss",d2,2f,9c,b6))) )->frames = oldMiss;
            					}
            				}
            			}
            		}
            	}

Dynamic Character_obj::__CreateEmpty() { return new Character_obj; }

void *Character_obj::_hx_vtable = 0;

Dynamic Character_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Character_obj > _hx_result = new Character_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Character_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55af02e5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x55af02e5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Character_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_408_update)
HXLINE( 409)		if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("bf",c4,55,00,00)))) {
HXLINE( 410)			if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("mickey",78,e6,ba,4b)))) {
HXLINE( 411)				if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("bfMarioHat",9b,bd,d7,f1)))) {
HXLINE( 412)					if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("eduardo",f2,58,fe,01)))) {
HXLINE( 413)						if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("picoLuigiHat",9e,fe,18,fe)))) {
HXLINE( 414)							if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("spookyWaluigiWarioHat",fa,52,e8,49)))) {
HXLINE( 416)								if (::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c))) {
HXLINE( 418)									 ::Character _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 418)									_hx_tmp->holdTimer = (_hx_tmp->holdTimer + elapsed);
            								}
HXLINE( 421)								Float dadVar = ( (Float)(4) );
HXLINE( 423)								if ((this->curCharacter == HX_("dad",47,36,4c,00))) {
HXLINE( 424)									dadVar = ((Float)6.1);
            								}
HXLINE( 425)								if ((this->holdTimer >= ((::Conductor_obj::stepCrochet * dadVar) * ((Float)0.001)))) {
HXLINE( 427)									this->dance();
HXLINE( 428)									this->holdTimer = ( (Float)(0) );
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 432)		if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 435)			bool _hx_tmp;
HXDLIN( 435)			if ((this->animation->_curAnim->name == HX_("hairFall",bd,48,d6,cb))) {
HXLINE( 435)				_hx_tmp = this->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 435)				_hx_tmp = false;
            			}
HXDLIN( 435)			if (_hx_tmp) {
HXLINE( 436)				this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            			}
            		}
HXLINE( 439)		this->super::update(elapsed);
            	}


void Character_obj::dance(){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_446_dance)
HXDLIN( 446)		if (!(this->debugMode)) {
HXLINE( 448)			::String _hx_switch_0 = this->curCharacter;
            			if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE( 451)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 453)					this->danced = !(this->danced);
HXLINE( 454)					if (this->danced) {
HXLINE( 455)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 457)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 451)				goto _hx_goto_13;
            			}
            			if (  (_hx_switch_0==HX_("oswald",26,20,a4,e7)) ){
HXLINE( 466)				this->danced = !(this->danced);
HXLINE( 467)				if (this->danced) {
HXLINE( 468)					this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
            				}
            				else {
HXLINE( 470)					this->playAnim(HX_("idleAlt",75,ae,38,7c),null(),null(),null());
            				}
HXLINE( 465)				goto _hx_goto_13;
            			}
            			if (  (_hx_switch_0==HX_("wii",17,a8,5a,00)) ){
HXLINE( 460)				this->danced = !(this->danced);
HXLINE( 461)				if (this->danced) {
HXLINE( 462)					this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
            				}
            				else {
HXLINE( 464)					this->playAnim(HX_("idleAlt",75,ae,38,7c),null(),null(),null());
            				}
HXLINE( 459)				goto _hx_goto_13;
            			}
            			/* default */{
HXLINE( 472)				this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            			_hx_goto_13:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,dance,(void))

void Character_obj::playAnim(::String AnimName,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Reversed,::hx::Null< int >  __o_Frame){
            		bool Force = __o_Force.Default(false);
            		bool Reversed = __o_Reversed.Default(false);
            		int Frame = __o_Frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_478_playAnim)
HXLINE( 479)		this->animation->play(AnimName,Force,Reversed,Frame);
HXLINE( 481)		::cpp::VirtualArray daOffset = ( (::cpp::VirtualArray)(this->animOffsets->get(AnimName)) );
HXLINE( 482)		if (this->animOffsets->exists(AnimName)) {
HXLINE( 484)			this->offset->set(daOffset->__get(0),daOffset->__get(1));
            		}
            		else {
HXLINE( 487)			this->offset->set(0,0);
            		}
HXLINE( 489)		if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 491)			if ((AnimName == HX_("singLEFT",d6,39,ef,3b))) {
HXLINE( 493)				this->danced = true;
            			}
            			else {
HXLINE( 495)				if ((AnimName == HX_("singRIGHT",0d,6f,70,ac))) {
HXLINE( 497)					this->danced = false;
            				}
            			}
HXLINE( 500)			bool _hx_tmp;
HXDLIN( 500)			if ((AnimName != HX_("singUP",6a,52,21,b9))) {
HXLINE( 500)				_hx_tmp = (AnimName == HX_("singDOWN",31,2a,ad,36));
            			}
            			else {
HXLINE( 500)				_hx_tmp = true;
            			}
HXDLIN( 500)			if (_hx_tmp) {
HXLINE( 502)				this->danced = !(this->danced);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Character_obj,playAnim,(void))

void Character_obj::addOffset(::String name,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_509_addOffset)
HXDLIN( 509)		::cpp::VirtualArray v = ::Array_obj< Float >::__new(2)->init(0,x)->init(1,y);
HXDLIN( 509)		this->animOffsets->set(name,v);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Character_obj,addOffset,(void))


::hx::ObjectPtr< Character_obj > Character_obj::__new(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	::hx::ObjectPtr< Character_obj > __this = new Character_obj();
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< Character_obj > Character_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	Character_obj *__this = (Character_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Character_obj), true, "Character"));
	*(void **)__this = Character_obj::_hx_vtable;
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

Character_obj::Character_obj()
{
}

void Character_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Character);
	HX_MARK_MEMBER_NAME(animOffsets,"animOffsets");
	HX_MARK_MEMBER_NAME(debugMode,"debugMode");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(playerColor,"playerColor");
	HX_MARK_MEMBER_NAME(holdTimer,"holdTimer");
	HX_MARK_MEMBER_NAME(danced,"danced");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Character_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animOffsets,"animOffsets");
	HX_VISIT_MEMBER_NAME(debugMode,"debugMode");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(playerColor,"playerColor");
	HX_VISIT_MEMBER_NAME(holdTimer,"holdTimer");
	HX_VISIT_MEMBER_NAME(danced,"danced");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Character_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"danced") ) { return ::hx::Val( danced ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { return ::hx::Val( debugMode ); }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { return ::hx::Val( holdTimer ); }
		if (HX_FIELD_EQ(inName,"addOffset") ) { return ::hx::Val( addOffset_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { return ::hx::Val( animOffsets ); }
		if (HX_FIELD_EQ(inName,"playerColor") ) { return ::hx::Val( playerColor ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Character_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"danced") ) { danced=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { debugMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { holdTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { animOffsets=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playerColor") ) { playerColor=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Character_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animOffsets",6f,ff,7a,f8));
	outFields->push(HX_("debugMode",56,77,ac,2b));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("playerColor",42,16,3b,51));
	outFields->push(HX_("holdTimer",06,82,13,a9));
	outFields->push(HX_("danced",d1,49,8f,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Character_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Character_obj,animOffsets),HX_("animOffsets",6f,ff,7a,f8)},
	{::hx::fsBool,(int)offsetof(Character_obj,debugMode),HX_("debugMode",56,77,ac,2b)},
	{::hx::fsBool,(int)offsetof(Character_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsString,(int)offsetof(Character_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsString,(int)offsetof(Character_obj,playerColor),HX_("playerColor",42,16,3b,51)},
	{::hx::fsFloat,(int)offsetof(Character_obj,holdTimer),HX_("holdTimer",06,82,13,a9)},
	{::hx::fsBool,(int)offsetof(Character_obj,danced),HX_("danced",d1,49,8f,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Character_obj_sStaticStorageInfo = 0;
#endif

static ::String Character_obj_sMemberFields[] = {
	HX_("animOffsets",6f,ff,7a,f8),
	HX_("debugMode",56,77,ac,2b),
	HX_("isPlayer",eb,86,22,90),
	HX_("curCharacter",09,86,7c,d7),
	HX_("playerColor",42,16,3b,51),
	HX_("holdTimer",06,82,13,a9),
	HX_("update",09,86,05,87),
	HX_("danced",d1,49,8f,1e),
	HX_("dance",33,83,83,d4),
	HX_("playAnim",25,ea,84,30),
	HX_("addOffset",94,cc,63,18),
	::String(null()) };

::hx::Class Character_obj::__mClass;

void Character_obj::__register()
{
	Character_obj _hx_dummy;
	Character_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Character",89,bb,a4,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Character_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Character_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Character_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Character_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

