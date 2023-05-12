#pragma once
#include "main.hpp"

/// @defgroup skelex skelex
/// @brief lexical skeleton
/// @{
extern char* yyfile;
extern FILE* yyin;
extern int yyparse();
extern void yyerror(string msg);
/// @}
