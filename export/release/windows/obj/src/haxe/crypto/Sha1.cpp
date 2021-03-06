#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_crypto_Sha1
#include <haxe/crypto/Sha1.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aec557fcdb4f203f_48_new,"haxe.crypto.Sha1","new",0xdb44b09c,"haxe.crypto.Sha1.new","E:\\HaxeToolKit\\haxe\\std/haxe/crypto/Sha1.hx",48,0x031bb29d)
HX_LOCAL_STACK_FRAME(_hx_pos_aec557fcdb4f203f_50_doEncode,"haxe.crypto.Sha1","doEncode",0xfb483e45,"haxe.crypto.Sha1.doEncode","E:\\HaxeToolKit\\haxe\\std/haxe/crypto/Sha1.hx",50,0x031bb29d)
HX_LOCAL_STACK_FRAME(_hx_pos_aec557fcdb4f203f_142_ft,"haxe.crypto.Sha1","ft",0x7aab5492,"haxe.crypto.Sha1.ft","E:\\HaxeToolKit\\haxe\\std/haxe/crypto/Sha1.hx",142,0x031bb29d)
HX_LOCAL_STACK_FRAME(_hx_pos_aec557fcdb4f203f_155_kt,"haxe.crypto.Sha1","kt",0x7aab58ed,"haxe.crypto.Sha1.kt","E:\\HaxeToolKit\\haxe\\std/haxe/crypto/Sha1.hx",155,0x031bb29d)
HX_LOCAL_STACK_FRAME(_hx_pos_aec557fcdb4f203f_165_hex,"haxe.crypto.Sha1","hex",0xdb402317,"haxe.crypto.Sha1.hex","E:\\HaxeToolKit\\haxe\\std/haxe/crypto/Sha1.hx",165,0x031bb29d)
HX_LOCAL_STACK_FRAME(_hx_pos_aec557fcdb4f203f_29_encode,"haxe.crypto.Sha1","encode",0xcc67df5a,"haxe.crypto.Sha1.encode","E:\\HaxeToolKit\\haxe\\std/haxe/crypto/Sha1.hx",29,0x031bb29d)
HX_LOCAL_STACK_FRAME(_hx_pos_aec557fcdb4f203f_95_str2blks,"haxe.crypto.Sha1","str2blks",0x96813717,"haxe.crypto.Sha1.str2blks","E:\\HaxeToolKit\\haxe\\std/haxe/crypto/Sha1.hx",95,0x031bb29d)
namespace haxe{
namespace crypto{

void Sha1_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_aec557fcdb4f203f_48_new)
            	}

Dynamic Sha1_obj::__CreateEmpty() { return new Sha1_obj; }

void *Sha1_obj::_hx_vtable = 0;

Dynamic Sha1_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sha1_obj > _hx_result = new Sha1_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sha1_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a249b8c;
}

::Array< int > Sha1_obj::doEncode(::Array< int > x){
            	HX_STACKFRAME(&_hx_pos_aec557fcdb4f203f_50_doEncode)
HXLINE(  51)		::Array< int > w = ::Array_obj< int >::__new();
HXLINE(  53)		int a = (int)1732584193;
HXLINE(  54)		int b = -271733879;
HXLINE(  55)		int c = (int)-1732584194;
HXLINE(  56)		int d = 271733878;
HXLINE(  57)		int e = (int)-1009589776;
HXLINE(  59)		int i = 0;
HXLINE(  60)		while((i < x->length)){
HXLINE(  61)			int olda = a;
HXLINE(  62)			int oldb = b;
HXLINE(  63)			int oldc = c;
HXLINE(  64)			int oldd = d;
HXLINE(  65)			int olde = e;
HXLINE(  67)			int j = 0;
HXLINE(  68)			while((j < 80)){
HXLINE(  69)				if ((j < 16)) {
HXLINE(  70)					w[j] = x->__get((i + j));
            				}
            				else {
HXLINE(  72)					int num = (((w->__get((j - 3)) ^ w->__get((j - 8))) ^ w->__get((j - 14))) ^ w->__get((j - 16)));
HXDLIN(  72)					w[j] = ((num << 1) | ::hx::UShr(num,31));
            				}
HXLINE(  73)				int t = ((((a << 5) | ::hx::UShr(a,27)) + this->ft(j,b,c,d)) + e);
HXDLIN(  73)				int t1 = (t + w->__get(j));
HXDLIN(  73)				int t2 = (t1 + this->kt(j));
HXLINE(  74)				e = d;
HXLINE(  75)				d = c;
HXLINE(  76)				c = ((b << 30) | ::hx::UShr(b,2));
HXLINE(  77)				b = a;
HXLINE(  78)				a = t2;
HXLINE(  79)				j = (j + 1);
            			}
HXLINE(  81)			a = (a + olda);
HXLINE(  82)			b = (b + oldb);
HXLINE(  83)			c = (c + oldc);
HXLINE(  84)			d = (d + oldd);
HXLINE(  85)			e = (e + olde);
HXLINE(  86)			i = (i + 16);
            		}
HXLINE(  88)		return ::Array_obj< int >::__new(5)->init(0,a)->init(1,b)->init(2,c)->init(3,d)->init(4,e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,doEncode,return )

int Sha1_obj::ft(int t,int b,int c,int d){
            	HX_STACKFRAME(&_hx_pos_aec557fcdb4f203f_142_ft)
HXLINE( 143)		if ((t < 20)) {
HXLINE( 144)			return ((b & c) | (~(b) & d));
            		}
HXLINE( 145)		if ((t < 40)) {
HXLINE( 146)			return ((b ^ c) ^ d);
            		}
HXLINE( 147)		if ((t < 60)) {
HXLINE( 148)			return (((b & c) | (b & d)) | (c & d));
            		}
HXLINE( 149)		return ((b ^ c) ^ d);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Sha1_obj,ft,return )

int Sha1_obj::kt(int t){
            	HX_STACKFRAME(&_hx_pos_aec557fcdb4f203f_155_kt)
HXLINE( 156)		if ((t < 20)) {
HXLINE( 157)			return (int)1518500249;
            		}
HXLINE( 158)		if ((t < 40)) {
HXLINE( 159)			return (int)1859775393;
            		}
HXLINE( 160)		if ((t < 60)) {
HXLINE( 161)			return (int)-1894007588;
            		}
HXLINE( 162)		return -899497514;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,kt,return )

::String Sha1_obj::hex(::Array< int > a){
            	HX_STACKFRAME(&_hx_pos_aec557fcdb4f203f_165_hex)
HXLINE( 166)		::String str = HX_("",00,00,00,00);
HXLINE( 167)		{
HXLINE( 167)			int _g = 0;
HXDLIN( 167)			while((_g < a->length)){
HXLINE( 167)				int num = a->__get(_g);
HXDLIN( 167)				_g = (_g + 1);
HXLINE( 168)				str = (str + ::StringTools_obj::hex(num,8));
            			}
            		}
HXLINE( 170)		return str.toLowerCase();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,hex,return )

::String Sha1_obj::encode(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_aec557fcdb4f203f_29_encode)
HXLINE(  30)		 ::haxe::crypto::Sha1 sh =  ::haxe::crypto::Sha1_obj::__alloc( HX_CTX );
HXLINE(  31)		::Array< int > h = sh->doEncode(::haxe::crypto::Sha1_obj::str2blks(s));
HXLINE(  32)		return sh->hex(h);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,encode,return )

::Array< int > Sha1_obj::str2blks(::String s){
            	HX_STACKFRAME(&_hx_pos_aec557fcdb4f203f_95_str2blks)
HXLINE(  97)		 ::haxe::io::Bytes s1 = ::haxe::io::Bytes_obj::ofString(s,null());
HXLINE(  99)		int nblk = (((s1->length + 8) >> 6) + 1);
HXLINE( 100)		::Array< int > blks = ::Array_obj< int >::__new();
HXLINE( 102)		{
HXLINE( 102)			int _g = 0;
HXDLIN( 102)			int _g1 = (nblk * 16);
HXDLIN( 102)			while((_g < _g1)){
HXLINE( 102)				_g = (_g + 1);
HXDLIN( 102)				int i = (_g - 1);
HXLINE( 103)				blks[i] = 0;
            			}
            		}
HXLINE( 104)		{
HXLINE( 104)			int _g2 = 0;
HXDLIN( 104)			int _g3 = s1->length;
HXDLIN( 104)			while((_g2 < _g3)){
HXLINE( 104)				_g2 = (_g2 + 1);
HXDLIN( 104)				int i = (_g2 - 1);
HXLINE( 105)				int p = (i >> 2);
HXLINE( 106)				::Array< int > blks1 = blks;
HXDLIN( 106)				int p1 = p;
HXDLIN( 106)				blks1[p1] = (blks1->__get(p1) | (( (int)(s1->b->__get(i)) ) << (24 - ((i & 3) << 3))));
            			}
            		}
HXLINE( 108)		int i = s1->length;
HXLINE( 109)		int p = (i >> 2);
HXLINE( 110)		::Array< int > blks1 = blks;
HXDLIN( 110)		int p1 = p;
HXDLIN( 110)		blks1[p1] = (blks1->__get(p1) | (128 << (24 - ((i & 3) << 3))));
HXLINE( 111)		blks[((nblk * 16) - 1)] = (s1->length * 8);
HXLINE( 112)		return blks;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,str2blks,return )


::hx::ObjectPtr< Sha1_obj > Sha1_obj::__new() {
	::hx::ObjectPtr< Sha1_obj > __this = new Sha1_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Sha1_obj > Sha1_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Sha1_obj *__this = (Sha1_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sha1_obj), false, "haxe.crypto.Sha1"));
	*(void **)__this = Sha1_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Sha1_obj::Sha1_obj()
{
}

::hx::Val Sha1_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ft") ) { return ::hx::Val( ft_dyn() ); }
		if (HX_FIELD_EQ(inName,"kt") ) { return ::hx::Val( kt_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { return ::hx::Val( hex_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"doEncode") ) { return ::hx::Val( doEncode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sha1_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"str2blks") ) { outValue = str2blks_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Sha1_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Sha1_obj_sStaticStorageInfo = 0;
#endif

static ::String Sha1_obj_sMemberFields[] = {
	HX_("doEncode",01,78,fb,8d),
	HX_("ft",4e,59,00,00),
	HX_("kt",a9,5d,00,00),
	HX_("hex",db,42,4f,00),
	::String(null()) };

::hx::Class Sha1_obj::__mClass;

static ::String Sha1_obj_sStaticFields[] = {
	HX_("encode",16,f2,e3,f9),
	HX_("str2blks",d3,70,34,29),
	::String(null())
};

void Sha1_obj::__register()
{
	Sha1_obj _hx_dummy;
	Sha1_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.crypto.Sha1",aa,72,c9,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sha1_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Sha1_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Sha1_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Sha1_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sha1_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sha1_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace crypto
