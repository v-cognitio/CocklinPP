//
// Created by Stoorx on 23.04.2019.
//

#pragma once

#include "Object.h"

namespace cpp::lang {
    class String &String(const native char *str);

    class String : public Object {
    public:
#pragma clang diagnostic push
#pragma ide diagnostic ignored "google-explicit-constructor"

        String(const native char *str);

#pragma clang diagnostic pop

        virtual ~String() override = default;

        virtual Bool Equals(const Object &o) override;

        virtual Int GetHashCode() override;

        virtual String &ToString() override;

        virtual Object &MemberwiseClone() override;

        virtual native const char *NativeString();

    protected:
        native long long mLenght;
        native char *mString;
    };

}
