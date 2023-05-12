#pragma once
#include "main.hpp"

/// @defgroup gc gc
/// @brief    garbage collector

/// @ingroup metal
/// @brief   Graph node
struct Object {
    /// @name fields

    /// scalar: object name, string/number value
    string value;
    /// ordered container = vector = stack = queue = AST subtrees
    vector<Object*> nest;
    /// associative array: map = AST attributes
    map<string, Object*> slot;

    /// @name garbage collector

    /// @ingroup gc
    /// @{
    size_t ref;           ///< ref counter
    static Object* pool;  ///< global object pool /linked list/
    Object* next;         ///< next item in @ref pool list
    static void gc();     ///< garbage collection
    /// @}

    /// @name constructor

    Object();              ///< construct with empty @ref value
    Object(string value);  ///< construct with name
    virtual ~Object();     ///< clean up for nested elements

    /// @name dump/stringify

    virtual string tag();             /// object class/type tag
    virtual string val();             /// object value
    string pad(usize depth);          /// left padding for dumps
    string head(string prefix = "");  /// `<T:V>` header
    string dump(usize depth = 0,
                string prefix = "");  /// full text tree dump
};
