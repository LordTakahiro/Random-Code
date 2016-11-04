// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxBGSprite
#include <flixel/system/FlxBGSprite.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif

namespace flixel{
namespace _hx_system{

void FlxBGSprite_obj::__construct(){
            	HX_STACK_FRAME("flixel.system.FlxBGSprite","new",0x62e2bd41,"flixel.system.FlxBGSprite.new","flixel/system/FlxBGSprite.hx",11,0xa9844f6f)
            	HX_STACK_THIS(this)
HXLINE(  12)		super::__construct(null(),null(),null());
HXLINE(  13)		::String _hx_tmp = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_("bg_graphic_",b1,39,19,0d));
HXDLIN(  13)		this->makeGraphic((int)1,(int)1,(int)-1,true,_hx_tmp);
HXLINE(  14)		this->scrollFactor->set(null(),null());
            	}

Dynamic FlxBGSprite_obj::__CreateEmpty() { return new FlxBGSprite_obj; }

hx::ObjectPtr< FlxBGSprite_obj > FlxBGSprite_obj::__new()
{
	hx::ObjectPtr< FlxBGSprite_obj > _hx_result = new FlxBGSprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FlxBGSprite_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxBGSprite_obj > _hx_result = new FlxBGSprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

void FlxBGSprite_obj::draw(){
            	HX_STACK_FRAME("flixel.system.FlxBGSprite","draw",0x1cf08403,"flixel.system.FlxBGSprite.draw","flixel/system/FlxBGSprite.hx",22,0xa9844f6f)
            	HX_STACK_THIS(this)
HXLINE(  22)		HX_VARI( Int,_g) = (int)0;
HXDLIN(  22)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->get_cameras();
HXDLIN(  22)		while((_g < _g1->length)){
HXLINE(  22)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN(  22)			++_g;
HXLINE(  24)			Bool _hx_tmp;
HXDLIN(  24)			if (!(!(camera->visible))) {
HXLINE(  24)				_hx_tmp = !(camera->exists);
            			}
            			else {
HXLINE(  24)				_hx_tmp = true;
            			}
HXDLIN(  24)			if (_hx_tmp) {
HXLINE(  26)				continue;
            			}
HXLINE(  29)			this->_matrix->identity();
HXLINE(  30)			this->_matrix->scale(camera->width,camera->height);
HXLINE(  31)			camera->drawPixels(this->frame,null(),this->_matrix,this->colorTransform,null(),null(),null());
HXLINE(  34)			::flixel::FlxBasic_obj::visibleCount++;
            		}
            	}



FlxBGSprite_obj::FlxBGSprite_obj()
{
}

hx::Val FlxBGSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxBGSprite_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxBGSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBGSprite_obj_sMemberFields[] = {
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void FlxBGSprite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBGSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBGSprite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBGSprite_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBGSprite_obj::__mClass;

void FlxBGSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxBGSprite","\xcf","\x08","\x11","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxBGSprite_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxBGSprite_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBGSprite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBGSprite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBGSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBGSprite_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
