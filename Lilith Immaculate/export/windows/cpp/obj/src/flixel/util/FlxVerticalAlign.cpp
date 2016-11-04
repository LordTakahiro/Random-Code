// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxVerticalAlign
#include <flixel/util/FlxVerticalAlign.h>
#endif
namespace flixel{
namespace util{

::flixel::util::FlxVerticalAlign FlxVerticalAlign_obj::BOTTOM;

::flixel::util::FlxVerticalAlign FlxVerticalAlign_obj::CENTER;

::flixel::util::FlxVerticalAlign FlxVerticalAlign_obj::TOP;

bool FlxVerticalAlign_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) { outValue = FlxVerticalAlign_obj::BOTTOM; return true; }
	if (inName==HX_("CENTER",d5,d1,5d,b8)) { outValue = FlxVerticalAlign_obj::CENTER; return true; }
	if (inName==HX_("TOP",75,02,40,00)) { outValue = FlxVerticalAlign_obj::TOP; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxVerticalAlign_obj)

int FlxVerticalAlign_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return 2;
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 1;
	if (inName==HX_("TOP",75,02,40,00)) return 0;
	return super::__FindIndex(inName);
}

int FlxVerticalAlign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return 0;
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 0;
	if (inName==HX_("TOP",75,02,40,00)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FlxVerticalAlign_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return BOTTOM;
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return CENTER;
	if (inName==HX_("TOP",75,02,40,00)) return TOP;
	return super::__Field(inName,inCallProp);
}

static ::String FlxVerticalAlign_obj_sStaticFields[] = {
	HX_("TOP",75,02,40,00),
	HX_("CENTER",d5,d1,5d,b8),
	HX_("BOTTOM",eb,92,fb,17),
	::String(null())
};

static void FlxVerticalAlign_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVerticalAlign_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(FlxVerticalAlign_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(FlxVerticalAlign_obj::TOP,"TOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxVerticalAlign_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVerticalAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxVerticalAlign_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(FlxVerticalAlign_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(FlxVerticalAlign_obj::TOP,"TOP");
};
#endif

hx::Class FlxVerticalAlign_obj::__mClass;

Dynamic __Create_FlxVerticalAlign_obj() { return new FlxVerticalAlign_obj; }

void FlxVerticalAlign_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("flixel.util.FlxVerticalAlign","\x17","\xad","\xc7","\x75"), hx::TCanCast< FlxVerticalAlign_obj >,FlxVerticalAlign_obj_sStaticFields,0,
	&__Create_FlxVerticalAlign_obj, &__Create,
	&super::__SGetClass(), &CreateFlxVerticalAlign_obj, FlxVerticalAlign_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FlxVerticalAlign_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxVerticalAlign_obj::__GetStatic;
}

void FlxVerticalAlign_obj::__boot()
{
BOTTOM = hx::CreateEnum< FlxVerticalAlign_obj >(HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),2,0);
CENTER = hx::CreateEnum< FlxVerticalAlign_obj >(HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),1,0);
TOP = hx::CreateEnum< FlxVerticalAlign_obj >(HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),0,0);
}


} // end namespace flixel
} // end namespace util
