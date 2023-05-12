#include "main.hpp"

Object* Object::pool = nullptr;

Object::Object() {
    ref = 0;
    next = pool;
    pool = this;
}

Object::Object(string value) : Object() { this->value = value; }

Object::~Object() { pool = next; }
