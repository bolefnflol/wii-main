#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasNodeAccess_Impl_
#include <haxe/xml/_Access/HasNodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeAccess_Impl_
#include <haxe/xml/_Access/NodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_polymod_format_XMLMerge
#include <polymod/format/XMLMerge.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_37_mergeXMLWork,"polymod.format.XMLMerge","mergeXMLWork",0xbc737b7e,"polymod.format.XMLMerge.mergeXMLWork","polymod/format/XMLMerge.hx",37,0xbc4ad77e)
HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_94_countNodes,"polymod.format.XMLMerge","countNodes",0xe7024d70,"polymod.format.XMLMerge.countNodes","polymod/format/XMLMerge.hx",94,0xbc4ad77e)
HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_104_mergeXML,"polymod.format.XMLMerge","mergeXML",0x208a430d,"polymod.format.XMLMerge.mergeXML","polymod/format/XMLMerge.hx",104,0xbc4ad77e)
HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_172_mergeXMLNodes,"polymod.format.XMLMerge","mergeXMLNodes",0xf9f2b5e4,"polymod.format.XMLMerge.mergeXMLNodes","polymod/format/XMLMerge.hx",172,0xbc4ad77e)
static const ::String _hx_array_data_f83e6120_29[] = {
	HX_("",00,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_183_getNodeMergeMap,"polymod.format.XMLMerge","getNodeMergeMap",0xbbf9954e,"polymod.format.XMLMerge.getNodeMergeMap","polymod/format/XMLMerge.hx",183,0xbc4ad77e)
HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_223_getNodeSignature,"polymod.format.XMLMerge","getNodeSignature",0x642ae92e,"polymod.format.XMLMerge.getNodeSignature","polymod/format/XMLMerge.hx",223,0xbc4ad77e)
HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_252_mergeMapsDestructively,"polymod.format.XMLMerge","mergeMapsDestructively",0xca999aee,"polymod.format.XMLMerge.mergeMapsDestructively","polymod/format/XMLMerge.hx",252,0xbc4ad77e)
namespace polymod{
namespace format{

void XMLMerge_obj::__construct() { }

Dynamic XMLMerge_obj::__CreateEmpty() { return new XMLMerge_obj; }

void *XMLMerge_obj::_hx_vtable = 0;

Dynamic XMLMerge_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< XMLMerge_obj > _hx_result = new XMLMerge_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool XMLMerge_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6b7b2bae;
}

void XMLMerge_obj::mergeXMLWork( ::Xml a, ::Xml b,::hx::Null< bool >  __o_children,::hx::Null< bool >  __o_attributes){
            		bool children = __o_children.Default(true);
            		bool attributes = __o_attributes.Default(true);
            	HX_STACKFRAME(&_hx_pos_6834fb29b0c2424f_37_mergeXMLWork)
HXLINE(  38)		bool _hx_tmp;
HXDLIN(  38)		if (::hx::IsNotNull( a )) {
HXLINE(  38)			_hx_tmp = ::hx::IsNull( b );
            		}
            		else {
HXLINE(  38)			_hx_tmp = true;
            		}
HXDLIN(  38)		if (_hx_tmp) {
HXLINE(  39)			return;
            		}
HXLINE(  41)		if ((a->nodeType == 6)) {
HXLINE(  43)			a = a->firstElement();
            		}
HXLINE(  45)		if ((b->nodeType == 6)) {
HXLINE(  47)			b = b->firstElement();
            		}
HXLINE(  50)		bool _hx_tmp1;
HXDLIN(  50)		if ((a->nodeType == 0)) {
HXLINE(  50)			_hx_tmp1 = (b->nodeType != 0);
            		}
            		else {
HXLINE(  50)			_hx_tmp1 = true;
            		}
HXDLIN(  50)		if (_hx_tmp1) {
HXLINE(  52)			return;
            		}
HXLINE(  55)		bool _hx_tmp2;
HXDLIN(  55)		if ((a->nodeType != ::Xml_obj::Element)) {
HXLINE(  55)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(a->nodeType))));
            		}
HXDLIN(  55)		if ((a->nodeName != HX_("merge",b8,a2,c6,05))) {
HXLINE(  55)			if ((b->nodeType != ::Xml_obj::Element)) {
HXLINE(  55)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(b->nodeType))));
            			}
HXDLIN(  55)			_hx_tmp2 = (b->nodeName == HX_("merge",b8,a2,c6,05));
            		}
            		else {
HXLINE(  55)			_hx_tmp2 = true;
            		}
HXDLIN(  55)		if (_hx_tmp2) {
HXLINE(  56)			return;
            		}
HXLINE(  58)		if (children) {
HXLINE(  60)			 ::Dynamic el = b->elements();
HXDLIN(  60)			while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  60)				 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  62)				if (::hx::IsNull( el1 )) {
HXLINE(  63)					continue;
            				}
HXLINE(  64)				if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  64)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            				}
HXDLIN(  64)				if ((el1->nodeName == HX_("merge",b8,a2,c6,05))) {
HXLINE(  65)					continue;
            				}
HXLINE(  67)				if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  67)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            				}
HXDLIN(  67)				int aCount = ::polymod::format::XMLMerge_obj::countNodes(a,el1->nodeName);
HXLINE(  68)				if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  68)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            				}
HXDLIN(  68)				int bCount = ::polymod::format::XMLMerge_obj::countNodes(b,el1->nodeName);
HXLINE(  70)				bool _hx_tmp;
HXDLIN(  70)				if ((aCount == 0)) {
HXLINE(  70)					_hx_tmp = (bCount > 0);
            				}
            				else {
HXLINE(  70)					_hx_tmp = false;
            				}
HXDLIN(  70)				if (_hx_tmp) {
HXLINE(  72)					 ::Xml parent = null();
HXDLIN(  72)					 ::Xml c = null();
HXDLIN(  72)					if ((el1->nodeType == ::Xml_obj::Element)) {
HXLINE(  72)						if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  72)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            						}
HXDLIN(  72)						c = ::Xml_obj::createElement(el1->nodeName);
HXDLIN(  72)						{
HXLINE(  72)							 ::Dynamic att = el1->attributes();
HXDLIN(  72)							while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  72)								::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  72)								c->set(att1,el1->get(att1));
            							}
            						}
HXDLIN(  72)						{
HXLINE(  72)							 ::Dynamic el = el1->elements();
HXDLIN(  72)							while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  72)								 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  72)								 ::Xml c1 = null();
HXDLIN(  72)								if ((el1->nodeType == ::Xml_obj::Element)) {
HXLINE(  72)									if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  72)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            									}
HXDLIN(  72)									c1 = ::Xml_obj::createElement(el1->nodeName);
HXDLIN(  72)									{
HXLINE(  72)										 ::Dynamic att = el1->attributes();
HXDLIN(  72)										while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  72)											::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  72)											c1->set(att1,el1->get(att1));
            										}
            									}
HXDLIN(  72)									{
HXLINE(  72)										 ::Dynamic el = el1->elements();
HXDLIN(  72)										while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  72)											 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  72)											c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            										}
            									}
            								}
            								else {
HXLINE(  72)									if ((el1->nodeType == ::Xml_obj::PCData)) {
HXLINE(  72)										bool c;
HXDLIN(  72)										if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)											c = (el1->nodeType == ::Xml_obj::Element);
            										}
            										else {
HXLINE(  72)											c = true;
            										}
HXDLIN(  72)										if (c) {
HXLINE(  72)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            										}
HXDLIN(  72)										c1 = ::Xml_obj::createPCData(el1->nodeValue);
            									}
            									else {
HXLINE(  72)										if ((el1->nodeType == ::Xml_obj::CData)) {
HXLINE(  72)											bool c;
HXDLIN(  72)											if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)												c = (el1->nodeType == ::Xml_obj::Element);
            											}
            											else {
HXLINE(  72)												c = true;
            											}
HXDLIN(  72)											if (c) {
HXLINE(  72)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            											}
HXDLIN(  72)											c1 = ::Xml_obj::createCData(el1->nodeValue);
            										}
            										else {
HXLINE(  72)											if ((el1->nodeType == ::Xml_obj::Comment)) {
HXLINE(  72)												bool c;
HXDLIN(  72)												if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)													c = (el1->nodeType == ::Xml_obj::Element);
            												}
            												else {
HXLINE(  72)													c = true;
            												}
HXDLIN(  72)												if (c) {
HXLINE(  72)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            												}
HXDLIN(  72)												c1 = ::Xml_obj::createComment(el1->nodeValue);
            											}
            											else {
HXLINE(  72)												if ((el1->nodeType == ::Xml_obj::DocType)) {
HXLINE(  72)													bool c;
HXDLIN(  72)													if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)														c = (el1->nodeType == ::Xml_obj::Element);
            													}
            													else {
HXLINE(  72)														c = true;
            													}
HXDLIN(  72)													if (c) {
HXLINE(  72)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            													}
HXDLIN(  72)													c1 = ::Xml_obj::createDocType(el1->nodeValue);
            												}
            												else {
HXLINE(  72)													if ((el1->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE(  72)														bool c;
HXDLIN(  72)														if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)															c = (el1->nodeType == ::Xml_obj::Element);
            														}
            														else {
HXLINE(  72)															c = true;
            														}
HXDLIN(  72)														if (c) {
HXLINE(  72)															HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            														}
HXDLIN(  72)														c1 = ::Xml_obj::createProcessingInstruction(el1->nodeValue);
            													}
            													else {
HXLINE(  72)														if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  72)															c1 = ::Xml_obj::createDocument();
HXDLIN(  72)															{
HXLINE(  72)																 ::Dynamic el = el1->elements();
HXDLIN(  72)																while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  72)																	 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  72)																	c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            																}
            															}
            														}
            													}
            												}
            											}
            										}
            									}
            								}
HXDLIN(  72)								c1->parent = c;
HXDLIN(  72)								c->addChild(c1);
            							}
            						}
            					}
            					else {
HXLINE(  72)						if ((el1->nodeType == ::Xml_obj::PCData)) {
HXLINE(  72)							bool c1;
HXDLIN(  72)							if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)								c1 = (el1->nodeType == ::Xml_obj::Element);
            							}
            							else {
HXLINE(  72)								c1 = true;
            							}
HXDLIN(  72)							if (c1) {
HXLINE(  72)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            							}
HXDLIN(  72)							c = ::Xml_obj::createPCData(el1->nodeValue);
            						}
            						else {
HXLINE(  72)							if ((el1->nodeType == ::Xml_obj::CData)) {
HXLINE(  72)								bool c1;
HXDLIN(  72)								if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)									c1 = (el1->nodeType == ::Xml_obj::Element);
            								}
            								else {
HXLINE(  72)									c1 = true;
            								}
HXDLIN(  72)								if (c1) {
HXLINE(  72)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            								}
HXDLIN(  72)								c = ::Xml_obj::createCData(el1->nodeValue);
            							}
            							else {
HXLINE(  72)								if ((el1->nodeType == ::Xml_obj::Comment)) {
HXLINE(  72)									bool c1;
HXDLIN(  72)									if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)										c1 = (el1->nodeType == ::Xml_obj::Element);
            									}
            									else {
HXLINE(  72)										c1 = true;
            									}
HXDLIN(  72)									if (c1) {
HXLINE(  72)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            									}
HXDLIN(  72)									c = ::Xml_obj::createComment(el1->nodeValue);
            								}
            								else {
HXLINE(  72)									if ((el1->nodeType == ::Xml_obj::DocType)) {
HXLINE(  72)										bool c1;
HXDLIN(  72)										if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)											c1 = (el1->nodeType == ::Xml_obj::Element);
            										}
            										else {
HXLINE(  72)											c1 = true;
            										}
HXDLIN(  72)										if (c1) {
HXLINE(  72)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            										}
HXDLIN(  72)										c = ::Xml_obj::createDocType(el1->nodeValue);
            									}
            									else {
HXLINE(  72)										if ((el1->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE(  72)											bool c1;
HXDLIN(  72)											if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)												c1 = (el1->nodeType == ::Xml_obj::Element);
            											}
            											else {
HXLINE(  72)												c1 = true;
            											}
HXDLIN(  72)											if (c1) {
HXLINE(  72)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            											}
HXDLIN(  72)											c = ::Xml_obj::createProcessingInstruction(el1->nodeValue);
            										}
            										else {
HXLINE(  72)											if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  72)												c = ::Xml_obj::createDocument();
HXDLIN(  72)												{
HXLINE(  72)													 ::Dynamic el = el1->elements();
HXDLIN(  72)													while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  72)														 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  72)														 ::Xml c1 = null();
HXDLIN(  72)														if ((el1->nodeType == ::Xml_obj::Element)) {
HXLINE(  72)															if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  72)																HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            															}
HXDLIN(  72)															c1 = ::Xml_obj::createElement(el1->nodeName);
HXDLIN(  72)															{
HXLINE(  72)																 ::Dynamic att = el1->attributes();
HXDLIN(  72)																while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  72)																	::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  72)																	c1->set(att1,el1->get(att1));
            																}
            															}
HXDLIN(  72)															{
HXLINE(  72)																 ::Dynamic el = el1->elements();
HXDLIN(  72)																while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  72)																	 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  72)																	c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            																}
            															}
            														}
            														else {
HXLINE(  72)															if ((el1->nodeType == ::Xml_obj::PCData)) {
HXLINE(  72)																bool c;
HXDLIN(  72)																if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)																	c = (el1->nodeType == ::Xml_obj::Element);
            																}
            																else {
HXLINE(  72)																	c = true;
            																}
HXDLIN(  72)																if (c) {
HXLINE(  72)																	HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																}
HXDLIN(  72)																c1 = ::Xml_obj::createPCData(el1->nodeValue);
            															}
            															else {
HXLINE(  72)																if ((el1->nodeType == ::Xml_obj::CData)) {
HXLINE(  72)																	bool c;
HXDLIN(  72)																	if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)																		c = (el1->nodeType == ::Xml_obj::Element);
            																	}
            																	else {
HXLINE(  72)																		c = true;
            																	}
HXDLIN(  72)																	if (c) {
HXLINE(  72)																		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																	}
HXDLIN(  72)																	c1 = ::Xml_obj::createCData(el1->nodeValue);
            																}
            																else {
HXLINE(  72)																	if ((el1->nodeType == ::Xml_obj::Comment)) {
HXLINE(  72)																		bool c;
HXDLIN(  72)																		if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)																			c = (el1->nodeType == ::Xml_obj::Element);
            																		}
            																		else {
HXLINE(  72)																			c = true;
            																		}
HXDLIN(  72)																		if (c) {
HXLINE(  72)																			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																		}
HXDLIN(  72)																		c1 = ::Xml_obj::createComment(el1->nodeValue);
            																	}
            																	else {
HXLINE(  72)																		if ((el1->nodeType == ::Xml_obj::DocType)) {
HXLINE(  72)																			bool c;
HXDLIN(  72)																			if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)																				c = (el1->nodeType == ::Xml_obj::Element);
            																			}
            																			else {
HXLINE(  72)																				c = true;
            																			}
HXDLIN(  72)																			if (c) {
HXLINE(  72)																				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																			}
HXDLIN(  72)																			c1 = ::Xml_obj::createDocType(el1->nodeValue);
            																		}
            																		else {
HXLINE(  72)																			if ((el1->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE(  72)																				bool c;
HXDLIN(  72)																				if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  72)																					c = (el1->nodeType == ::Xml_obj::Element);
            																				}
            																				else {
HXLINE(  72)																					c = true;
            																				}
HXDLIN(  72)																				if (c) {
HXLINE(  72)																					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																				}
HXDLIN(  72)																				c1 = ::Xml_obj::createProcessingInstruction(el1->nodeValue);
            																			}
            																			else {
HXLINE(  72)																				if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  72)																					c1 = ::Xml_obj::createDocument();
HXDLIN(  72)																					{
HXLINE(  72)																						 ::Dynamic el = el1->elements();
HXDLIN(  72)																						while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  72)																							 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  72)																							c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            																						}
            																					}
            																				}
            																			}
            																		}
            																	}
            																}
            															}
            														}
HXDLIN(  72)														c1->parent = c;
HXDLIN(  72)														c->addChild(c1);
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
HXDLIN(  72)					c->parent = parent;
HXDLIN(  72)					a->addChild(c);
            				}
            				else {
HXLINE(  74)					bool _hx_tmp;
HXDLIN(  74)					if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  74)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            					}
HXDLIN(  74)					if ((::polymod::format::XMLMerge_obj::countNodes(a,el1->nodeName) == 1)) {
HXLINE(  74)						if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  74)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            						}
HXDLIN(  74)						_hx_tmp = (::polymod::format::XMLMerge_obj::countNodes(b,el1->nodeName) == 1);
            					}
            					else {
HXLINE(  74)						_hx_tmp = false;
            					}
HXDLIN(  74)					if (_hx_tmp) {
HXLINE(  76)						if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  76)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            						}
HXDLIN(  76)						::polymod::format::XMLMerge_obj::mergeXMLWork(( ( ::Xml)(a->elementsNamed(el1->nodeName)->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) ),el1,null(),null());
            					}
            					else {
HXLINE(  80)						 ::Xml parent = null();
HXDLIN(  80)						 ::Xml c = null();
HXDLIN(  80)						if ((el1->nodeType == ::Xml_obj::Element)) {
HXLINE(  80)							if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  80)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            							}
HXDLIN(  80)							c = ::Xml_obj::createElement(el1->nodeName);
HXDLIN(  80)							{
HXLINE(  80)								 ::Dynamic att = el1->attributes();
HXDLIN(  80)								while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  80)									::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  80)									c->set(att1,el1->get(att1));
            								}
            							}
HXDLIN(  80)							{
HXLINE(  80)								 ::Dynamic el = el1->elements();
HXDLIN(  80)								while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  80)									 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  80)									 ::Xml c1 = null();
HXDLIN(  80)									if ((el1->nodeType == ::Xml_obj::Element)) {
HXLINE(  80)										if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  80)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            										}
HXDLIN(  80)										c1 = ::Xml_obj::createElement(el1->nodeName);
HXDLIN(  80)										{
HXLINE(  80)											 ::Dynamic att = el1->attributes();
HXDLIN(  80)											while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  80)												::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  80)												c1->set(att1,el1->get(att1));
            											}
            										}
HXDLIN(  80)										{
HXLINE(  80)											 ::Dynamic el = el1->elements();
HXDLIN(  80)											while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  80)												 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  80)												c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            											}
            										}
            									}
            									else {
HXLINE(  80)										if ((el1->nodeType == ::Xml_obj::PCData)) {
HXLINE(  80)											bool c;
HXDLIN(  80)											if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)												c = (el1->nodeType == ::Xml_obj::Element);
            											}
            											else {
HXLINE(  80)												c = true;
            											}
HXDLIN(  80)											if (c) {
HXLINE(  80)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            											}
HXDLIN(  80)											c1 = ::Xml_obj::createPCData(el1->nodeValue);
            										}
            										else {
HXLINE(  80)											if ((el1->nodeType == ::Xml_obj::CData)) {
HXLINE(  80)												bool c;
HXDLIN(  80)												if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)													c = (el1->nodeType == ::Xml_obj::Element);
            												}
            												else {
HXLINE(  80)													c = true;
            												}
HXDLIN(  80)												if (c) {
HXLINE(  80)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            												}
HXDLIN(  80)												c1 = ::Xml_obj::createCData(el1->nodeValue);
            											}
            											else {
HXLINE(  80)												if ((el1->nodeType == ::Xml_obj::Comment)) {
HXLINE(  80)													bool c;
HXDLIN(  80)													if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)														c = (el1->nodeType == ::Xml_obj::Element);
            													}
            													else {
HXLINE(  80)														c = true;
            													}
HXDLIN(  80)													if (c) {
HXLINE(  80)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            													}
HXDLIN(  80)													c1 = ::Xml_obj::createComment(el1->nodeValue);
            												}
            												else {
HXLINE(  80)													if ((el1->nodeType == ::Xml_obj::DocType)) {
HXLINE(  80)														bool c;
HXDLIN(  80)														if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)															c = (el1->nodeType == ::Xml_obj::Element);
            														}
            														else {
HXLINE(  80)															c = true;
            														}
HXDLIN(  80)														if (c) {
HXLINE(  80)															HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            														}
HXDLIN(  80)														c1 = ::Xml_obj::createDocType(el1->nodeValue);
            													}
            													else {
HXLINE(  80)														if ((el1->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE(  80)															bool c;
HXDLIN(  80)															if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)																c = (el1->nodeType == ::Xml_obj::Element);
            															}
            															else {
HXLINE(  80)																c = true;
            															}
HXDLIN(  80)															if (c) {
HXLINE(  80)																HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            															}
HXDLIN(  80)															c1 = ::Xml_obj::createProcessingInstruction(el1->nodeValue);
            														}
            														else {
HXLINE(  80)															if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  80)																c1 = ::Xml_obj::createDocument();
HXDLIN(  80)																{
HXLINE(  80)																	 ::Dynamic el = el1->elements();
HXDLIN(  80)																	while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  80)																		 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  80)																		c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            																	}
            																}
            															}
            														}
            													}
            												}
            											}
            										}
            									}
HXDLIN(  80)									c1->parent = c;
HXDLIN(  80)									c->addChild(c1);
            								}
            							}
            						}
            						else {
HXLINE(  80)							if ((el1->nodeType == ::Xml_obj::PCData)) {
HXLINE(  80)								bool c1;
HXDLIN(  80)								if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)									c1 = (el1->nodeType == ::Xml_obj::Element);
            								}
            								else {
HXLINE(  80)									c1 = true;
            								}
HXDLIN(  80)								if (c1) {
HXLINE(  80)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            								}
HXDLIN(  80)								c = ::Xml_obj::createPCData(el1->nodeValue);
            							}
            							else {
HXLINE(  80)								if ((el1->nodeType == ::Xml_obj::CData)) {
HXLINE(  80)									bool c1;
HXDLIN(  80)									if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)										c1 = (el1->nodeType == ::Xml_obj::Element);
            									}
            									else {
HXLINE(  80)										c1 = true;
            									}
HXDLIN(  80)									if (c1) {
HXLINE(  80)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            									}
HXDLIN(  80)									c = ::Xml_obj::createCData(el1->nodeValue);
            								}
            								else {
HXLINE(  80)									if ((el1->nodeType == ::Xml_obj::Comment)) {
HXLINE(  80)										bool c1;
HXDLIN(  80)										if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)											c1 = (el1->nodeType == ::Xml_obj::Element);
            										}
            										else {
HXLINE(  80)											c1 = true;
            										}
HXDLIN(  80)										if (c1) {
HXLINE(  80)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            										}
HXDLIN(  80)										c = ::Xml_obj::createComment(el1->nodeValue);
            									}
            									else {
HXLINE(  80)										if ((el1->nodeType == ::Xml_obj::DocType)) {
HXLINE(  80)											bool c1;
HXDLIN(  80)											if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)												c1 = (el1->nodeType == ::Xml_obj::Element);
            											}
            											else {
HXLINE(  80)												c1 = true;
            											}
HXDLIN(  80)											if (c1) {
HXLINE(  80)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            											}
HXDLIN(  80)											c = ::Xml_obj::createDocType(el1->nodeValue);
            										}
            										else {
HXLINE(  80)											if ((el1->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE(  80)												bool c1;
HXDLIN(  80)												if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)													c1 = (el1->nodeType == ::Xml_obj::Element);
            												}
            												else {
HXLINE(  80)													c1 = true;
            												}
HXDLIN(  80)												if (c1) {
HXLINE(  80)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            												}
HXDLIN(  80)												c = ::Xml_obj::createProcessingInstruction(el1->nodeValue);
            											}
            											else {
HXLINE(  80)												if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  80)													c = ::Xml_obj::createDocument();
HXDLIN(  80)													{
HXLINE(  80)														 ::Dynamic el = el1->elements();
HXDLIN(  80)														while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  80)															 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  80)															 ::Xml c1 = null();
HXDLIN(  80)															if ((el1->nodeType == ::Xml_obj::Element)) {
HXLINE(  80)																if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  80)																	HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																}
HXDLIN(  80)																c1 = ::Xml_obj::createElement(el1->nodeName);
HXDLIN(  80)																{
HXLINE(  80)																	 ::Dynamic att = el1->attributes();
HXDLIN(  80)																	while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  80)																		::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  80)																		c1->set(att1,el1->get(att1));
            																	}
            																}
HXDLIN(  80)																{
HXLINE(  80)																	 ::Dynamic el = el1->elements();
HXDLIN(  80)																	while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  80)																		 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  80)																		c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            																	}
            																}
            															}
            															else {
HXLINE(  80)																if ((el1->nodeType == ::Xml_obj::PCData)) {
HXLINE(  80)																	bool c;
HXDLIN(  80)																	if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)																		c = (el1->nodeType == ::Xml_obj::Element);
            																	}
            																	else {
HXLINE(  80)																		c = true;
            																	}
HXDLIN(  80)																	if (c) {
HXLINE(  80)																		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																	}
HXDLIN(  80)																	c1 = ::Xml_obj::createPCData(el1->nodeValue);
            																}
            																else {
HXLINE(  80)																	if ((el1->nodeType == ::Xml_obj::CData)) {
HXLINE(  80)																		bool c;
HXDLIN(  80)																		if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)																			c = (el1->nodeType == ::Xml_obj::Element);
            																		}
            																		else {
HXLINE(  80)																			c = true;
            																		}
HXDLIN(  80)																		if (c) {
HXLINE(  80)																			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																		}
HXDLIN(  80)																		c1 = ::Xml_obj::createCData(el1->nodeValue);
            																	}
            																	else {
HXLINE(  80)																		if ((el1->nodeType == ::Xml_obj::Comment)) {
HXLINE(  80)																			bool c;
HXDLIN(  80)																			if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)																				c = (el1->nodeType == ::Xml_obj::Element);
            																			}
            																			else {
HXLINE(  80)																				c = true;
            																			}
HXDLIN(  80)																			if (c) {
HXLINE(  80)																				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																			}
HXDLIN(  80)																			c1 = ::Xml_obj::createComment(el1->nodeValue);
            																		}
            																		else {
HXLINE(  80)																			if ((el1->nodeType == ::Xml_obj::DocType)) {
HXLINE(  80)																				bool c;
HXDLIN(  80)																				if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)																					c = (el1->nodeType == ::Xml_obj::Element);
            																				}
            																				else {
HXLINE(  80)																					c = true;
            																				}
HXDLIN(  80)																				if (c) {
HXLINE(  80)																					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																				}
HXDLIN(  80)																				c1 = ::Xml_obj::createDocType(el1->nodeValue);
            																			}
            																			else {
HXLINE(  80)																				if ((el1->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE(  80)																					bool c;
HXDLIN(  80)																					if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)																						c = (el1->nodeType == ::Xml_obj::Element);
            																					}
            																					else {
HXLINE(  80)																						c = true;
            																					}
HXDLIN(  80)																					if (c) {
HXLINE(  80)																						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																					}
HXDLIN(  80)																					c1 = ::Xml_obj::createProcessingInstruction(el1->nodeValue);
            																				}
            																				else {
HXLINE(  80)																					if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  80)																						c1 = ::Xml_obj::createDocument();
HXDLIN(  80)																						{
HXLINE(  80)																							 ::Dynamic el = el1->elements();
HXDLIN(  80)																							while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  80)																								 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  80)																								c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            																							}
            																						}
            																					}
            																				}
            																			}
            																		}
            																	}
            																}
            															}
HXDLIN(  80)															c1->parent = c;
HXDLIN(  80)															c->addChild(c1);
            														}
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
HXDLIN(  80)						c->parent = parent;
HXDLIN(  80)						a->addChild(c);
            					}
            				}
            			}
            		}
HXLINE(  84)		if (attributes) {
HXLINE(  86)			 ::Dynamic att = b->attributes();
HXDLIN(  86)			while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  86)				::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  88)				a->set(att1,b->get(att1));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(XMLMerge_obj,mergeXMLWork,(void))

int XMLMerge_obj::countNodes( ::Xml xml,::String nodeName){
            	HX_STACKFRAME(&_hx_pos_6834fb29b0c2424f_94_countNodes)
HXLINE(  95)		int i = 0;
HXLINE(  96)		{
HXLINE(  96)			 ::Dynamic el = xml->elementsNamed(nodeName);
HXDLIN(  96)			while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  96)				 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  98)				i = (i + 1);
            			}
            		}
HXLINE( 100)		return i;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XMLMerge_obj,countNodes,return )

void XMLMerge_obj::mergeXML( ::Xml a, ::Xml b,::Array< ::String > allSigs, ::haxe::ds::StringMap mergeMap){
            	HX_STACKFRAME(&_hx_pos_6834fb29b0c2424f_104_mergeXML)
HXLINE( 105)		::String aName;
HXDLIN( 105)		if ((a->nodeType == 6)) {
HXLINE( 105)			aName = HX_("",00,00,00,00);
            		}
            		else {
HXLINE( 105)			if ((a->nodeType != ::Xml_obj::Element)) {
HXLINE( 105)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(a->nodeType))));
            			}
HXDLIN( 105)			aName = a->nodeName;
            		}
HXLINE( 106)		::String bName;
HXDLIN( 106)		if ((b->nodeType == 6)) {
HXLINE( 106)			bName = HX_("",00,00,00,00);
            		}
            		else {
HXLINE( 106)			if ((b->nodeType != ::Xml_obj::Element)) {
HXLINE( 106)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(b->nodeType))));
            			}
HXDLIN( 106)			bName = b->nodeName;
            		}
HXLINE( 108)		if ((aName != bName)) {
HXLINE( 109)			return;
            		}
HXLINE( 111)		::String aSig = ::polymod::format::XMLMerge_obj::getNodeSignature(a);
HXLINE( 112)		::String bSig = ::polymod::format::XMLMerge_obj::getNodeSignature(b);
HXLINE( 114)		if ((aSig != bSig)) {
HXLINE( 115)			return;
            		}
HXLINE( 117)		{
HXLINE( 117)			int _g = 0;
HXDLIN( 117)			while((_g < allSigs->length)){
HXLINE( 117)				::String sig = allSigs->__get(_g);
HXDLIN( 117)				_g = (_g + 1);
HXLINE( 119)				if ((sig.indexOf(aSig,null()) == 0)) {
HXLINE( 121)					if ((sig == aSig)) {
HXLINE( 124)						::Array< ::String > keyValues = ( (::Array< ::String >)(mergeMap->get(sig)) );
HXLINE( 125)						if (::hx::IsNull( keyValues )) {
HXLINE( 127)							bool _hx_tmp;
HXDLIN( 127)							if ((sig == HX_("",00,00,00,00))) {
HXLINE( 127)								_hx_tmp = (aSig == HX_("",00,00,00,00));
            							}
            							else {
HXLINE( 127)								_hx_tmp = false;
            							}
HXDLIN( 127)							if (_hx_tmp) {
HXLINE( 129)								bool _hx_tmp;
HXDLIN( 129)								if ((a->nodeType == 6)) {
HXLINE( 129)									_hx_tmp = (b->nodeType == 6);
            								}
            								else {
HXLINE( 129)									_hx_tmp = false;
            								}
HXDLIN( 129)								if (_hx_tmp) {
HXLINE( 131)									 ::Xml a1 = a->firstElement();
HXLINE( 132)									 ::Xml b1 = b->firstElement();
HXLINE( 133)									::polymod::format::XMLMerge_obj::mergeXML(a1,b1,allSigs,mergeMap);
            								}
            								else {
HXLINE( 137)									return;
            								}
            							}
            						}
HXLINE( 141)						bool _hx_tmp;
HXDLIN( 141)						bool _hx_tmp1;
HXDLIN( 141)						if (::hx::IsNotNull( keyValues )) {
HXLINE( 141)							_hx_tmp1 = (::hx::Mod(keyValues->length,2) == 0);
            						}
            						else {
HXLINE( 141)							_hx_tmp1 = false;
            						}
HXDLIN( 141)						if (_hx_tmp1) {
HXLINE( 141)							_hx_tmp = (keyValues->length >= 2);
            						}
            						else {
HXLINE( 141)							_hx_tmp = false;
            						}
HXDLIN( 141)						if (_hx_tmp) {
HXLINE( 143)							int _g = 0;
HXDLIN( 143)							int _g1 = ::Std_obj::_hx_int((( (Float)(keyValues->length) ) / ( (Float)(2) )));
HXDLIN( 143)							while((_g < _g1)){
HXLINE( 143)								_g = (_g + 1);
HXDLIN( 143)								int i = (_g - 1);
HXLINE( 145)								::String key = keyValues->__get((i * 2));
HXLINE( 146)								::String value = keyValues->__get(((i * 2) + 1));
HXLINE( 147)								::String aValue = a->get(key);
HXLINE( 148)								if ((aValue == value)) {
HXLINE( 150)									::String bValue = b->get(key);
HXLINE( 151)									::polymod::format::XMLMerge_obj::mergeXMLWork(a,b,null(),null());
            								}
            							}
            						}
            					}
            					else {
HXLINE( 159)						 ::Dynamic aEl = a->elements();
HXDLIN( 159)						while(( (bool)(aEl->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 159)							 ::Xml aEl1 = ( ( ::Xml)(aEl->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 161)							{
HXLINE( 161)								 ::Dynamic bEl = b->elements();
HXDLIN( 161)								while(( (bool)(bEl->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 161)									 ::Xml bEl1 = ( ( ::Xml)(bEl->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 163)									::polymod::format::XMLMerge_obj::mergeXML(aEl1,bEl1,allSigs,mergeMap);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(XMLMerge_obj,mergeXML,(void))

void XMLMerge_obj::mergeXMLNodes( ::Xml a, ::Xml b){
            	HX_STACKFRAME(&_hx_pos_6834fb29b0c2424f_172_mergeXMLNodes)
HXLINE( 173)		if (::hx::IsNull( b )) {
HXLINE( 174)			return;
            		}
HXLINE( 176)		::Array< ::String > allSigs = ::Array_obj< ::String >::fromData( _hx_array_data_f83e6120_29,1);
HXLINE( 177)		 ::haxe::ds::StringMap bMap = ::polymod::format::XMLMerge_obj::getNodeMergeMap(b,allSigs);
HXLINE( 179)		::polymod::format::XMLMerge_obj::mergeXML(a,b,allSigs,bMap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XMLMerge_obj,mergeXMLNodes,(void))

 ::haxe::ds::StringMap XMLMerge_obj::getNodeMergeMap( ::Xml xml,::Array< ::String > addToArray){
            	HX_GC_STACKFRAME(&_hx_pos_6834fb29b0c2424f_183_getNodeMergeMap)
HXLINE( 184)		 ::haxe::ds::StringMap map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 186)		if (::hx::IsNull( xml )) {
HXLINE( 187)			return map;
            		}
HXLINE( 189)		{
HXLINE( 189)			 ::Dynamic el = xml->elements();
HXDLIN( 189)			while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 189)				 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 191)				if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE( 191)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            				}
HXDLIN( 191)				if ((el1->nodeName == HX_("merge",b8,a2,c6,05))) {
HXLINE( 192)					continue;
            				}
HXLINE( 193)				 ::haxe::ds::StringMap subMap = ::polymod::format::XMLMerge_obj::getNodeMergeMap(el1,addToArray);
HXLINE( 194)				map = ::polymod::format::XMLMerge_obj::mergeMapsDestructively(map,subMap);
HXLINE( 195)				::String sig = ::polymod::format::XMLMerge_obj::getNodeSignature(el1);
HXLINE( 197)				bool _hx_tmp;
HXDLIN( 197)				if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE( 197)					_hx_tmp = (el1->nodeType != ::Xml_obj::Element);
            				}
            				else {
HXLINE( 197)					_hx_tmp = false;
            				}
HXDLIN( 197)				if (_hx_tmp) {
HXLINE( 197)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            				}
HXDLIN( 197)				 ::Xml this1 = el1;
HXDLIN( 197)				 ::Xml f = this1;
HXLINE( 198)				if (::haxe::xml::_Access::HasNodeAccess_Impl__obj::resolve(f,HX_("merge",b8,a2,c6,05))) {
HXLINE( 200)					if ((map->exists(sig) == false)) {
HXLINE( 202)						map->set(sig,::Array_obj< ::String >::__new(0));
            					}
HXLINE( 204)					::Array< ::String > arr = ( (::Array< ::String >)(map->get(sig)) );
HXLINE( 206)					::String mergeKey;
HXDLIN( 206)					if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(f,HX_("merge",b8,a2,c6,05)),HX_("key",9f,89,51,00))) {
HXLINE( 206)						mergeKey = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(f,HX_("merge",b8,a2,c6,05)),HX_("key",9f,89,51,00));
            					}
            					else {
HXLINE( 206)						mergeKey = HX_("",00,00,00,00);
            					}
HXLINE( 207)					::String mergeKeyValue = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(f,HX_("merge",b8,a2,c6,05))->get(mergeKey);
HXLINE( 209)					arr->push(mergeKey);
HXLINE( 210)					arr->push(mergeKeyValue);
HXLINE( 212)					if ((addToArray->indexOf(sig,null()) == -1)) {
HXLINE( 214)						addToArray->push(sig);
            					}
            				}
            			}
            		}
HXLINE( 219)		return map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XMLMerge_obj,getNodeMergeMap,return )

::String XMLMerge_obj::getNodeSignature( ::Xml xml){
            	HX_STACKFRAME(&_hx_pos_6834fb29b0c2424f_223_getNodeSignature)
HXLINE( 224)		::Array< ::String > arr = ::Array_obj< ::String >::__new(0);
HXLINE( 225)		 ::Xml parent = xml;
HXLINE( 226)		while(true){
HXLINE( 226)			bool _hx_tmp;
HXDLIN( 226)			if (::hx::IsNotNull( parent )) {
HXLINE( 226)				_hx_tmp = (parent->nodeType == 0);
            			}
            			else {
HXLINE( 226)				_hx_tmp = false;
            			}
HXDLIN( 226)			if (!(_hx_tmp)) {
HXLINE( 226)				goto _hx_goto_32;
            			}
HXLINE( 228)			if ((parent->nodeType != ::Xml_obj::Element)) {
HXLINE( 228)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(parent->nodeType))));
            			}
HXDLIN( 228)			arr->push(parent->nodeName);
HXLINE( 229)			if ((parent->nodeType == 0)) {
HXLINE( 231)				parent = parent->parent;
            			}
            			else {
HXLINE( 235)				parent = null();
            			}
            		}
            		_hx_goto_32:;
HXLINE( 238)		::String str = HX_("",00,00,00,00);
HXLINE( 239)		{
HXLINE( 239)			int _g = 0;
HXDLIN( 239)			int _g1 = arr->length;
HXDLIN( 239)			while((_g < _g1)){
HXLINE( 239)				_g = (_g + 1);
HXDLIN( 239)				int i = (_g - 1);
HXLINE( 241)				int j = ((arr->length - 1) - i);
HXLINE( 242)				str = (str + arr->__get(j));
HXLINE( 243)				if ((i != (arr->length - 1))) {
HXLINE( 245)					str = (str + HX_(".",2e,00,00,00));
            				}
            			}
            		}
HXLINE( 248)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(XMLMerge_obj,getNodeSignature,return )

 ::haxe::ds::StringMap XMLMerge_obj::mergeMapsDestructively( ::haxe::ds::StringMap a, ::haxe::ds::StringMap b){
            	HX_GC_STACKFRAME(&_hx_pos_6834fb29b0c2424f_252_mergeMapsDestructively)
HXLINE( 253)		if (::hx::IsNull( a )) {
HXLINE( 254)			a =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 255)		if (::hx::IsNull( b )) {
HXLINE( 256)			return a;
            		}
HXLINE( 257)		{
HXLINE( 257)			 ::Dynamic bkey = b->keys();
HXDLIN( 257)			while(( (bool)(bkey->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 257)				::String bkey1 = ( (::String)(bkey->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 259)				if (a->exists(bkey1)) {
HXLINE( 261)					::Array< ::String > aArr = ( (::Array< ::String >)(a->get(bkey1)) );
HXLINE( 262)					::Array< ::String > bArr = ( (::Array< ::String >)(b->get(bkey1)) );
HXLINE( 263)					{
HXLINE( 263)						int _g = 0;
HXDLIN( 263)						while((_g < bArr->length)){
HXLINE( 263)							::String bVal = bArr->__get(_g);
HXDLIN( 263)							_g = (_g + 1);
HXLINE( 265)							aArr->push(bVal);
            						}
            					}
            				}
            				else {
HXLINE( 270)					::Array< ::String > bArr = ( (::Array< ::String >)(b->get(bkey1)) );
HXLINE( 271)					a->set(bkey1,bArr);
HXLINE( 272)					b->remove(bkey1);
            				}
            			}
            		}
HXLINE( 275)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XMLMerge_obj,mergeMapsDestructively,return )


XMLMerge_obj::XMLMerge_obj()
{
}

bool XMLMerge_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mergeXML") ) { outValue = mergeXML_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"countNodes") ) { outValue = countNodes_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mergeXMLWork") ) { outValue = mergeXMLWork_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mergeXMLNodes") ) { outValue = mergeXMLNodes_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getNodeMergeMap") ) { outValue = getNodeMergeMap_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNodeSignature") ) { outValue = getNodeSignature_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"mergeMapsDestructively") ) { outValue = mergeMapsDestructively_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *XMLMerge_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *XMLMerge_obj_sStaticStorageInfo = 0;
#endif

::hx::Class XMLMerge_obj::__mClass;

static ::String XMLMerge_obj_sStaticFields[] = {
	HX_("mergeXMLWork",70,83,99,f8),
	HX_("countNodes",e2,14,12,6a),
	HX_("mergeXML",ff,e9,6c,e8),
	HX_("mergeXMLNodes",b2,a1,13,5f),
	HX_("getNodeMergeMap",9c,90,07,5c),
	HX_("getNodeSignature",20,d2,58,d0),
	HX_("mergeMapsDestructively",60,c5,6f,d9),
	::String(null())
};

void XMLMerge_obj::__register()
{
	XMLMerge_obj _hx_dummy;
	XMLMerge_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.XMLMerge",20,61,3e,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &XMLMerge_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(XMLMerge_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< XMLMerge_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XMLMerge_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XMLMerge_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
