// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_zip_FlushMode
#include <haxe/zip/FlushMode.h>
#endif
namespace haxe{
namespace zip{

::haxe::zip::FlushMode FlushMode_obj::BLOCK;

::haxe::zip::FlushMode FlushMode_obj::FINISH;

::haxe::zip::FlushMode FlushMode_obj::FULL;

::haxe::zip::FlushMode FlushMode_obj::NO;

::haxe::zip::FlushMode FlushMode_obj::SYNC;

bool FlushMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BLOCK",2d,ad,ea,32)) { outValue = FlushMode_obj::BLOCK; return true; }
	if (inName==HX_("FINISH",53,ec,01,39)) { outValue = FlushMode_obj::FINISH; return true; }
	if (inName==HX_("FULL",8f,b1,85,2e)) { outValue = FlushMode_obj::FULL; return true; }
	if (inName==HX_("NO",41,44,00,00)) { outValue = FlushMode_obj::NO; return true; }
	if (inName==HX_("SYNC",5b,82,20,37)) { outValue = FlushMode_obj::SYNC; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlushMode_obj)

int FlushMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BLOCK",2d,ad,ea,32)) return 4;
	if (inName==HX_("FINISH",53,ec,01,39)) return 3;
	if (inName==HX_("FULL",8f,b1,85,2e)) return 2;
	if (inName==HX_("NO",41,44,00,00)) return 0;
	if (inName==HX_("SYNC",5b,82,20,37)) return 1;
	return super::__FindIndex(inName);
}

int FlushMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BLOCK",2d,ad,ea,32)) return 0;
	if (inName==HX_("FINISH",53,ec,01,39)) return 0;
	if (inName==HX_("FULL",8f,b1,85,2e)) return 0;
	if (inName==HX_("NO",41,44,00,00)) return 0;
	if (inName==HX_("SYNC",5b,82,20,37)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FlushMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BLOCK",2d,ad,ea,32)) return BLOCK;
	if (inName==HX_("FINISH",53,ec,01,39)) return FINISH;
	if (inName==HX_("FULL",8f,b1,85,2e)) return FULL;
	if (inName==HX_("NO",41,44,00,00)) return NO;
	if (inName==HX_("SYNC",5b,82,20,37)) return SYNC;
	return super::__Field(inName,inCallProp);
}

static ::String FlushMode_obj_sStaticFields[] = {
	HX_("NO",41,44,00,00),
	HX_("SYNC",5b,82,20,37),
	HX_("FULL",8f,b1,85,2e),
	HX_("FINISH",53,ec,01,39),
	HX_("BLOCK",2d,ad,ea,32),
	::String(null())
};

static void FlushMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlushMode_obj::BLOCK,"BLOCK");
	HX_MARK_MEMBER_NAME(FlushMode_obj::FINISH,"FINISH");
	HX_MARK_MEMBER_NAME(FlushMode_obj::FULL,"FULL");
	HX_MARK_MEMBER_NAME(FlushMode_obj::NO,"NO");
	HX_MARK_MEMBER_NAME(FlushMode_obj::SYNC,"SYNC");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlushMode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlushMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlushMode_obj::BLOCK,"BLOCK");
	HX_VISIT_MEMBER_NAME(FlushMode_obj::FINISH,"FINISH");
	HX_VISIT_MEMBER_NAME(FlushMode_obj::FULL,"FULL");
	HX_VISIT_MEMBER_NAME(FlushMode_obj::NO,"NO");
	HX_VISIT_MEMBER_NAME(FlushMode_obj::SYNC,"SYNC");
};
#endif

hx::Class FlushMode_obj::__mClass;

Dynamic __Create_FlushMode_obj() { return new FlushMode_obj; }

void FlushMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("haxe.zip.FlushMode","\x12","\x16","\x75","\x3c"), hx::TCanCast< FlushMode_obj >,FlushMode_obj_sStaticFields,0,
	&__Create_FlushMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlushMode_obj, FlushMode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FlushMode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlushMode_obj::__GetStatic;
}

void FlushMode_obj::__boot()
{
BLOCK = hx::CreateEnum< FlushMode_obj >(HX_HCSTRING("BLOCK","\x2d","\xad","\xea","\x32"),4,0);
FINISH = hx::CreateEnum< FlushMode_obj >(HX_HCSTRING("FINISH","\x53","\xec","\x01","\x39"),3,0);
FULL = hx::CreateEnum< FlushMode_obj >(HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e"),2,0);
NO = hx::CreateEnum< FlushMode_obj >(HX_HCSTRING("NO","\x41","\x44","\x00","\x00"),0,0);
SYNC = hx::CreateEnum< FlushMode_obj >(HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37"),1,0);
}


} // end namespace haxe
} // end namespace zip
