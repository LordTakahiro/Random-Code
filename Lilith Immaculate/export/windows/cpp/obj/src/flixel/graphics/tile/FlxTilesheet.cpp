// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif

namespace flixel{
namespace graphics{
namespace tile{

void FlxTilesheet_obj::__construct( ::openfl::_legacy::display::BitmapData image){
            	HX_STACK_FRAME("flixel.graphics.tile.FlxTilesheet","new",0x9cbfe7a0,"flixel.graphics.tile.FlxTilesheet.new","flixel/graphics/tile/FlxTilesheet.hx",5,0x06ecbccf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(image,"image")
HXLINE(   5)		super::__construct(image);
            	}

Dynamic FlxTilesheet_obj::__CreateEmpty() { return new FlxTilesheet_obj; }

hx::ObjectPtr< FlxTilesheet_obj > FlxTilesheet_obj::__new( ::openfl::_legacy::display::BitmapData image)
{
	hx::ObjectPtr< FlxTilesheet_obj > _hx_result = new FlxTilesheet_obj();
	_hx_result->__construct(image);
	return _hx_result;
}

Dynamic FlxTilesheet_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxTilesheet_obj > _hx_result = new FlxTilesheet_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

Int FlxTilesheet_obj::_DRAWCALLS;


FlxTilesheet_obj::FlxTilesheet_obj()
{
}

bool FlxTilesheet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { outValue = _DRAWCALLS; return true; }
	}
	return false;
}

bool FlxTilesheet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { _DRAWCALLS=ioValue.Cast< Int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxTilesheet_obj_sMemberStorageInfo = 0;
static hx::StaticInfo FlxTilesheet_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxTilesheet_obj::_DRAWCALLS,HX_HCSTRING("_DRAWCALLS","\x32","\x23","\xf4","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FlxTilesheet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilesheet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTilesheet_obj::_DRAWCALLS,"_DRAWCALLS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTilesheet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilesheet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilesheet_obj::_DRAWCALLS,"_DRAWCALLS");
};

#endif

hx::Class FlxTilesheet_obj::__mClass;

static ::String FlxTilesheet_obj_sStaticFields[] = {
	HX_HCSTRING("_DRAWCALLS","\x32","\x23","\xf4","\xcc"),
	::String(null())
};

void FlxTilesheet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.tile.FlxTilesheet","\xae","\xd7","\x13","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTilesheet_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTilesheet_obj::__SetStatic;
	__mClass->mMarkFunc = FlxTilesheet_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxTilesheet_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxTilesheet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTilesheet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTilesheet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTilesheet_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxTilesheet_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.graphics.tile.FlxTilesheet","boot",0x8343c4f2,"flixel.graphics.tile.FlxTilesheet.boot","flixel/graphics/tile/FlxTilesheet.hx",10,0x06ecbccf)
HXLINE(  10)		_DRAWCALLS = (int)0;
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
