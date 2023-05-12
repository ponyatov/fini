#pragma once
#include "main.hpp"

struct Primitive : Object {
    Primitive(string value);
};
struct Sym : Primitive {
    Sym(string value);
};
