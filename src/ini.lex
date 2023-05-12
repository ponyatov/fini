%{
    #include "main.hpp"
    #include "ini.parser.hpp"

    char* yyfile = nullptr;

    #define TOKEN(C, X)               \
        {                             \
            yylval.o = new C(yytext); \
            return X;                 \
        }
%}

%option noyywrap yylineno

%%
#.*                     {}                      // line comment
[ \t\r\n\f]+            {}                      // drop spaces
[_a-zA-Z][_a-zA-Z0-9]*  TOKEN(Sym,SYM)          // symbol
.                       {yyerror("");}          // undetected char error
