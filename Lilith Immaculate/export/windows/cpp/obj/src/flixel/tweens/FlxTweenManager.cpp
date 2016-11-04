// Generated by Haxe 3.3.0
#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif

namespace flixel{
namespace tweens{

void FlxTweenManager_obj::__construct(){
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","new",0x3916c2b2,"flixel.tweens.FlxTweenManager.new","flixel/tweens/FlxTween.hx",704,0x5d58d691)
            	HX_STACK_THIS(this)
HXLINE( 709)		this->_tweens = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 713)		super::__construct();
HXLINE( 714)		this->set_visible(false);
HXLINE( 715)		::flixel::FlxG_obj::signals->stateSwitched->add(this->clear_dyn());
            	}

Dynamic FlxTweenManager_obj::__CreateEmpty() { return new FlxTweenManager_obj; }

hx::ObjectPtr< FlxTweenManager_obj > FlxTweenManager_obj::__new()
{
	hx::ObjectPtr< FlxTweenManager_obj > _hx_result = new FlxTweenManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FlxTweenManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxTweenManager_obj > _hx_result = new FlxTweenManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::flixel::tweens::motion::QuadPath FlxTweenManager_obj::add_flixel_tweens_motion_QuadPath( ::flixel::tweens::motion::QuadPath Tween,hx::Null< Bool >  __o_Start){
Bool Start = __o_Start.Default(false);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_QuadPath",0xa68abf75,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_QuadPath","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tween,"Tween")
            	HX_STACK_ARG(Start,"Start")
HXLINE(1099)		Bool _hx_tmp = hx::IsNull( Tween );
HXDLIN(1099)		if (_hx_tmp) {
HXLINE(1100)			return null();
            		}
HXLINE(1102)		this->_tweens->push(Tween);
HXLINE(1104)		if (Start) {
HXLINE(1105)			Tween->start();
            		}
HXLINE(1106)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_QuadPath,return )

 ::flixel::tweens::motion::LinearPath FlxTweenManager_obj::add_flixel_tweens_motion_LinearPath( ::flixel::tweens::motion::LinearPath Tween,hx::Null< Bool >  __o_Start){
Bool Start = __o_Start.Default(false);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_LinearPath",0x58c1abd3,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_LinearPath","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tween,"Tween")
            	HX_STACK_ARG(Start,"Start")
HXLINE(1099)		Bool _hx_tmp = hx::IsNull( Tween );
HXDLIN(1099)		if (_hx_tmp) {
HXLINE(1100)			return null();
            		}
HXLINE(1102)		this->_tweens->push(Tween);
HXLINE(1104)		if (Start) {
HXLINE(1105)			Tween->start();
            		}
HXLINE(1106)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_LinearPath,return )

 ::flixel::tweens::motion::CircularMotion FlxTweenManager_obj::add_flixel_tweens_motion_CircularMotion( ::flixel::tweens::motion::CircularMotion Tween,hx::Null< Bool >  __o_Start){
Bool Start = __o_Start.Default(false);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_CircularMotion",0xdd77ac1e,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_CircularMotion","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tween,"Tween")
            	HX_STACK_ARG(Start,"Start")
HXLINE(1099)		Bool _hx_tmp = hx::IsNull( Tween );
HXDLIN(1099)		if (_hx_tmp) {
HXLINE(1100)			return null();
            		}
HXLINE(1102)		this->_tweens->push(Tween);
HXLINE(1104)		if (Start) {
HXLINE(1105)			Tween->start();
            		}
HXLINE(1106)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_CircularMotion,return )

 ::flixel::tweens::motion::CubicMotion FlxTweenManager_obj::add_flixel_tweens_motion_CubicMotion( ::flixel::tweens::motion::CubicMotion Tween,hx::Null< Bool >  __o_Start){
Bool Start = __o_Start.Default(false);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_CubicMotion",0x3bc2ad57,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_CubicMotion","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tween,"Tween")
            	HX_STACK_ARG(Start,"Start")
HXLINE(1099)		Bool _hx_tmp = hx::IsNull( Tween );
HXDLIN(1099)		if (_hx_tmp) {
HXLINE(1100)			return null();
            		}
HXLINE(1102)		this->_tweens->push(Tween);
HXLINE(1104)		if (Start) {
HXLINE(1105)			Tween->start();
            		}
HXLINE(1106)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_CubicMotion,return )

 ::flixel::tweens::motion::QuadMotion FlxTweenManager_obj::add_flixel_tweens_motion_QuadMotion( ::flixel::tweens::motion::QuadMotion Tween,hx::Null< Bool >  __o_Start){
Bool Start = __o_Start.Default(false);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_QuadMotion",0x4adc7406,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_QuadMotion","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tween,"Tween")
            	HX_STACK_ARG(Start,"Start")
HXLINE(1099)		Bool _hx_tmp = hx::IsNull( Tween );
HXDLIN(1099)		if (_hx_tmp) {
HXLINE(1100)			return null();
            		}
HXLINE(1102)		this->_tweens->push(Tween);
HXLINE(1104)		if (Start) {
HXLINE(1105)			Tween->start();
            		}
HXLINE(1106)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_QuadMotion,return )

 ::flixel::tweens::motion::LinearMotion FlxTweenManager_obj::add_flixel_tweens_motion_LinearMotion( ::flixel::tweens::motion::LinearMotion Tween,hx::Null< Bool >  __o_Start){
Bool Start = __o_Start.Default(false);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_LinearMotion",0x29edb3e4,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_LinearMotion","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tween,"Tween")
            	HX_STACK_ARG(Start,"Start")
HXLINE(1099)		Bool _hx_tmp = hx::IsNull( Tween );
HXDLIN(1099)		if (_hx_tmp) {
HXLINE(1100)			return null();
            		}
HXLINE(1102)		this->_tweens->push(Tween);
HXLINE(1104)		if (Start) {
HXLINE(1105)			Tween->start();
            		}
HXLINE(1106)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_LinearMotion,return )

 ::flixel::tweens::misc::ColorTween FlxTweenManager_obj::add_flixel_tweens_misc_ColorTween( ::flixel::tweens::misc::ColorTween Tween,hx::Null< Bool >  __o_Start){
Bool Start = __o_Start.Default(false);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_ColorTween",0xd92edebb,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_ColorTween","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tween,"Tween")
            	HX_STACK_ARG(Start,"Start")
HXLINE(1099)		Bool _hx_tmp = hx::IsNull( Tween );
HXDLIN(1099)		if (_hx_tmp) {
HXLINE(1100)			return null();
            		}
HXLINE(1102)		this->_tweens->push(Tween);
HXLINE(1104)		if (Start) {
HXLINE(1105)			Tween->start();
            		}
HXLINE(1106)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_ColorTween,return )

 ::flixel::tweens::misc::AngleTween FlxTweenManager_obj::add_flixel_tweens_misc_AngleTween( ::flixel::tweens::misc::AngleTween Tween,hx::Null< Bool >  __o_Start){
Bool Start = __o_Start.Default(false);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_AngleTween",0xb848364b,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_AngleTween","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tween,"Tween")
            	HX_STACK_ARG(Start,"Start")
HXLINE(1099)		Bool _hx_tmp = hx::IsNull( Tween );
HXDLIN(1099)		if (_hx_tmp) {
HXLINE(1100)			return null();
            		}
HXLINE(1102)		this->_tweens->push(Tween);
HXLINE(1104)		if (Start) {
HXLINE(1105)			Tween->start();
            		}
HXLINE(1106)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_AngleTween,return )

 ::flixel::tweens::misc::NumTween FlxTweenManager_obj::add_flixel_tweens_misc_NumTween( ::flixel::tweens::misc::NumTween Tween,hx::Null< Bool >  __o_Start){
Bool Start = __o_Start.Default(false);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_NumTween",0xa10a3838,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_NumTween","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tween,"Tween")
            	HX_STACK_ARG(Start,"Start")
HXLINE(1099)		Bool _hx_tmp = hx::IsNull( Tween );
HXDLIN(1099)		if (_hx_tmp) {
HXLINE(1100)			return null();
            		}
HXLINE(1102)		this->_tweens->push(Tween);
HXLINE(1104)		if (Start) {
HXLINE(1105)			Tween->start();
            		}
HXLINE(1106)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_NumTween,return )

 ::flixel::tweens::misc::VarTween FlxTweenManager_obj::add_flixel_tweens_misc_VarTween( ::flixel::tweens::misc::VarTween Tween,hx::Null< Bool >  __o_Start){
Bool Start = __o_Start.Default(false);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_VarTween",0x2ab94ff7,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_VarTween","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tween,"Tween")
            	HX_STACK_ARG(Start,"Start")
HXLINE(1099)		Bool _hx_tmp = hx::IsNull( Tween );
HXDLIN(1099)		if (_hx_tmp) {
HXLINE(1100)			return null();
            		}
HXLINE(1102)		this->_tweens->push(Tween);
HXLINE(1104)		if (Start) {
HXLINE(1105)			Tween->start();
            		}
HXLINE(1106)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_VarTween,return )

 ::flixel::tweens::FlxTween FlxTweenManager_obj::add_flixel_tweens_FlxTween( ::flixel::tweens::FlxTween Tween,hx::Null< Bool >  __o_Start){
Bool Start = __o_Start.Default(false);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_FlxTween",0xdb4849d9,"flixel.tweens.FlxTweenManager.add_flixel_tweens_FlxTween","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tween,"Tween")
            	HX_STACK_ARG(Start,"Start")
HXLINE(1099)		Bool _hx_tmp = hx::IsNull( Tween );
HXDLIN(1099)		if (_hx_tmp) {
HXLINE(1100)			return null();
            		}
HXLINE(1102)		this->_tweens->push(Tween);
HXLINE(1104)		if (Start) {
HXLINE(1105)			Tween->start();
            		}
HXLINE(1106)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_FlxTween,return )

 ::flixel::tweens::misc::VarTween FlxTweenManager_obj::tween( ::Dynamic Object, ::Dynamic Values,hx::Null< Float >  __o_Duration, ::Dynamic Options){
Float Duration = __o_Duration.Default(1);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","tween",0x3e92553d,"flixel.tweens.FlxTweenManager.tween","flixel/tweens/FlxTween.hx",740,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Object,"Object")
            	HX_STACK_ARG(Values,"Values")
            	HX_STACK_ARG(Duration,"Duration")
            	HX_STACK_ARG(Options,"Options")
HXLINE( 741)		HX_VARI(  ::flixel::tweens::misc::VarTween,tween) =  ::flixel::tweens::misc::VarTween_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));
HXLINE( 742)		tween->tween(Object,Values,Duration);
HXLINE( 743)		return this->add_flixel_tweens_misc_VarTween(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTweenManager_obj,tween,return )

 ::flixel::tweens::misc::NumTween FlxTweenManager_obj::num(Float FromValue,Float ToValue,hx::Null< Float >  __o_Duration, ::Dynamic Options, ::Dynamic TweenFunction){
Float Duration = __o_Duration.Default(1);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","num",0x3916d098,"flixel.tweens.FlxTweenManager.num","flixel/tweens/FlxTween.hx",775,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(FromValue,"FromValue")
            	HX_STACK_ARG(ToValue,"ToValue")
            	HX_STACK_ARG(Duration,"Duration")
            	HX_STACK_ARG(Options,"Options")
            	HX_STACK_ARG(TweenFunction,"TweenFunction")
HXLINE( 776)		HX_VARI(  ::flixel::tweens::misc::NumTween,tween) =  ::flixel::tweens::misc::NumTween_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));
HXLINE( 777)		tween->tween(FromValue,ToValue,Duration,TweenFunction);
HXLINE( 778)		return this->add_flixel_tweens_misc_NumTween(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,num,return )

 ::flixel::tweens::misc::AngleTween FlxTweenManager_obj::angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,hx::Null< Float >  __o_Duration, ::Dynamic Options){
Float Duration = __o_Duration.Default(1);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","angle",0x4803eea5,"flixel.tweens.FlxTweenManager.angle","flixel/tweens/FlxTween.hx",804,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Sprite,"Sprite")
            	HX_STACK_ARG(FromAngle,"FromAngle")
            	HX_STACK_ARG(ToAngle,"ToAngle")
            	HX_STACK_ARG(Duration,"Duration")
            	HX_STACK_ARG(Options,"Options")
HXLINE( 805)		HX_VARI(  ::flixel::tweens::misc::AngleTween,tween) =  ::flixel::tweens::misc::AngleTween_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));
HXLINE( 806)		tween->tween(FromAngle,ToAngle,Duration,Sprite);
HXLINE( 807)		return this->add_flixel_tweens_misc_AngleTween(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,angle,return )

 ::flixel::tweens::misc::ColorTween FlxTweenManager_obj::color( ::flixel::FlxSprite Sprite,hx::Null< Float >  __o_Duration,Int FromColor,Int ToColor, ::Dynamic Options){
Float Duration = __o_Duration.Default(1);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","color",0x6f7e1c35,"flixel.tweens.FlxTweenManager.color","flixel/tweens/FlxTween.hx",833,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Sprite,"Sprite")
            	HX_STACK_ARG(Duration,"Duration")
            	HX_STACK_ARG(FromColor,"FromColor")
            	HX_STACK_ARG(ToColor,"ToColor")
            	HX_STACK_ARG(Options,"Options")
HXLINE( 834)		HX_VARI(  ::flixel::tweens::misc::ColorTween,tween) =  ::flixel::tweens::misc::ColorTween_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));
HXLINE( 835)		tween->tween(Duration,FromColor,ToColor,Sprite);
HXLINE( 836)		return this->add_flixel_tweens_misc_ColorTween(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,color,return )

 ::flixel::tweens::motion::LinearMotion FlxTweenManager_obj::linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< Bool >  __o_UseDuration, ::Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
Bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","linearMotion",0x3e017969,"flixel.tweens.FlxTweenManager.linearMotion","flixel/tweens/FlxTween.hx",865,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Object,"Object")
            	HX_STACK_ARG(FromX,"FromX")
            	HX_STACK_ARG(FromY,"FromY")
            	HX_STACK_ARG(ToX,"ToX")
            	HX_STACK_ARG(ToY,"ToY")
            	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
            	HX_STACK_ARG(UseDuration,"UseDuration")
            	HX_STACK_ARG(Options,"Options")
HXLINE( 866)		HX_VARI(  ::flixel::tweens::motion::LinearMotion,tween) =  ::flixel::tweens::motion::LinearMotion_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));
HXLINE( 867)		tween->setObject(Object);
HXLINE( 868)		tween->setMotion(FromX,FromY,ToX,ToY,DurationOrSpeed,UseDuration);
HXLINE( 869)		return this->add_flixel_tweens_motion_LinearMotion(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxTweenManager_obj,linearMotion,return )

 ::flixel::tweens::motion::QuadMotion FlxTweenManager_obj::quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< Bool >  __o_UseDuration, ::Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
Bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","quadMotion",0x792d5e4b,"flixel.tweens.FlxTweenManager.quadMotion","flixel/tweens/FlxTween.hx",900,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Object,"Object")
            	HX_STACK_ARG(FromX,"FromX")
            	HX_STACK_ARG(FromY,"FromY")
            	HX_STACK_ARG(ControlX,"ControlX")
            	HX_STACK_ARG(ControlY,"ControlY")
            	HX_STACK_ARG(ToX,"ToX")
            	HX_STACK_ARG(ToY,"ToY")
            	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
            	HX_STACK_ARG(UseDuration,"UseDuration")
            	HX_STACK_ARG(Options,"Options")
HXLINE( 901)		HX_VARI(  ::flixel::tweens::motion::QuadMotion,tween) =  ::flixel::tweens::motion::QuadMotion_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));
HXLINE( 902)		tween->setObject(Object);
HXLINE( 903)		tween->setMotion(FromX,FromY,ControlX,ControlY,ToX,ToY,DurationOrSpeed,UseDuration);
HXLINE( 904)		return this->add_flixel_tweens_motion_QuadMotion(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC10(FlxTweenManager_obj,quadMotion,return )

 ::flixel::tweens::motion::CubicMotion FlxTweenManager_obj::cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,hx::Null< Float >  __o_Duration, ::Dynamic Options){
Float Duration = __o_Duration.Default(1);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","cubicMotion",0x943ebf72,"flixel.tweens.FlxTweenManager.cubicMotion","flixel/tweens/FlxTween.hx",936,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Object,"Object")
            	HX_STACK_ARG(FromX,"FromX")
            	HX_STACK_ARG(FromY,"FromY")
            	HX_STACK_ARG(aX,"aX")
            	HX_STACK_ARG(aY,"aY")
            	HX_STACK_ARG(bX,"bX")
            	HX_STACK_ARG(bY,"bY")
            	HX_STACK_ARG(ToX,"ToX")
            	HX_STACK_ARG(ToY,"ToY")
            	HX_STACK_ARG(Duration,"Duration")
            	HX_STACK_ARG(Options,"Options")
HXLINE( 937)		HX_VARI(  ::flixel::tweens::motion::CubicMotion,tween) =  ::flixel::tweens::motion::CubicMotion_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));
HXLINE( 938)		tween->setObject(Object);
HXLINE( 939)		tween->setMotion(FromX,FromY,aX,aY,bX,bY,ToX,ToY,Duration);
HXLINE( 940)		return this->add_flixel_tweens_motion_CubicMotion(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC11(FlxTweenManager_obj,cubicMotion,return )

 ::flixel::tweens::motion::CircularMotion FlxTweenManager_obj::circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,Bool Clockwise,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< Bool >  __o_UseDuration, ::Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
Bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","circularMotion",0xf22b9ce3,"flixel.tweens.FlxTweenManager.circularMotion","flixel/tweens/FlxTween.hx",970,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Object,"Object")
            	HX_STACK_ARG(CenterX,"CenterX")
            	HX_STACK_ARG(CenterY,"CenterY")
            	HX_STACK_ARG(Radius,"Radius")
            	HX_STACK_ARG(Angle,"Angle")
            	HX_STACK_ARG(Clockwise,"Clockwise")
            	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
            	HX_STACK_ARG(UseDuration,"UseDuration")
            	HX_STACK_ARG(Options,"Options")
HXLINE( 971)		HX_VARI(  ::flixel::tweens::motion::CircularMotion,tween) =  ::flixel::tweens::motion::CircularMotion_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));
HXLINE( 972)		tween->setObject(Object);
HXLINE( 973)		tween->setMotion(CenterX,CenterY,Radius,Angle,Clockwise,DurationOrSpeed,UseDuration);
HXLINE( 974)		return this->add_flixel_tweens_motion_CircularMotion(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC9(FlxTweenManager_obj,circularMotion,return )

 ::flixel::tweens::motion::LinearPath FlxTweenManager_obj::linearPath( ::flixel::FlxObject Object,::Array< ::Dynamic> Points,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< Bool >  __o_UseDuration, ::Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
Bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","linearPath",0x87129618,"flixel.tweens.FlxTweenManager.linearPath","flixel/tweens/FlxTween.hx",999,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Object,"Object")
            	HX_STACK_ARG(Points,"Points")
            	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
            	HX_STACK_ARG(UseDuration,"UseDuration")
            	HX_STACK_ARG(Options,"Options")
HXLINE(1000)		HX_VARI(  ::flixel::tweens::motion::LinearPath,tween) =  ::flixel::tweens::motion::LinearPath_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));
HXLINE(1002)		Bool _hx_tmp = hx::IsNotNull( Points );
HXDLIN(1002)		if (_hx_tmp) {
HXLINE(1004)			HX_VARI( Int,_g) = (int)0;
HXDLIN(1004)			while((_g < Points->length)){
HXLINE(1004)				HX_VARI(  ::flixel::math::FlxPoint,point) = Points->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN(1004)				++_g;
HXLINE(1006)				tween->addPoint(point->x,point->y);
            			}
            		}
HXLINE(1010)		tween->setObject(Object);
HXLINE(1011)		tween->setMotion(DurationOrSpeed,UseDuration);
HXLINE(1012)		return this->add_flixel_tweens_motion_LinearPath(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,linearPath,return )

 ::flixel::tweens::motion::QuadPath FlxTweenManager_obj::quadPath( ::flixel::FlxObject Object,::Array< ::Dynamic> Points,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< Bool >  __o_UseDuration, ::Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
Bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","quadPath",0xc1021e7a,"flixel.tweens.FlxTweenManager.quadPath","flixel/tweens/FlxTween.hx",1037,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Object,"Object")
            	HX_STACK_ARG(Points,"Points")
            	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
            	HX_STACK_ARG(UseDuration,"UseDuration")
            	HX_STACK_ARG(Options,"Options")
HXLINE(1038)		HX_VARI(  ::flixel::tweens::motion::QuadPath,tween) =  ::flixel::tweens::motion::QuadPath_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));
HXLINE(1040)		Bool _hx_tmp = hx::IsNotNull( Points );
HXDLIN(1040)		if (_hx_tmp) {
HXLINE(1042)			HX_VARI( Int,_g) = (int)0;
HXDLIN(1042)			while((_g < Points->length)){
HXLINE(1042)				HX_VARI(  ::flixel::math::FlxPoint,point) = Points->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN(1042)				++_g;
HXLINE(1044)				tween->addPoint(point->x,point->y);
            			}
            		}
HXLINE(1048)		tween->setObject(Object);
HXLINE(1049)		tween->setMotion(DurationOrSpeed,UseDuration);
HXLINE(1050)		return this->add_flixel_tweens_motion_QuadPath(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,quadPath,return )

void FlxTweenManager_obj::destroy(){
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","destroy",0x1585b04c,"flixel.tweens.FlxTweenManager.destroy","flixel/tweens/FlxTween.hx",1054,0x5d58d691)
            	HX_STACK_THIS(this)
HXLINE(1055)		this->super::destroy();
HXLINE(1056)		::flixel::FlxG_obj::signals->stateSwitched->remove(this->clear_dyn());
            	}


void FlxTweenManager_obj::update(Float elapsed){
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","update",0xdf5952f7,"flixel.tweens.FlxTweenManager.update","flixel/tweens/FlxTween.hx",1060,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE(1062)		HX_VARI( ::Array< ::Dynamic>,finishedTweens) = null();
HXLINE(1064)		{
HXLINE(1064)			HX_VARI( Int,_g) = (int)0;
HXDLIN(1064)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->_tweens;
HXDLIN(1064)			while((_g < _g1->length)){
HXLINE(1064)				HX_VARI(  ::flixel::tweens::FlxTween,tween) = _g1->__get(_g).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1064)				++_g;
HXLINE(1066)				if (!(tween->active)) {
HXLINE(1067)					continue;
            				}
HXLINE(1069)				tween->update(elapsed);
HXLINE(1070)				Bool _hx_tmp = tween->finished;
HXDLIN(1070)				if (_hx_tmp) {
HXLINE(1072)					Bool _hx_tmp1 = hx::IsNull( finishedTweens );
HXDLIN(1072)					if (_hx_tmp1) {
HXLINE(1073)						finishedTweens = ::Array_obj< ::Dynamic>::__new(0);
            					}
HXLINE(1074)					finishedTweens->push(tween);
            				}
            			}
            		}
HXLINE(1078)		Bool _hx_tmp2 = hx::IsNotNull( finishedTweens );
HXDLIN(1078)		if (_hx_tmp2) {
HXLINE(1080)			while((finishedTweens->length > (int)0)){
HXLINE(1082)				finishedTweens->shift().StaticCast<  ::flixel::tweens::FlxTween >()->finish();
            			}
            		}
            	}


 ::flixel::tweens::FlxTween FlxTweenManager_obj::remove( ::flixel::tweens::FlxTween Tween,hx::Null< Bool >  __o_Destroy){
Bool Destroy = __o_Destroy.Default(true);
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","remove",0x5cdc6932,"flixel.tweens.FlxTweenManager.remove","flixel/tweens/FlxTween.hx",1118,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tween,"Tween")
            	HX_STACK_ARG(Destroy,"Destroy")
HXLINE(1119)		Bool _hx_tmp = hx::IsNull( Tween );
HXDLIN(1119)		if (_hx_tmp) {
HXLINE(1120)			return null();
            		}
HXLINE(1122)		Tween->set_active(false);
HXLINE(1124)		if (Destroy) {
HXLINE(1125)			Tween->destroy();
            		}
HXLINE(1127)		{
HXLINE(1127)			HX_VARI( ::Array< ::Dynamic>,array) = this->_tweens;
HXDLIN(1127)			HX_VARI( Int,index) = array->indexOf(Tween,null());
HXDLIN(1127)			if ((index != (int)-1)) {
HXLINE(1127)				 ::flixel::tweens::FlxTween _hx_tmp1 = array->__get((array->length - (int)1)).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1127)				array[index] = _hx_tmp1;
HXDLIN(1127)				array->pop().StaticCast<  ::flixel::tweens::FlxTween >();
            			}
            		}
HXLINE(1129)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,remove,return )

void FlxTweenManager_obj::clear(){
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","clear",0x6d7d1c5f,"flixel.tweens.FlxTweenManager.clear","flixel/tweens/FlxTween.hx",1137,0x5d58d691)
            	HX_STACK_THIS(this)
HXLINE(1137)		while((this->_tweens->length > (int)0)){
HXLINE(1138)			 ::flixel::tweens::FlxTween _hx_tmp = this->_tweens->__get((int)0).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1138)			this->remove(_hx_tmp,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTweenManager_obj,clear,(void))

void FlxTweenManager_obj::completeAll(){
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","completeAll",0x990abe3a,"flixel.tweens.FlxTweenManager.completeAll","flixel/tweens/FlxTween.hx",1156,0x5d58d691)
            	HX_STACK_THIS(this)
HXLINE(1156)		HX_VARI( Int,_g) = (int)0;
HXDLIN(1156)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->_tweens;
HXDLIN(1156)		while((_g < _g1->length)){
HXLINE(1156)			HX_VARI(  ::flixel::tweens::FlxTween,tween) = _g1->__get(_g).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1156)			++_g;
HXLINE(1157)			Bool _hx_tmp;
HXDLIN(1157)			Bool _hx_tmp1;
HXDLIN(1157)			if ((((int)tween->type & (int)(int)2) == (int)0)) {
HXLINE(1157)				_hx_tmp1 = (((int)tween->type & (int)(int)4) == (int)0);
            			}
            			else {
HXLINE(1157)				_hx_tmp1 = false;
            			}
HXDLIN(1157)			if (_hx_tmp1) {
HXLINE(1157)				_hx_tmp = tween->active;
            			}
            			else {
HXLINE(1157)				_hx_tmp = false;
            			}
HXDLIN(1157)			if (_hx_tmp) {
HXLINE(1158)				tween->update(((Float)1.79e+308));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTweenManager_obj,completeAll,(void))

void FlxTweenManager_obj::forEach( ::Dynamic Function){
            	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","forEach",0xb5bdacfc,"flixel.tweens.FlxTweenManager.forEach","flixel/tweens/FlxTween.hx",1169,0x5d58d691)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Function,"Function")
HXLINE(1169)		HX_VARI( Int,_g) = (int)0;
HXDLIN(1169)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->_tweens;
HXDLIN(1169)		while((_g < _g1->length)){
HXLINE(1169)			HX_VARI(  ::flixel::tweens::FlxTween,tween) = _g1->__get(_g).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1169)			++_g;
HXLINE(1170)			Function(tween);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTweenManager_obj,forEach,(void))


FlxTweenManager_obj::FlxTweenManager_obj()
{
}

void FlxTweenManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTweenManager);
	HX_MARK_MEMBER_NAME(_tweens,"_tweens");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTweenManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tweens,"_tweens");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxTweenManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { return hx::Val( num_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return hx::Val( tween_dyn()); }
		if (HX_FIELD_EQ(inName,"angle") ) { return hx::Val( angle_dyn()); }
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color_dyn()); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { return hx::Val( _tweens); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return hx::Val( forEach_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quadPath") ) { return hx::Val( quadPath_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadMotion") ) { return hx::Val( quadMotion_dyn()); }
		if (HX_FIELD_EQ(inName,"linearPath") ) { return hx::Val( linearPath_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubicMotion") ) { return hx::Val( cubicMotion_dyn()); }
		if (HX_FIELD_EQ(inName,"completeAll") ) { return hx::Val( completeAll_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearMotion") ) { return hx::Val( linearMotion_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circularMotion") ) { return hx::Val( circularMotion_dyn()); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_FlxTween") ) { return hx::Val( add_flixel_tweens_FlxTween_dyn()); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_NumTween") ) { return hx::Val( add_flixel_tweens_misc_NumTween_dyn()); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_VarTween") ) { return hx::Val( add_flixel_tweens_misc_VarTween_dyn()); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadPath") ) { return hx::Val( add_flixel_tweens_motion_QuadPath_dyn()); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_ColorTween") ) { return hx::Val( add_flixel_tweens_misc_ColorTween_dyn()); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_AngleTween") ) { return hx::Val( add_flixel_tweens_misc_AngleTween_dyn()); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearPath") ) { return hx::Val( add_flixel_tweens_motion_LinearPath_dyn()); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadMotion") ) { return hx::Val( add_flixel_tweens_motion_QuadMotion_dyn()); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CubicMotion") ) { return hx::Val( add_flixel_tweens_motion_CubicMotion_dyn()); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearMotion") ) { return hx::Val( add_flixel_tweens_motion_LinearMotion_dyn()); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CircularMotion") ) { return hx::Val( add_flixel_tweens_motion_CircularMotion_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxTweenManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { _tweens=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTweenManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_tweens","\x47","\x85","\x9b","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxTweenManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTweenManager_obj,_tweens),HX_HCSTRING("_tweens","\x47","\x85","\x9b","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxTweenManager_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTweenManager_obj_sMemberFields[] = {
	HX_HCSTRING("add_flixel_tweens_motion_QuadPath","\xa3","\xdd","\xde","\xe6"),
	HX_HCSTRING("add_flixel_tweens_motion_LinearPath","\x81","\x31","\xfc","\x6c"),
	HX_HCSTRING("add_flixel_tweens_motion_CircularMotion","\xcc","\xa0","\x91","\x11"),
	HX_HCSTRING("add_flixel_tweens_motion_CubicMotion","\xe9","\x1f","\xbd","\xda"),
	HX_HCSTRING("add_flixel_tweens_motion_QuadMotion","\xb4","\xf9","\x16","\x5f"),
	HX_HCSTRING("add_flixel_tweens_motion_LinearMotion","\x12","\x81","\x17","\xa6"),
	HX_HCSTRING("add_flixel_tweens_misc_ColorTween","\xe9","\xfc","\x82","\x19"),
	HX_HCSTRING("add_flixel_tweens_misc_AngleTween","\x79","\x54","\x9c","\xf8"),
	HX_HCSTRING("add_flixel_tweens_misc_NumTween","\xe6","\xce","\x88","\x53"),
	HX_HCSTRING("add_flixel_tweens_misc_VarTween","\xa5","\xe6","\x37","\xdd"),
	HX_HCSTRING("add_flixel_tweens_FlxTween","\xeb","\x31","\x6d","\x84"),
	HX_HCSTRING("_tweens","\x47","\x85","\x9b","\x97"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("num","\x46","\xde","\x53","\x00"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("linearMotion","\xfb","\x45","\xd8","\xa1"),
	HX_HCSTRING("quadMotion","\x5d","\x82","\xa5","\x33"),
	HX_HCSTRING("cubicMotion","\x20","\x2b","\xe6","\x02"),
	HX_HCSTRING("circularMotion","\xf5","\x31","\xbc","\x12"),
	HX_HCSTRING("linearPath","\x2a","\xba","\x8a","\x41"),
	HX_HCSTRING("quadPath","\x0c","\xba","\x6e","\xd2"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("completeAll","\xe8","\x29","\xb2","\x07"),
	HX_HCSTRING("forEach","\xaa","\x29","\xbe","\xc4"),
	::String(null()) };

static void FlxTweenManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTweenManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTweenManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTweenManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTweenManager_obj::__mClass;

void FlxTweenManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.FlxTweenManager","\xc0","\x41","\x37","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxTweenManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxTweenManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTweenManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTweenManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTweenManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTweenManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
