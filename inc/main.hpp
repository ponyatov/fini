#pragma once

// stdlib
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// STL
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <stack>
// using namespace std;

// readline
#include <readline/readline.h>
#include <readline/history.h>

// init
extern int main(int argc, char* argv[]);    /// program entry point
extern void init(int& argc, char* argv[]);  /// system initialize
extern int fini(int err = 0);               /// system finalize & exit
extern void arg(int argc, char* argv);      /// print command line argument

#ifndef QT_VERSION
#define string std::string
#define map std::map
#define vector std::vector
#define cout std::cout
#define cerr std::cerr
#define endl std::endl
#endif
#define usize size_t

#include "metaL.hpp"
#include "skelex.hpp"
