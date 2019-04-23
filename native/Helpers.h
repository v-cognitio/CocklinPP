//
// Created by Stoorx on 23.04.2019.
//

#ifndef CPPFRAMEWORK_HELPERS_H
#define CPPFRAMEWORK_HELPERS_H


#include <lang/typesStub.h>

class Helpers {
public:
    static long long StringLenght(const native char *);

    static void StringCopy(const native char *src, native char *dst, long long len);
};


#endif //CPPFRAMEWORK_HELPERS_H
