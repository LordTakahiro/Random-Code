// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLTexture
#include <openfl/_legacy/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_UInt8Array
#include <openfl/_legacy/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif

namespace openfl{
namespace display3D{
namespace textures{

void CubeTexture_obj::__construct( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,Int size){
            	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","new",0x2100f37b,"openfl.display3D.textures.CubeTexture.new","openfl/display3D/textures/CubeTexture.hx",22,0xffe9b114)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
            	HX_STACK_ARG(glTexture,"glTexture")
            	HX_STACK_ARG(size,"size")
HXLINE(  24)		super::__construct(context,glTexture,size,size);
HXLINE(  25)		this->size = size;
HXLINE(  26)		this->mipmapsGenerated = false;
HXLINE(  28)		this->_textures = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  30)		{
HXLINE(  30)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  30)			while((_g < (int)6)){
HXLINE(  30)				HX_VARI( Int,i) = _g++;
HXLINE(  32)				Int _hx_tmp = ::openfl::_legacy::gl::GL_obj::get_version();
HXDLIN(  32)				 ::Dynamic _hx_tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();
HXDLIN(  32)				this->_textures[i] =  ::openfl::_legacy::gl::GLTexture_obj::__new(_hx_tmp,_hx_tmp1);
            			}
            		}
            	}

Dynamic CubeTexture_obj::__CreateEmpty() { return new CubeTexture_obj; }

hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,Int size)
{
	hx::ObjectPtr< CubeTexture_obj > _hx_result = new CubeTexture_obj();
	_hx_result->__construct(context,glTexture,size);
	return _hx_result;
}

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CubeTexture_obj > _hx_result = new CubeTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

 ::openfl::_legacy::gl::GLTexture CubeTexture_obj::glTextureAt(Int index){
            	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","glTextureAt",0xa081fde4,"openfl.display3D.textures.CubeTexture.glTextureAt","openfl/display3D/textures/CubeTexture.hx",41,0xffe9b114)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
HXLINE(  41)		return this->_textures->__get(index).StaticCast<  ::openfl::_legacy::gl::GLTexture >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeTexture_obj,glTextureAt,return )

void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::openfl::_legacy::utils::ByteArray data,Int byteArrayOffset,hx::Null< Bool >  __o_async){
Bool async = __o_async.Default(false);
            	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",46,0xffe9b114)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
            	HX_STACK_ARG(async,"async")
            	}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))

void CubeTexture_obj::uploadFromBitmapData( ::openfl::_legacy::display::BitmapData bitmapData,Int side,hx::Null< Int >  __o_miplevel){
Int miplevel = __o_miplevel.Default(0);
            	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadFromBitmapData",0xf44b3429,"openfl.display3D.textures.CubeTexture.uploadFromBitmapData","openfl/display3D/textures/CubeTexture.hx",53,0xffe9b114)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bitmapData,"bitmapData")
            	HX_STACK_ARG(side,"side")
            	HX_STACK_ARG(miplevel,"miplevel")
HXLINE(  58)		Int _hx_tmp = bitmapData->get_width();
HXDLIN(  58)		Int _hx_tmp1 = bitmapData->get_height();
HXDLIN(  58)		Bool _hx_tmp2 = bitmapData->get_transparent();
HXDLIN(  58)		HX_VARI(  ::openfl::_legacy::display::BitmapData,rgbaData) =  ::openfl::_legacy::display::BitmapData_obj::__new(_hx_tmp,_hx_tmp1,_hx_tmp2,null(),null());
HXDLIN(  58)		HX_VARI(  ::openfl::_legacy::geom::Rectangle,rect) = bitmapData->get_rect();
HXDLIN(  58)		HX_VARI(  ::openfl::_legacy::geom::Point,point) =  ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);
HXDLIN(  58)		rgbaData->copyChannel(bitmapData,rect,point,(int)2,(int)1);
HXDLIN(  58)		rgbaData->copyChannel(bitmapData,rect,point,(int)4,(int)2);
HXDLIN(  58)		rgbaData->copyChannel(bitmapData,rect,point,(int)8,(int)4);
HXDLIN(  58)		rgbaData->copyChannel(bitmapData,rect,point,(int)1,(int)8);
HXDLIN(  58)		 ::openfl::_legacy::utils::ByteArray _hx_tmp3 = rgbaData->getPixels(rect);
HXDLIN(  58)		HX_VARI(  ::openfl::_legacy::utils::UInt8Array,source) =  ::openfl::_legacy::utils::UInt8Array_obj::__new(_hx_tmp3,null(),null());
HXLINE(  63)		{
HXLINE(  63)			HX_VARI(  ::openfl::_legacy::gl::GLTexture,texture) = this->glTexture;
HXDLIN(  63)			 ::Dynamic _hx_tmp4;
HXDLIN(  63)			Bool _hx_tmp5 = hx::IsNull( texture );
HXDLIN(  63)			if (_hx_tmp5) {
HXLINE(  63)				_hx_tmp4 = null();
            			}
            			else {
HXLINE(  63)				_hx_tmp4 = texture->id;
            			}
HXDLIN(  63)			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,_hx_tmp4);
            		}
HXLINE(  65)		switch((int)(side)){
            			case (int)0: {
HXLINE(  69)				Int width = bitmapData->get_width();
HXDLIN(  69)				Int height = bitmapData->get_height();
HXDLIN(  69)				 ::openfl::_legacy::utils::ByteArray _hx_tmp6;
HXDLIN(  69)				Bool _hx_tmp7 = hx::IsNull( source );
HXDLIN(  69)				if (_hx_tmp7) {
HXLINE(  69)					_hx_tmp6 = null();
            				}
            				else {
HXLINE(  69)					_hx_tmp6 = source->getByteBuffer();
            				}
HXDLIN(  69)				 ::Dynamic _hx_tmp8;
HXDLIN(  69)				Bool _hx_tmp9 = hx::IsNull( source );
HXDLIN(  69)				if (_hx_tmp9) {
HXLINE(  69)					_hx_tmp8 = null();
            				}
            				else {
HXLINE(  69)					_hx_tmp8 = source->getStart();
            				}
HXDLIN(  69)				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34069,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_hx_tmp6,_hx_tmp8);
            			}
            			break;
            			case (int)1: {
HXLINE(  73)				Int width1 = bitmapData->get_width();
HXDLIN(  73)				Int height1 = bitmapData->get_height();
HXDLIN(  73)				 ::openfl::_legacy::utils::ByteArray _hx_tmp10;
HXDLIN(  73)				Bool _hx_tmp11 = hx::IsNull( source );
HXDLIN(  73)				if (_hx_tmp11) {
HXLINE(  73)					_hx_tmp10 = null();
            				}
            				else {
HXLINE(  73)					_hx_tmp10 = source->getByteBuffer();
            				}
HXDLIN(  73)				 ::Dynamic _hx_tmp12;
HXDLIN(  73)				Bool _hx_tmp13 = hx::IsNull( source );
HXDLIN(  73)				if (_hx_tmp13) {
HXLINE(  73)					_hx_tmp12 = null();
            				}
            				else {
HXLINE(  73)					_hx_tmp12 = source->getStart();
            				}
HXDLIN(  73)				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34070,miplevel,(int)6408,width1,height1,(int)0,(int)6408,(int)5121,_hx_tmp10,_hx_tmp12);
            			}
            			break;
            			case (int)2: {
HXLINE(  77)				Int width2 = bitmapData->get_width();
HXDLIN(  77)				Int height2 = bitmapData->get_height();
HXDLIN(  77)				 ::openfl::_legacy::utils::ByteArray _hx_tmp14;
HXDLIN(  77)				Bool _hx_tmp15 = hx::IsNull( source );
HXDLIN(  77)				if (_hx_tmp15) {
HXLINE(  77)					_hx_tmp14 = null();
            				}
            				else {
HXLINE(  77)					_hx_tmp14 = source->getByteBuffer();
            				}
HXDLIN(  77)				 ::Dynamic _hx_tmp16;
HXDLIN(  77)				Bool _hx_tmp17 = hx::IsNull( source );
HXDLIN(  77)				if (_hx_tmp17) {
HXLINE(  77)					_hx_tmp16 = null();
            				}
            				else {
HXLINE(  77)					_hx_tmp16 = source->getStart();
            				}
HXDLIN(  77)				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34071,miplevel,(int)6408,width2,height2,(int)0,(int)6408,(int)5121,_hx_tmp14,_hx_tmp16);
            			}
            			break;
            			case (int)3: {
HXLINE(  81)				Int width3 = bitmapData->get_width();
HXDLIN(  81)				Int height3 = bitmapData->get_height();
HXDLIN(  81)				 ::openfl::_legacy::utils::ByteArray _hx_tmp18;
HXDLIN(  81)				Bool _hx_tmp19 = hx::IsNull( source );
HXDLIN(  81)				if (_hx_tmp19) {
HXLINE(  81)					_hx_tmp18 = null();
            				}
            				else {
HXLINE(  81)					_hx_tmp18 = source->getByteBuffer();
            				}
HXDLIN(  81)				 ::Dynamic _hx_tmp20;
HXDLIN(  81)				Bool _hx_tmp21 = hx::IsNull( source );
HXDLIN(  81)				if (_hx_tmp21) {
HXLINE(  81)					_hx_tmp20 = null();
            				}
            				else {
HXLINE(  81)					_hx_tmp20 = source->getStart();
            				}
HXDLIN(  81)				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34072,miplevel,(int)6408,width3,height3,(int)0,(int)6408,(int)5121,_hx_tmp18,_hx_tmp20);
            			}
            			break;
            			case (int)4: {
HXLINE(  85)				Int width4 = bitmapData->get_width();
HXDLIN(  85)				Int height4 = bitmapData->get_height();
HXDLIN(  85)				 ::openfl::_legacy::utils::ByteArray _hx_tmp22;
HXDLIN(  85)				Bool _hx_tmp23 = hx::IsNull( source );
HXDLIN(  85)				if (_hx_tmp23) {
HXLINE(  85)					_hx_tmp22 = null();
            				}
            				else {
HXLINE(  85)					_hx_tmp22 = source->getByteBuffer();
            				}
HXDLIN(  85)				 ::Dynamic _hx_tmp24;
HXDLIN(  85)				Bool _hx_tmp25 = hx::IsNull( source );
HXDLIN(  85)				if (_hx_tmp25) {
HXLINE(  85)					_hx_tmp24 = null();
            				}
            				else {
HXLINE(  85)					_hx_tmp24 = source->getStart();
            				}
HXDLIN(  85)				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34073,miplevel,(int)6408,width4,height4,(int)0,(int)6408,(int)5121,_hx_tmp22,_hx_tmp24);
            			}
            			break;
            			case (int)5: {
HXLINE(  89)				Int width5 = bitmapData->get_width();
HXDLIN(  89)				Int height5 = bitmapData->get_height();
HXDLIN(  89)				 ::openfl::_legacy::utils::ByteArray _hx_tmp26;
HXDLIN(  89)				Bool _hx_tmp27 = hx::IsNull( source );
HXDLIN(  89)				if (_hx_tmp27) {
HXLINE(  89)					_hx_tmp26 = null();
            				}
            				else {
HXLINE(  89)					_hx_tmp26 = source->getByteBuffer();
            				}
HXDLIN(  89)				 ::Dynamic _hx_tmp28;
HXDLIN(  89)				Bool _hx_tmp29 = hx::IsNull( source );
HXDLIN(  89)				if (_hx_tmp29) {
HXLINE(  89)					_hx_tmp28 = null();
            				}
            				else {
HXLINE(  89)					_hx_tmp28 = source->getStart();
            				}
HXDLIN(  89)				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34074,miplevel,(int)6408,width5,height5,(int)0,(int)6408,(int)5121,_hx_tmp26,_hx_tmp28);
            			}
            			break;
            			default:{
HXLINE(  93)				HX_STACK_DO_THROW(HX_("unknown side type",cd,01,86,25));
            			}
            		}
HXLINE(  97)		::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadFromBitmapData,(void))

void CubeTexture_obj::uploadFromByteArray( ::openfl::_legacy::utils::ByteArray data,Int byteArrayOffset,Int side,hx::Null< Int >  __o_miplevel){
Int miplevel = __o_miplevel.Default(0);
            	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadFromByteArray",0x1e356101,"openfl.display3D.textures.CubeTexture.uploadFromByteArray","openfl/display3D/textures/CubeTexture.hx",102,0xffe9b114)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
            	HX_STACK_ARG(side,"side")
            	HX_STACK_ARG(miplevel,"miplevel")
            	}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))


CubeTexture_obj::CubeTexture_obj()
{
}

void CubeTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeTexture);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(_textures,"_textures");
	HX_MARK_MEMBER_NAME(mipmapsGenerated,"mipmapsGenerated");
	 ::openfl::display3D::textures::TextureBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(_textures,"_textures");
	HX_VISIT_MEMBER_NAME(mipmapsGenerated,"mipmapsGenerated");
	 ::openfl::display3D::textures::TextureBase_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CubeTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { return hx::Val( _textures); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glTextureAt") ) { return hx::Val( glTextureAt_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { return hx::Val( mipmapsGenerated); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn()); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn()); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return hx::Val( uploadCompressedTextureFromByteArray_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CubeTexture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { _textures=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { mipmapsGenerated=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("_textures","\x97","\xee","\x64","\xad"));
	outFields->push(HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CubeTexture_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CubeTexture_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CubeTexture_obj,_textures),HX_HCSTRING("_textures","\x97","\xee","\x64","\xad")},
	{hx::fsBool,(int)offsetof(CubeTexture_obj,mipmapsGenerated),HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CubeTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String CubeTexture_obj_sMemberFields[] = {
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("_textures","\x97","\xee","\x64","\xad"),
	HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac"),
	HX_HCSTRING("glTextureAt","\xc9","\xc7","\x03","\x4a"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	::String(null()) };

static void CubeTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CubeTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.CubeTexture","\x09","\x1a","\x15","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CubeTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CubeTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubeTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CubeTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubeTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubeTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures