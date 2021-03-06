// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

namespace flixel{
namespace _hx_system{
namespace frontEnds{

void WatchFrontEnd_obj::__construct(){
            	HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","new",0xbd21d019,"flixel.system.frontEnds.WatchFrontEnd.new","flixel/system/frontEnds/WatchFrontEnd.hx",7,0xd7ade198)
            	HX_STACK_THIS(this)
            	}

Dynamic WatchFrontEnd_obj::__CreateEmpty() { return new WatchFrontEnd_obj; }

hx::ObjectPtr< WatchFrontEnd_obj > WatchFrontEnd_obj::__new()
{
	hx::ObjectPtr< WatchFrontEnd_obj > _hx_result = new WatchFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic WatchFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WatchFrontEnd_obj > _hx_result = new WatchFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

void WatchFrontEnd_obj::add( ::Dynamic object,::String field,::String displayName){
            	HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","add",0xbd17f1da,"flixel.system.frontEnds.WatchFrontEnd.add","flixel/system/frontEnds/WatchFrontEnd.hx",20,0xd7ade198)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(field,"field")
            	HX_STACK_ARG(displayName,"displayName")
HXLINE(  20)		::hx::EnumBase _hx_tmp = ::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(object,field);
HXDLIN(  20)		::flixel::FlxG_obj::game->debugger->watch->add(displayName,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC3(WatchFrontEnd_obj,add,(void))

void WatchFrontEnd_obj::remove( ::Dynamic object,::String field){
            	HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","remove",0x8d8c762b,"flixel.system.frontEnds.WatchFrontEnd.remove","flixel/system/frontEnds/WatchFrontEnd.hx",33,0xd7ade198)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(field,"field")
HXLINE(  33)		::hx::EnumBase _hx_tmp = ::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(object,field);
HXDLIN(  33)		::flixel::FlxG_obj::game->debugger->watch->remove(null(),_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,remove,(void))

void WatchFrontEnd_obj::addQuick(::String displayName, ::Dynamic value){
            	HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","addQuick",0x8c660eb3,"flixel.system.frontEnds.WatchFrontEnd.addQuick","flixel/system/frontEnds/WatchFrontEnd.hx",48,0xd7ade198)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(displayName,"displayName")
            	HX_STACK_ARG(value,"value")
HXLINE(  48)		::hx::EnumBase _hx_tmp = ::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(value);
HXDLIN(  48)		::flixel::FlxG_obj::game->debugger->watch->add(displayName,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,addQuick,(void))

void WatchFrontEnd_obj::removeQuick(::String displayName){
            	HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","removeQuick",0x15fb44c2,"flixel.system.frontEnds.WatchFrontEnd.removeQuick","flixel/system/frontEnds/WatchFrontEnd.hx",60,0xd7ade198)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(displayName,"displayName")
HXLINE(  60)		::hx::EnumBase _hx_tmp = ::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(null());
HXDLIN(  60)		::flixel::FlxG_obj::game->debugger->watch->remove(displayName,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchFrontEnd_obj,removeQuick,(void))

void WatchFrontEnd_obj::addExpression(::String expression,::String displayName){
            	HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","addExpression",0xe5869c12,"flixel.system.frontEnds.WatchFrontEnd.addExpression","flixel/system/frontEnds/WatchFrontEnd.hx",75,0xd7ade198)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(expression,"expression")
            	HX_STACK_ARG(displayName,"displayName")
HXLINE(  75)		::hx::EnumBase _hx_tmp = ::flixel::_hx_system::debug::watch::WatchEntryData_obj::EXPRESSION(expression);
HXDLIN(  75)		::flixel::FlxG_obj::game->debugger->watch->add(displayName,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,addExpression,(void))

void WatchFrontEnd_obj::removeExpression(::String expression){
            	HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","removeExpression",0xc4a80fa3,"flixel.system.frontEnds.WatchFrontEnd.removeExpression","flixel/system/frontEnds/WatchFrontEnd.hx",88,0xd7ade198)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(expression,"expression")
HXLINE(  88)		::hx::EnumBase _hx_tmp = ::flixel::_hx_system::debug::watch::WatchEntryData_obj::EXPRESSION(expression);
HXDLIN(  88)		::flixel::FlxG_obj::game->debugger->watch->remove(null(),_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchFrontEnd_obj,removeExpression,(void))

void WatchFrontEnd_obj::addMouse(){
            	HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","addMouse",0x3add9deb,"flixel.system.frontEnds.WatchFrontEnd.addMouse","flixel/system/frontEnds/WatchFrontEnd.hx",99,0xd7ade198)
            	HX_STACK_THIS(this)
HXLINE(  99)		::hx::EnumBase _hx_tmp = ::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(hx::ClassOf< ::flixel::FlxG >(),HX_("mouse",25,16,65,0c));
HXDLIN(  99)		::flixel::FlxG_obj::game->debugger->watch->add(HX_("Mouse Position",44,8e,3a,9d),_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchFrontEnd_obj,addMouse,(void))

void WatchFrontEnd_obj::removeMouse(){
            	HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","removeMouse",0xc472d3fa,"flixel.system.frontEnds.WatchFrontEnd.removeMouse","flixel/system/frontEnds/WatchFrontEnd.hx",109,0xd7ade198)
            	HX_STACK_THIS(this)
HXLINE( 109)		::hx::EnumBase _hx_tmp = ::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(hx::ClassOf< ::flixel::FlxG >(),HX_("mouse",25,16,65,0c));
HXDLIN( 109)		::flixel::FlxG_obj::game->debugger->watch->remove(null(),_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchFrontEnd_obj,removeMouse,(void))


WatchFrontEnd_obj::WatchFrontEnd_obj()
{
}

hx::Val WatchFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addQuick") ) { return hx::Val( addQuick_dyn()); }
		if (HX_FIELD_EQ(inName,"addMouse") ) { return hx::Val( addMouse_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeQuick") ) { return hx::Val( removeQuick_dyn()); }
		if (HX_FIELD_EQ(inName,"removeMouse") ) { return hx::Val( removeMouse_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addExpression") ) { return hx::Val( addExpression_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeExpression") ) { return hx::Val( removeExpression_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *WatchFrontEnd_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *WatchFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String WatchFrontEnd_obj_sMemberFields[] = {
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("addQuick","\x0c","\xad","\x4a","\xd7"),
	HX_HCSTRING("removeQuick","\x09","\x64","\x21","\x5c"),
	HX_HCSTRING("addExpression","\x19","\x5b","\xe8","\x98"),
	HX_HCSTRING("removeExpression","\xfc","\x2e","\x48","\xe8"),
	HX_HCSTRING("addMouse","\x44","\x3c","\xc2","\x85"),
	HX_HCSTRING("removeMouse","\x41","\xf3","\x98","\x0a"),
	::String(null()) };

static void WatchFrontEnd_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WatchFrontEnd_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class WatchFrontEnd_obj::__mClass;

void WatchFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.WatchFrontEnd","\xa7","\xcf","\xe7","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WatchFrontEnd_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WatchFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WatchFrontEnd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WatchFrontEnd_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WatchFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WatchFrontEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
