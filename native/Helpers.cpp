//
// Created by Stoorx on 23.04.2019.
//

#include "Helpers.h"

native long long Helpers::StringLenght(const native char *str) {
    long long count = 0;
    while (count++, *str++ != '\0');
    return count - 1;
}

native void Helpers::StringCopy(const native char *src, native char *dst, native long long len) {
    for (auto i = len; i != 0; --i) {
        *dst++ = *src++;
    }
}
