// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#include <flixel/system/scaleModes/RatioScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

namespace flixel{
namespace _hx_system{
namespace scaleModes{

void RatioScaleMode_obj::__construct(hx::Null< Bool >  __o_fillScreen){
Bool fillScreen = __o_fillScreen.Default(false);
            	HX_STACK_FRAME("flixel.system.scaleModes.RatioScaleMode","new",0x00d4d0cf,"flixel.system.scaleModes.RatioScaleMode.new","flixel/system/scaleModes/RatioScaleMode.hx",14,0x35e4ce80)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(fillScreen,"fillScreen")
HXLINE(  15)		super::__construct();
HXLINE(  16)		this->fillScreen = fillScreen;
            	}

Dynamic RatioScaleMode_obj::__CreateEmpty() { return new RatioScaleMode_obj; }

hx::ObjectPtr< RatioScaleMode_obj > RatioScaleMode_obj::__new(hx::Null< Bool >  __o_fillScreen)
{
	hx::ObjectPtr< RatioScaleMode_obj > _hx_result = new RatioScaleMode_obj();
	_hx_result->__construct(__o_fillScreen);
	return _hx_result;
}

Dynamic RatioScaleMode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RatioScaleMode_obj > _hx_result = new RatioScaleMode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void RatioScaleMode_obj::updateGameSize(Int Width,Int Height){
            	HX_STACK_FRAME("flixel.system.scaleModes.RatioScaleMode","updateGameSize",0xacc31ced,"flixel.system.scaleModes.RatioScaleMode.updateGameSize","flixel/system/scaleModes/RatioScaleMode.hx",20,0x35e4ce80)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Width,"Width")
            	HX_STACK_ARG(Height,"Height")
HXLINE(  21)		HX_VARI( Float,ratio) = ((Float)::flixel::FlxG_obj::width / (Float)::flixel::FlxG_obj::height);
HXLINE(  24)		HX_VARI( Bool,scaleY) = (((Float)Width / (Float)Height) < ratio);
HXLINE(  25)		if (this->fillScreen) {
HXLINE(  27)			scaleY = !(scaleY);
            		}
HXLINE(  30)		if (scaleY) {
HXLINE(  32)			this->gameSize->set_x(Width);
HXLINE(  33)			Float _hx_tmp = ((Float)this->gameSize->x / (Float)ratio);
HXDLIN(  33)			Int _hx_tmp1 = ::Math_obj::floor(_hx_tmp);
HXDLIN(  33)			this->gameSize->set_y(_hx_tmp1);
            		}
            		else {
HXLINE(  37)			this->gameSize->set_y(Height);
HXLINE(  38)			Float _hx_tmp2 = (this->gameSize->y * ratio);
HXDLIN(  38)			Int _hx_tmp3 = ::Math_obj::floor(_hx_tmp2);
HXDLIN(  38)			this->gameSize->set_x(_hx_tmp3);
            		}
            	}



RatioScaleMode_obj::RatioScaleMode_obj()
{
}

hx::Val RatioScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fillScreen") ) { return hx::Val( fillScreen); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return hx::Val( updateGameSize_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RatioScaleMode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fillScreen") ) { fillScreen=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RatioScaleMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fillScreen","\x4f","\xc2","\xf7","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RatioScaleMode_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RatioScaleMode_obj,fillScreen),HX_HCSTRING("fillScreen","\x4f","\xc2","\xf7","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RatioScaleMode_obj_sStaticStorageInfo = 0;
#endif

static ::String RatioScaleMode_obj_sMemberFields[] = {
	HX_HCSTRING("fillScreen","\x4f","\xc2","\xf7","\x4a"),
	HX_HCSTRING("updateGameSize","\xfc","\x94","\xa3","\xed"),
	::String(null()) };

static void RatioScaleMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RatioScaleMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RatioScaleMode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RatioScaleMode_obj::__mClass,"__mClass");
};

#endif

hx::Class RatioScaleMode_obj::__mClass;

void RatioScaleMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.scaleModes.RatioScaleMode","\x5d","\xbd","\x32","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RatioScaleMode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RatioScaleMode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RatioScaleMode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RatioScaleMode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RatioScaleMode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RatioScaleMode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes
