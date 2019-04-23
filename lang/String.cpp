//
// Created by Stoorx on 23.04.2019.
//

#include <native/Helpers.h>
#include "String.h"
#include "Object.h"
#include "Bool.h"

using namespace cpp::lang;

Bool String::Equals(const class cpp::lang::Object &o) {
    return Object::Equals(o);
}

Int String::GetHashCode() {
    return Object::GetHashCode();
}

class String &String::ToString() {
    return *this;
}

class Object &String::MemberwiseClone() {
    return Object::MemberwiseClone();
}

String::String(const native char *str) {
    mLenght = Helpers::StringLenght(str);
    mString = new native char[mLenght];
    Helpers::StringCopy(str, mString, mLenght);
}

const char *String::NativeString() {
    return mString;
}

class String &cpp::lang::String(const native char *str) {
    return *new class String(str);
}
