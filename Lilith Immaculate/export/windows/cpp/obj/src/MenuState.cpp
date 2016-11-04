// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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


void MenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",10,0xdfbcb22c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(MaxSize,"MaxSize")
HXLINE(  10)		super::__construct(MaxSize);
            	}

Dynamic MenuState_obj::__CreateEmpty() { return new MenuState_obj; }

hx::ObjectPtr< MenuState_obj > MenuState_obj::__new( ::Dynamic MaxSize)
{
	hx::ObjectPtr< MenuState_obj > _hx_result = new MenuState_obj();
	_hx_result->__construct(MaxSize);
	return _hx_result;
}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MenuState_obj > _hx_result = new MenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void MenuState_obj::create(){
            	HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",21,0xdfbcb22c)
            	HX_STACK_THIS(this)
HXLINE(  22)		this->_txtTitle =  ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_("Lilith\nImmaculate",2c,82,15,9d),(int)22,null());
HXLINE(  23)		this->_txtTitle->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  24)		this->_txtTitle->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  25)		this->add(this->_txtTitle);
HXLINE(  27)		this->_btnPlay =  ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_("Play",14,5a,33,35),this->clickPlay_dyn());
HXLINE(  28)		Float _hx_tmp = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  28)		Float _hx_tmp1 = this->_btnPlay->get_width();
HXDLIN(  28)		this->_btnPlay->set_x(((_hx_tmp - _hx_tmp1) - (int)10));
HXLINE(  29)		Int _hx_tmp2 = ::flixel::FlxG_obj::height;
HXDLIN(  29)		Float _hx_tmp3 = this->_btnPlay->get_height();
HXDLIN(  29)		this->_btnPlay->set_y(((_hx_tmp2 - _hx_tmp3) - (int)10));
HXLINE(  30)		this->_btnPlay->onUp->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/music/select.wav",70,c5,65,3e),null(),null(),null(),null(),null(),null(),null());
HXLINE(  31)		this->add(this->_btnPlay);
HXLINE(  33)		this->_btnOptions =  ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_("Options",3e,5b,4f,ad),this->clickOptions_dyn());
HXLINE(  34)		Float _hx_tmp4 = (((Float)::flixel::FlxG_obj::width / (Float)(int)2) + (int)10);
HXDLIN(  34)		this->_btnOptions->set_x(_hx_tmp4);
HXLINE(  35)		Int _hx_tmp5 = ::flixel::FlxG_obj::height;
HXDLIN(  35)		Float _hx_tmp6 = this->_btnOptions->get_height();
HXDLIN(  35)		this->_btnOptions->set_y(((_hx_tmp5 - _hx_tmp6) - (int)10));
HXLINE(  36)		this->_btnOptions->onUp->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/music/select.wav",70,c5,65,3e),null(),null(),null(),null(),null(),null(),null());
HXLINE(  37)		this->add(this->_btnOptions);
HXLINE(  38)		this->super::create();
            	}


void MenuState_obj::update(Float elapsed){
            	HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",42,0xdfbcb22c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE(  42)		this->super::update(elapsed);
            	}


void MenuState_obj::clickPlay(){
            	HX_STACK_FRAME("MenuState","clickPlay",0x5f6a9ec0,"MenuState.clickPlay","MenuState.hx",46,0xdfbcb22c)
            	HX_STACK_THIS(this)
HXLINE(  46)		HX_VARI(  ::flixel::FlxState,nextState) =  ::PlayState_obj::__new(null());
HXDLIN(  46)		Bool _hx_tmp = ::flixel::FlxG_obj::game->_state->switchTo(nextState);
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  46)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))

void MenuState_obj::clickOptions(){
            	HX_STACK_FRAME("MenuState","clickOptions",0xe3ab4a12,"MenuState.clickOptions","MenuState.hx",50,0xdfbcb22c)
            	HX_STACK_THIS(this)
HXLINE(  50)		HX_VARI(  ::flixel::FlxState,nextState) =  ::OptionsState_obj::__new(null());
HXDLIN(  50)		Bool _hx_tmp = ::flixel::FlxG_obj::game->_state->switchTo(nextState);
HXDLIN(  50)		if (_hx_tmp) {
HXLINE(  50)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickOptions,(void))


MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(_btnOptions,"_btnOptions");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(_btnOptions,"_btnOptions");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn()); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { return hx::Val( _btnPlay); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return hx::Val( _txtTitle); }
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return hx::Val( clickPlay_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_btnOptions") ) { return hx::Val( _btnOptions); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clickOptions") ) { return hx::Val( clickOptions_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MenuState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { _btnPlay=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_btnOptions") ) { _btnOptions=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11"));
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("_btnOptions","\x81","\xa9","\x6b","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MenuState_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnPlay),HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnOptions),HX_HCSTRING("_btnOptions","\x81","\xa9","\x6b","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuState_obj_sMemberFields[] = {
	HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11"),
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("_btnOptions","\x81","\xa9","\x6b","\x45"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("clickPlay","\x5c","\x9a","\x59","\x29"),
	HX_HCSTRING("clickOptions","\xf6","\x77","\x28","\xd2"),
	::String(null()) };

static void MenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MenuState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MenuState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

