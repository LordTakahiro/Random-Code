// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_net__URLLoaderDataFormat_URLLoaderDataFormat_Impl_
#include <openfl/net/_URLLoaderDataFormat/URLLoaderDataFormat_Impl_.h>
#endif

namespace openfl{
namespace net{
namespace _URLLoaderDataFormat{

void URLLoaderDataFormat_Impl__obj::__construct() { }

Dynamic URLLoaderDataFormat_Impl__obj::__CreateEmpty() { return new URLLoaderDataFormat_Impl__obj; }

hx::ObjectPtr< URLLoaderDataFormat_Impl__obj > URLLoaderDataFormat_Impl__obj::__new()
{
	hx::ObjectPtr< URLLoaderDataFormat_Impl__obj > _hx_result = new URLLoaderDataFormat_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic URLLoaderDataFormat_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< URLLoaderDataFormat_Impl__obj > _hx_result = new URLLoaderDataFormat_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic URLLoaderDataFormat_Impl__obj::BINARY;

 ::Dynamic URLLoaderDataFormat_Impl__obj::TEXT;

 ::Dynamic URLLoaderDataFormat_Impl__obj::VARIABLES;

 ::Dynamic URLLoaderDataFormat_Impl__obj::fromString(::String value){
            	HX_STACK_FRAME("openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","fromString",0xfc3261c1,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_.fromString","openfl/net/URLLoaderDataFormat.hx",12,0x0297964c)
            	HX_STACK_ARG(value,"value")
HXLINE(  12)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("binary",01,bc,0b,ed)) ){
HXLINE(  12)			return (int)0;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("text",ad,cc,f9,4c)) ){
HXLINE(  12)			return (int)1;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("variables",b7,e2,62,82)) ){
HXLINE(  12)			return (int)2;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  12)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  12)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoaderDataFormat_Impl__obj,fromString,return )

::String URLLoaderDataFormat_Impl__obj::toString(Int value){
            	HX_STACK_FRAME("openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","toString",0x62701f12,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_.toString","openfl/net/URLLoaderDataFormat.hx",25,0x0297964c)
            	HX_STACK_ARG(value,"value")
HXLINE(  25)		switch((int)(value)){
            			case (int)0: {
HXLINE(  25)				return HX_("binary",01,bc,0b,ed);
            			}
            			break;
            			case (int)1: {
HXLINE(  25)				return HX_("text",ad,cc,f9,4c);
            			}
            			break;
            			case (int)2: {
HXLINE(  25)				return HX_("variables",b7,e2,62,82);
            			}
            			break;
            			default:{
HXLINE(  25)				return null();
            			}
            		}
HXDLIN(  25)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoaderDataFormat_Impl__obj,toString,return )


URLLoaderDataFormat_Impl__obj::URLLoaderDataFormat_Impl__obj()
{
}

bool URLLoaderDataFormat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *URLLoaderDataFormat_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo URLLoaderDataFormat_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoaderDataFormat_Impl__obj::BINARY,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoaderDataFormat_Impl__obj::TEXT,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoaderDataFormat_Impl__obj::VARIABLES,HX_HCSTRING("VARIABLES","\x97","\x52","\xbb","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void URLLoaderDataFormat_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::BINARY,"BINARY");
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::TEXT,"TEXT");
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::VARIABLES,"VARIABLES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void URLLoaderDataFormat_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::BINARY,"BINARY");
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::TEXT,"TEXT");
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::VARIABLES,"VARIABLES");
};

#endif

hx::Class URLLoaderDataFormat_Impl__obj::__mClass;

static ::String URLLoaderDataFormat_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"),
	HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"),
	HX_HCSTRING("VARIABLES","\x97","\x52","\xbb","\x7d"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void URLLoaderDataFormat_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","\xc8","\x76","\x0e","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLLoaderDataFormat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = URLLoaderDataFormat_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(URLLoaderDataFormat_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< URLLoaderDataFormat_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = URLLoaderDataFormat_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLLoaderDataFormat_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLLoaderDataFormat_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void URLLoaderDataFormat_Impl__obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","boot",0x85b02798,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_.boot","openfl/net/URLLoaderDataFormat.hx",6,0x0297964c)
HXLINE(   6)		BINARY = (int)0;
            	}
{
            	HX_STACK_FRAME("openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","boot",0x85b02798,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_.boot","openfl/net/URLLoaderDataFormat.hx",7,0x0297964c)
HXLINE(   7)		TEXT = (int)1;
            	}
{
            	HX_STACK_FRAME("openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","boot",0x85b02798,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_.boot","openfl/net/URLLoaderDataFormat.hx",8,0x0297964c)
HXLINE(   8)		VARIABLES = (int)2;
            	}
}

} // end namespace openfl
} // end namespace net
} // end namespace _URLLoaderDataFormat
