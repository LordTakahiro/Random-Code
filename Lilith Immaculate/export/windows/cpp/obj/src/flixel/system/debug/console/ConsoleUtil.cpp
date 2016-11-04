// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif

namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{

void ConsoleUtil_obj::__construct() { }

Dynamic ConsoleUtil_obj::__CreateEmpty() { return new ConsoleUtil_obj; }

hx::ObjectPtr< ConsoleUtil_obj > ConsoleUtil_obj::__new()
{
	hx::ObjectPtr< ConsoleUtil_obj > _hx_result = new ConsoleUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic ConsoleUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConsoleUtil_obj > _hx_result = new ConsoleUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

::Array< ::String > ConsoleUtil_obj::getFields( ::Dynamic Object){
            	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","getFields",0x604f9dfb,"flixel.system.debug.console.ConsoleUtil.getFields","flixel/system/debug/console/ConsoleUtil.hx",91,0x2e8bcde6)
            	HX_STACK_ARG(Object,"Object")
HXLINE(  92)		HX_VARI( ::Array< ::String >,fields) = ::Array_obj< ::String >::__new(0);
HXLINE(  93)		Bool _hx_tmp = ::Std_obj::is(Object,hx::ClassOf< ::hx::Class >());
HXDLIN(  93)		if (_hx_tmp) {
HXLINE(  94)			fields = ::Type_obj::getClassFields(Object);
            		}
            		else {
HXLINE(  95)			Bool _hx_tmp1 = ::Reflect_obj::isObject(Object);
HXDLIN(  95)			if (_hx_tmp1) {
HXLINE(  96)				hx::Class _hx_tmp2 = ::Type_obj::getClass(Object);
HXDLIN(  96)				fields = ::Type_obj::getInstanceFields(_hx_tmp2);
            			}
            		}
HXLINE(  98)		HX_VARI( ::Array< ::String >,filteredFields) = ::Array_obj< ::String >::__new(0);
HXLINE(  99)		{
HXLINE(  99)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  99)			while((_g < fields->length)){
HXLINE(  99)				HX_VARI( ::String,field) = fields->__get(_g);
HXDLIN(  99)				++_g;
HXLINE( 102)				Bool _hx_tmp3;
HXDLIN( 102)				Bool _hx_tmp4 = !(::StringTools_obj::startsWith(field,HX_("get_",09,03,62,44)));
HXDLIN( 102)				if (_hx_tmp4) {
HXLINE( 102)					_hx_tmp3 = ::StringTools_obj::startsWith(field,HX_("set_",7d,92,50,4c));
            				}
            				else {
HXLINE( 102)					_hx_tmp3 = true;
            				}
HXDLIN( 102)				if (_hx_tmp3) {
HXLINE( 104)					HX_VARI( ::String,name) = field.substr((int)4,null());
HXLINE( 106)					Bool _hx_tmp5;
HXDLIN( 106)					Int _hx_tmp6 = fields->indexOf(name,null());
HXDLIN( 106)					if ((_hx_tmp6 == (int)-1)) {
HXLINE( 106)						Int _hx_tmp7 = filteredFields->indexOf(name,null());
HXDLIN( 106)						_hx_tmp5 = (_hx_tmp7 == (int)-1);
            					}
            					else {
HXLINE( 106)						_hx_tmp5 = false;
            					}
HXDLIN( 106)					if (_hx_tmp5) {
HXLINE( 107)						filteredFields->push(name);
            					}
            				}
            				else {
HXLINE( 110)					filteredFields->push(field);
            				}
            			}
            		}
HXLINE( 113)		return ::flixel::_hx_system::debug::console::ConsoleUtil_obj::sortFields(filteredFields);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,getFields,return )

::Array< ::String > ConsoleUtil_obj::sortFields(::Array< ::String > fields){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0,::Array< ::String >,underscoreList) HXARGC(1)
            		Bool _hx_run(::String field){
            			HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","sortFields",0x773f00ab,"flixel.system.debug.console.ConsoleUtil.sortFields","flixel/system/debug/console/ConsoleUtil.hx",121,0x2e8bcde6)
            			HX_STACK_ARG(field,"field")
HXLINE( 122)			Bool _hx_tmp = ::StringTools_obj::startsWith(field,HX_("_",5f,00,00,00));
HXDLIN( 122)			if (_hx_tmp) {
HXLINE( 124)				underscoreList->push(field);
HXLINE( 125)				return false;
            			}
HXLINE( 127)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","sortFields",0x773f00ab,"flixel.system.debug.console.ConsoleUtil.sortFields","flixel/system/debug/console/ConsoleUtil.hx",117,0x2e8bcde6)
            	HX_STACK_ARG(fields,"fields")
HXLINE( 118)		HX_VARI( ::Array< ::String >,underscoreList) = ::Array_obj< ::String >::__new(0);
HXLINE( 120)		fields = fields->filter( ::Dynamic(new _hx_Closure_0(underscoreList)));
HXLINE( 130)		::flixel::util::FlxStringUtil_obj::sortAlphabetically(fields);
HXLINE( 131)		::flixel::util::FlxStringUtil_obj::sortAlphabetically(underscoreList);
HXLINE( 133)		return fields->concat(underscoreList);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,sortFields,return )

void ConsoleUtil_obj::log( ::Dynamic Text){
            	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","log",0x2bebd9d0,"flixel.system.debug.console.ConsoleUtil.log","flixel/system/debug/console/ConsoleUtil.hx",143,0x2e8bcde6)
            	HX_STACK_ARG(Text,"Text")
HXLINE( 143)		::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,log,(void))


ConsoleUtil_obj::ConsoleUtil_obj()
{
}

bool ConsoleUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFields") ) { outValue = getFields_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortFields") ) { outValue = sortFields_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ConsoleUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ConsoleUtil_obj_sStaticStorageInfo = 0;
#endif

static void ConsoleUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConsoleUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class ConsoleUtil_obj::__mClass;

static ::String ConsoleUtil_obj_sStaticFields[] = {
	HX_HCSTRING("getFields","\xaf","\x17","\xe5","\xfc"),
	HX_HCSTRING("sortFields","\x77","\x04","\x74","\xdd"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	::String(null())
};

void ConsoleUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.console.ConsoleUtil","\xba","\x4f","\xd6","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConsoleUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ConsoleUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ConsoleUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ConsoleUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConsoleUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
