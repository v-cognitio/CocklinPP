//
// Created by Stoorx on 23.04.2019.
//

#include "Object.h"
#include "Bool.h"
#include "String.h"

using namespace cpp::lang;

Bool Object::Equals(const Object &o) {
    return Bool(this == &o);
}

Int Object::GetHashCode() {
    return static_cast<Int>(reinterpret_cast<Long>(this));
}

class String &Object::ToString() {
    return *new class String("Object"); // TODO: add to GC
}

class Object &Object::MemberwiseClone() {
    return *this;
}

Bool Object::ReferenceEquals(const Object &first, const Object &second) {
    return (&first == &second);
}

class Object &cpp::lang::Object() {
    return *new class Object();
}