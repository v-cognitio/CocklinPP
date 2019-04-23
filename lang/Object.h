//
// Created by Stoorx on 21.04.2019.
//

#pragma once

#include <lang/typesStub.h>
#include "declarations.h"


namespace cpp::lang {
    Object &Object();
    class Object {
    public:

        virtual ~Object() = default;

        virtual Bool Equals(const Object &o);

        virtual Int GetHashCode();

        virtual String &ToString();

        // virtual Type GetType()
        virtual Object &MemberwiseClone();

        static Bool ReferenceEquals(const Object &first, const Object &second);


    protected:
        Object() = default;

        friend Object &Object();
    };


}
