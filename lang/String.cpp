//
// Created by Stoorx on 23.04.2019.
//

#include <native/Helpers.h>
#include "String.h"
#include "Object.h"
#include "Bool.h"


cpp::lang::Bool cpp::lang::String::Equals(const class cpp::lang::Object &o) {
    return Object::Equals(o);
}

Int cpp::lang::String::GetHashCode() {
    return Object::GetHashCode();
}

cpp::lang::String &cpp::lang::String::ToString() {
    return Object::ToString();
}

class cpp::lang::Object &cpp::lang::String::MemberwiseClone() {
    return Object::MemberwiseClone();
}

cpp::lang::String::String(const native char *str) {
    mLenght = Helpers::StringLenght(str);
    mString = new native char[mLenght];
    Helpers::StringCopy(str, mString, mLenght);
}

const char *cpp::lang::String::NativeString() {
    return mString;
}
