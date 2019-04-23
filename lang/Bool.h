//
// Created by Stoorx on 23.04.2019.
//


#pragma once

#include "Object.h"

namespace cpp::lang {
    struct Bool : public Object {
    public:
        ~Bool() override = default;

#pragma clang diagnostic push
#pragma ide diagnostic ignored "google-explicit-constructor"

        Bool(native bool value) {
            mValue = value;
        }

#pragma clang diagnostic pop

        Bool Equals(const Object &o) override;

        Int GetHashCode() override;

        class String &ToString() override;

    protected:
        bool mValue;
    };
}