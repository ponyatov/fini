#include "main.hpp"

int main(int argc, char* argv[]) {
    init(argc, argv);
    for (int i = 1; i < argc; i++) {
        arg(i, argv[i]);
        yyfile = argv[i];
        assert(yyin = fopen(yyfile, "r"));
        yyparse();
        fclose(yyin);
    }
    return fini();
}

void init(int& argc, char* argv[]) { arg(0, argv[0]); }

int fini(int err) { return err; }

void arg(int argc, char* argv) {  //
    printf("argv[%i] = <%s>\n", argc, argv);
}
