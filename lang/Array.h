//
// Created by Stoorx on 23.04.2019.
//

#pragma once

#include <initializer_list>
#include "typesStub.h"

template<class T>
class Array {
public:
    template<class InitLambda>
    Array(Int len, InitLambda func) {
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

template<class T>
Array<T> arrayOf(std::initializer_list<T> l){
    return Array<T>((Int)l.size(), [&l](const Int i) -> T & {
        T* temp = new T(*(l.begin() + i));
        return *temp;
    });
}