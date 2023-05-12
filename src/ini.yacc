%{
    #include "main.hpp"
    #include "ini.lexer.hpp"

void yyerror(string msg) {
    cerr << "\n\n" << yyfile << ':' << yylineno << ' ' << msg \
    << " [" << yytext << "]\n\n";
    exit(-1);
}

%}

%defines %union { Object* o; }

%type<o> ex
%token<o> SYM

%%
syntax : | syntax ex  { cout << $2->dump() << endl; }

ex : SYM
