// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_HUD
#include <HUD.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif


void HUD_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACK_FRAME("HUD","new",0xf45a2509,"HUD.new","HUD.hx",35,0xe7d70e87)
            			HX_STACK_ARG(spr,"spr")
HXLINE(  35)			spr->scrollFactor->set((int)0,(int)0);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACK_FRAME("HUD","new",0xf45a2509,"HUD.new","HUD.hx",23,0xe7d70e87)
            	HX_STACK_THIS(this)
HXLINE(  24)		super::__construct(null());
HXLINE(  25)		this->_sprBack =  ::flixel::FlxSprite_obj::__new(null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,(int)20,(int)-16777216,null(),null());
HXLINE(  26)		::flixel::util::FlxSpriteUtil_obj::drawRect(this->_sprBack,(int)0,(int)19,::flixel::FlxG_obj::width,(int)1,(int)-1,null(),null());
HXLINE(  27)		this->_txtHealth =  ::flixel::text::FlxText_obj::__new((int)16,(int)2,(int)0,HX_("0 / 0",0f,72,86,b8),(int)8,null());
HXLINE(  28)		{
HXLINE(  28)			HX_VARI(  ::flixel::text::FlxText,_this) = this->_txtHealth;
HXDLIN(  28)			_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::SHADOW_dyn());
HXDLIN(  28)			_this->set_borderColor((int)-8355712);
HXDLIN(  28)			_this->set_borderSize((int)1);
HXDLIN(  28)			_this->set_borderQuality((int)1);
            		}
HXLINE(  29)		Float _hx_tmp = this->_txtHealth->y;
HXDLIN(  29)		Float _hx_tmp1 = this->_txtHealth->get_height();
HXDLIN(  29)		this->_sprHealth =  ::flixel::FlxSprite_obj::__new((int)4,((_hx_tmp + ((Float)_hx_tmp1 / (Float)(int)2)) - (int)4),HX_("assets/images/health.png",42,7f,55,20));
HXLINE(  30)		this->add(this->_sprBack);
HXLINE(  31)		this->add(this->_sprHealth);
HXLINE(  32)		this->add(this->_txtHealth);
HXLINE(  33)		this->forEach( ::Dynamic(new _hx_Closure_0()),null());
            	}

Dynamic HUD_obj::__CreateEmpty() { return new HUD_obj; }

hx::ObjectPtr< HUD_obj > HUD_obj::__new()
{
	hx::ObjectPtr< HUD_obj > _hx_result = new HUD_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic HUD_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HUD_obj > _hx_result = new HUD_obj();
	_hx_result->__construct();
	return _hx_result;
}

void HUD_obj::updateHUD(hx::Null< Float >  __o_Health,hx::Null< Float >  __o_MaxHP){
Float Health = __o_Health.Default(0);
Float MaxHP = __o_MaxHP.Default(0);
            	HX_STACK_FRAME("HUD","updateHUD",0xbe04cb97,"HUD.updateHUD","HUD.hx",41,0xe7d70e87)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Health,"Health")
            	HX_STACK_ARG(MaxHP,"MaxHP")
HXLINE(  41)		::String _hx_tmp = ::Std_obj::string(Health);
HXDLIN(  41)		this->_txtHealth->set_text(((_hx_tmp + HX_(" / ",31,71,18,00)) + MaxHP));
            	}


HX_DEFINE_DYNAMIC_FUNC2(HUD_obj,updateHUD,(void))


HUD_obj::HUD_obj()
{
}

void HUD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HUD);
	HX_MARK_MEMBER_NAME(_sprBack,"_sprBack");
	HX_MARK_MEMBER_NAME(_txtHealth,"_txtHealth");
	HX_MARK_MEMBER_NAME(_sprHealth,"_sprHealth");
	 ::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HUD_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_sprBack,"_sprBack");
	HX_VISIT_MEMBER_NAME(_txtHealth,"_txtHealth");
	HX_VISIT_MEMBER_NAME(_sprHealth,"_sprHealth");
	 ::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

hx::Val HUD_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_sprBack") ) { return hx::Val( _sprBack); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateHUD") ) { return hx::Val( updateHUD_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_txtHealth") ) { return hx::Val( _txtHealth); }
		if (HX_FIELD_EQ(inName,"_sprHealth") ) { return hx::Val( _sprHealth); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HUD_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_sprBack") ) { _sprBack=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_txtHealth") ) { _txtHealth=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprHealth") ) { _sprHealth=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HUD_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_sprBack","\x7d","\x43","\x6d","\x7f"));
	outFields->push(HX_HCSTRING("_txtHealth","\xed","\xfa","\xff","\xc9"));
	outFields->push(HX_HCSTRING("_sprHealth","\x72","\x13","\x50","\xda"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HUD_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(HUD_obj,_sprBack),HX_HCSTRING("_sprBack","\x7d","\x43","\x6d","\x7f")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(HUD_obj,_txtHealth),HX_HCSTRING("_txtHealth","\xed","\xfa","\xff","\xc9")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(HUD_obj,_sprHealth),HX_HCSTRING("_sprHealth","\x72","\x13","\x50","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HUD_obj_sStaticStorageInfo = 0;
#endif

static ::String HUD_obj_sMemberFields[] = {
	HX_HCSTRING("_sprBack","\x7d","\x43","\x6d","\x7f"),
	HX_HCSTRING("_txtHealth","\xed","\xfa","\xff","\xc9"),
	HX_HCSTRING("_sprHealth","\x72","\x13","\x50","\xda"),
	HX_HCSTRING("updateHUD","\x2e","\x12","\xdc","\x82"),
	::String(null()) };

static void HUD_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HUD_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HUD_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HUD_obj::__mClass,"__mClass");
};

#endif

hx::Class HUD_obj::__mClass;

void HUD_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("HUD","\x97","\xec","\x36","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HUD_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HUD_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HUD_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HUD_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HUD_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HUD_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

