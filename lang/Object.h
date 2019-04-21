//
// Created by Stoorx on 21.04.2019.
//

#pragma once

#include <lang/typesStub.h>

namespace cpp::lang {
    class Object {
    public:
        Object();

        virtual Bool Equals(Object &o) {
            return (this == &o);
        }

        virtual Int GetHashCode() {
            return reinterpret_cast<Long>(this);
        }

    };
}
