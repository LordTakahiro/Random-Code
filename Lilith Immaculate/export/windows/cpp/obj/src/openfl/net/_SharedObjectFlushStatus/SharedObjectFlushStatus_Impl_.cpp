// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_net__SharedObjectFlushStatus_SharedObjectFlushStatus_Impl_
#include <openfl/net/_SharedObjectFlushStatus/SharedObjectFlushStatus_Impl_.h>
#endif

namespace openfl{
namespace net{
namespace _SharedObjectFlushStatus{

void SharedObjectFlushStatus_Impl__obj::__construct() { }

Dynamic SharedObjectFlushStatus_Impl__obj::__CreateEmpty() { return new SharedObjectFlushStatus_Impl__obj; }

hx::ObjectPtr< SharedObjectFlushStatus_Impl__obj > SharedObjectFlushStatus_Impl__obj::__new()
{
	hx::ObjectPtr< SharedObjectFlushStatus_Impl__obj > _hx_result = new SharedObjectFlushStatus_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic SharedObjectFlushStatus_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SharedObjectFlushStatus_Impl__obj > _hx_result = new SharedObjectFlushStatus_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic SharedObjectFlushStatus_Impl__obj::FLUSHED;

 ::Dynamic SharedObjectFlushStatus_Impl__obj::PENDING;

 ::Dynamic SharedObjectFlushStatus_Impl__obj::fromString(::String value){
            	HX_STACK_FRAME("openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_","fromString",0x2501bd23,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_.fromString","openfl/net/SharedObjectFlushStatus.hx",11,0x3756667d)
            	HX_STACK_ARG(value,"value")
HXLINE(  11)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("flushed",23,f4,4c,6a)) ){
HXLINE(  11)			return (int)0;
HXDLIN(  11)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("pending",57,98,ec,2b)) ){
HXLINE(  11)			return (int)1;
HXDLIN(  11)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  11)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  11)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObjectFlushStatus_Impl__obj,fromString,return )

::String SharedObjectFlushStatus_Impl__obj::toString(Int value){
            	HX_STACK_FRAME("openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_","toString",0x6f407df4,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_.toString","openfl/net/SharedObjectFlushStatus.hx",23,0x3756667d)
            	HX_STACK_ARG(value,"value")
HXLINE(  23)		switch((int)(value)){
            			case (int)0: {
HXLINE(  23)				return HX_("flushed",23,f4,4c,6a);
            			}
            			break;
            			case (int)1: {
HXLINE(  23)				return HX_("pending",57,98,ec,2b);
            			}
            			break;
            			default:{
HXLINE(  23)				return null();
            			}
            		}
HXDLIN(  23)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObjectFlushStatus_Impl__obj,toString,return )


SharedObjectFlushStatus_Impl__obj::SharedObjectFlushStatus_Impl__obj()
{
}

bool SharedObjectFlushStatus_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *SharedObjectFlushStatus_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo SharedObjectFlushStatus_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &SharedObjectFlushStatus_Impl__obj::FLUSHED,HX_HCSTRING("FLUSHED","\x03","\xc8","\x20","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SharedObjectFlushStatus_Impl__obj::PENDING,HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void SharedObjectFlushStatus_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::FLUSHED,"FLUSHED");
	HX_MARK_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::PENDING,"PENDING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SharedObjectFlushStatus_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::FLUSHED,"FLUSHED");
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::PENDING,"PENDING");
};

#endif

hx::Class SharedObjectFlushStatus_Impl__obj::__mClass;

static ::String SharedObjectFlushStatus_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("FLUSHED","\x03","\xc8","\x20","\xea"),
	HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void SharedObjectFlushStatus_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_","\x26","\x7c","\x0d","\xe4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SharedObjectFlushStatus_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SharedObjectFlushStatus_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SharedObjectFlushStatus_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SharedObjectFlushStatus_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SharedObjectFlushStatus_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SharedObjectFlushStatus_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SharedObjectFlushStatus_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SharedObjectFlushStatus_Impl__obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_","boot",0x7caaed7a,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_.boot","openfl/net/SharedObjectFlushStatus.hx",6,0x3756667d)
HXLINE(   6)		FLUSHED = (int)0;
            	}
{
            	HX_STACK_FRAME("openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_","boot",0x7caaed7a,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_.boot","openfl/net/SharedObjectFlushStatus.hx",7,0x3756667d)
HXLINE(   7)		PENDING = (int)1;
            	}
}

} // end namespace openfl
} // end namespace net
} // end namespace _SharedObjectFlushStatus
