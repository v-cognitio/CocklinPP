//
// Created by Stoorx on 23.04.2019.
//

#pragma once

#include "Object.h"

namespace cpp::lang {
    class String : public Object {
    public:
#pragma clang diagnostic push
#pragma ide diagnostic ignored "google-explicit-constructor"

        String(const native char *str);

#pragma clang diagnostic pop

        ~String() override = default;

        Bool Equals(const Object &o) override;

        Int GetHashCode() override;

        String &ToString() override;

        Object &MemberwiseClone() override;

        native const char *NativeString();

    protected:
        native long long mLenght;
        native char *mString;
    };

}
