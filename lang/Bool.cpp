//
// Created by Stoorx on 23.04.2019.
//

#include "declarations.h"
#include "Bool.h"
#include "Object.h"

using namespace cpp::lang;

String &cpp::lang::Bool::ToString() {
    return Object::ToString();
}

Int cpp::lang::Bool::GetHashCode() {
    return Object::GetHashCode();
}

Bool cpp::lang::Bool::Equals(const Object &o) {
    return Object::Equals(o);
}
