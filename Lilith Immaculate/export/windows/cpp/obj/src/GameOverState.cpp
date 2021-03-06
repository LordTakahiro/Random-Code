// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_GameOverState
#include <GameOverState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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


void GameOverState_obj::__construct(Bool Win){
            	HX_STACK_FRAME("GameOverState","new",0x0e4d841d,"GameOverState.new","GameOverState.hx",25,0xd0ff2df3)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Win,"Win")
HXLINE(  26)		this->_win = Win;
HXLINE(  27)		super::__construct(null());
            	}

Dynamic GameOverState_obj::__CreateEmpty() { return new GameOverState_obj; }

hx::ObjectPtr< GameOverState_obj > GameOverState_obj::__new(Bool Win)
{
	hx::ObjectPtr< GameOverState_obj > _hx_result = new GameOverState_obj();
	_hx_result->__construct(Win);
	return _hx_result;
}

Dynamic GameOverState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GameOverState_obj > _hx_result = new GameOverState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void GameOverState_obj::create(){
            	HX_STACK_FRAME("GameOverState","create",0x7dd4e75f,"GameOverState.create","GameOverState.hx",30,0xd0ff2df3)
            	HX_STACK_THIS(this)
HXLINE(  33)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  38)		::String _hx_tmp;
HXDLIN(  38)		if (this->_win) {
HXLINE(  38)			_hx_tmp = HX_("You Win!",a6,8e,bd,58);
            		}
            		else {
HXLINE(  38)			_hx_tmp = HX_("Game Over!",9f,0d,f2,9a);
            		}
HXDLIN(  38)		this->_txtTitle =  ::flixel::text::FlxText_obj::__new((int)0,(int)20,(int)0,_hx_tmp,(int)22,null());
HXLINE(  39)		this->_txtTitle->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  40)		this->_txtTitle->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  41)		this->add(this->_txtTitle);
HXLINE(  43)		Float _hx_tmp1 = (((Float)::flixel::FlxG_obj::height / (Float)(int)2) - (int)18);
HXDLIN(  43)		this->_txtMessage =  ::flixel::text::FlxText_obj::__new((int)0,_hx_tmp1,(int)0,HX_("Lilith Has Consumed Your Soul...",8e,46,da,dc),(int)8,null());
HXLINE(  44)		this->_txtMessage->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  45)		this->_txtMessage->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  46)		this->add(this->_txtMessage);
HXLINE(  48)		Int _hx_tmp2 = (::flixel::FlxG_obj::height - (int)32);
HXDLIN(  48)		this->_btnMainMenu =  ::flixel::ui::FlxButton_obj::__new((int)0,_hx_tmp2,HX_("Main Menu",e6,3a,4e,c8),this->goMainMenu_dyn());
HXLINE(  49)		this->_btnMainMenu->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  50)		this->add(this->_btnMainMenu);
HXLINE(  52)		::flixel::FlxG_obj::camera->fade((int)-16777216,((Float).33),true,null(),null());
HXLINE(  54)		this->super::create();
            	}


void GameOverState_obj::goMainMenu(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_STACK_FRAME("GameOverState","goMainMenu",0x626126a3,"GameOverState.goMainMenu","GameOverState.hx",62,0xd0ff2df3)
HXLINE(  62)			HX_VARI(  ::flixel::FlxState,nextState) =  ::MenuState_obj::__new(null());
HXDLIN(  62)			Bool _hx_tmp = ::flixel::FlxG_obj::game->_state->switchTo(nextState);
HXDLIN(  62)			if (_hx_tmp) {
HXLINE(  62)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACK_FRAME("GameOverState","goMainMenu",0x626126a3,"GameOverState.goMainMenu","GameOverState.hx",61,0xd0ff2df3)
            	HX_STACK_THIS(this)
HXLINE(  61)		::flixel::FlxG_obj::camera->fade((int)-16777216,((Float).33),false, ::Dynamic(new _hx_Closure_0()),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameOverState_obj,goMainMenu,(void))


GameOverState_obj::GameOverState_obj()
{
}

void GameOverState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverState);
	HX_MARK_MEMBER_NAME(_win,"_win");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(_txtMessage,"_txtMessage");
	HX_MARK_MEMBER_NAME(_btnMainMenu,"_btnMainMenu");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_win,"_win");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(_txtMessage,"_txtMessage");
	HX_VISIT_MEMBER_NAME(_btnMainMenu,"_btnMainMenu");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GameOverState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_win") ) { return hx::Val( _win); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return hx::Val( _txtTitle); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"goMainMenu") ) { return hx::Val( goMainMenu_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_txtMessage") ) { return hx::Val( _txtMessage); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_btnMainMenu") ) { return hx::Val( _btnMainMenu); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GameOverState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_win") ) { _win=inValue.Cast< Bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_txtMessage") ) { _txtMessage=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_btnMainMenu") ) { _btnMainMenu=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOverState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_win","\x1d","\xed","\x25","\x3f"));
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("_txtMessage","\x56","\x6a","\xaf","\x27"));
	outFields->push(HX_HCSTRING("_btnMainMenu","\xf5","\xa2","\x35","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GameOverState_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(GameOverState_obj,_win),HX_HCSTRING("_win","\x1d","\xed","\x25","\x3f")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOverState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOverState_obj,_txtMessage),HX_HCSTRING("_txtMessage","\x56","\x6a","\xaf","\x27")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(GameOverState_obj,_btnMainMenu),HX_HCSTRING("_btnMainMenu","\xf5","\xa2","\x35","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GameOverState_obj_sStaticStorageInfo = 0;
#endif

static ::String GameOverState_obj_sMemberFields[] = {
	HX_HCSTRING("_win","\x1d","\xed","\x25","\x3f"),
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("_txtMessage","\x56","\x6a","\xaf","\x27"),
	HX_HCSTRING("_btnMainMenu","\xf5","\xa2","\x35","\xfb"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("goMainMenu","\xc0","\x38","\x30","\x4f"),
	::String(null()) };

static void GameOverState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOverState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameOverState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOverState_obj::__mClass,"__mClass");
};

#endif

hx::Class GameOverState_obj::__mClass;

void GameOverState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("GameOverState","\xab","\x31","\xa0","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GameOverState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GameOverState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameOverState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameOverState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameOverState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameOverState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

