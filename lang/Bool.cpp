//
// Created by Stoorx on 23.04.2019.
//

#include "declarations.h"
#include "Bool.h"
#include "Object.h"
#include "String.h"

using namespace cpp::lang;

class String &cpp::lang::Bool::ToString() {
    return mValue ? String("true") : String("false");
}

Int cpp::lang::Bool::GetHashCode() {
    return mValue;
}

Bool cpp::lang::Bool::Equals(const Object &o) {
    return Object::Equals(o);
}
