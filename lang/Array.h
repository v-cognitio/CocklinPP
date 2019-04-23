//
// Created by Stoorx on 23.04.2019.
//

#pragma once

#include "typesStub.h"

template<class T>
class Array {
public:
    Array(Int len, T &(*func)(Int)) {
        mLenght = len;
        mArray = new T *[len];
        for (int i = 0; i < len; ++i) {
            mArray[i] = &func(i);
        }
    }

    T &operator[](const Int index) {
        return *mArray[index];
    }

    void forEach(void(*func)(T &)) {
        for (int i = 0; i < mLenght; ++i) {
            func(*mArray[i]);
        }
    }

protected:
    Int mLenght;
    T **mArray;
};