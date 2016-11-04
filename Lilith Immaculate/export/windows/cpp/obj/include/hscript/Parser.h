// Generated by Haxe 3.3.0
#ifndef INCLUDED_hscript_Parser
#define INCLUDED_hscript_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,GenericStack_hscript_Token)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS1(hscript,CType)
HX_DECLARE_CLASS1(hscript,Const)
HX_DECLARE_CLASS1(hscript,Error)
HX_DECLARE_CLASS1(hscript,Expr)
HX_DECLARE_CLASS1(hscript,Parser)
HX_DECLARE_CLASS1(hscript,Token)

namespace hscript{


class HXCPP_CLASS_ATTRIBUTES Parser_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hscript.Parser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hscript.Parser"); }
		static hx::ObjectPtr< Parser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Parser","\xff","\x10","\x1d","\x22"); }

		static void __boot();
		static Int p1;
		static Int readPos;
		static Int tokenMin;
		static Int tokenMax;
		Int line;
		::String opChars;
		::String identChars;
		 ::haxe::ds::StringMap opPriority;
		 ::haxe::ds::StringMap opRightAssoc;
		 ::haxe::ds::StringMap unops;
		Bool allowJSON;
		Bool allowTypes;
		 ::haxe::io::Input input;
		Int _hx_char;
		::Array< Bool > ops;
		::Array< Bool > idents;
		Int uid;
		 ::haxe::ds::GenericStack_hscript_Token tokens;
		void error(::hx::EnumBase err,Int pmin,Int pmax);
		::Dynamic error_dyn();

		void invalidChar(Int c);
		::Dynamic invalidChar_dyn();

		::hx::EnumBase parseString(::String s);
		::Dynamic parseString_dyn();

		::hx::EnumBase parse( ::haxe::io::Input s);
		::Dynamic parse_dyn();

		 ::Dynamic unexpected(::hx::EnumBase tk);
		::Dynamic unexpected_dyn();

		void push(::hx::EnumBase tk);
		::Dynamic push_dyn();

		void ensure(::hx::EnumBase tk);
		::Dynamic ensure_dyn();

		::hx::EnumBase expr(::hx::EnumBase e);
		::Dynamic expr_dyn();

		Int pmin(::hx::EnumBase e);
		::Dynamic pmin_dyn();

		Int pmax(::hx::EnumBase e);
		::Dynamic pmax_dyn();

		::hx::EnumBase mk(::hx::EnumBase e, ::Dynamic pmin, ::Dynamic pmax);
		::Dynamic mk_dyn();

		Bool isBlock(::hx::EnumBase e);
		::Dynamic isBlock_dyn();

		::hx::EnumBase parseFullExpr();
		::Dynamic parseFullExpr_dyn();

		::hx::EnumBase parseObject( ::Dynamic p1);
		::Dynamic parseObject_dyn();

		::hx::EnumBase parseExpr();
		::Dynamic parseExpr_dyn();

		::hx::EnumBase mapCompr(::String tmp,::hx::EnumBase e);
		::Dynamic mapCompr_dyn();

		::hx::EnumBase makeUnop(::String op,::hx::EnumBase e);
		::Dynamic makeUnop_dyn();

		::hx::EnumBase makeBinop(::String op,::hx::EnumBase e1,::hx::EnumBase e);
		::Dynamic makeBinop_dyn();

		::hx::EnumBase parseStructure(::String id);
		::Dynamic parseStructure_dyn();

		::hx::EnumBase parseExprNext(::hx::EnumBase e1);
		::Dynamic parseExprNext_dyn();

		::hx::EnumBase parseType();
		::Dynamic parseType_dyn();

		::hx::EnumBase parseTypeNext(::hx::EnumBase t);
		::Dynamic parseTypeNext_dyn();

		::Array< ::Dynamic> parseExprList(::hx::EnumBase etk);
		::Dynamic parseExprList_dyn();

		void incPos();
		::Dynamic incPos_dyn();

		Int readChar();
		::Dynamic readChar_dyn();

		::String readString(Int until);
		::Dynamic readString_dyn();

		::hx::EnumBase token();
		::Dynamic token_dyn();

		::hx::EnumBase tokenComment(::String op,Int _hx_char);
		::Dynamic tokenComment_dyn();

		::String constString(::hx::EnumBase c);
		::Dynamic constString_dyn();

		::String tokenString(::hx::EnumBase t);
		::Dynamic tokenString_dyn();

};

} // end namespace hscript

#endif /* INCLUDED_hscript_Parser */ 
