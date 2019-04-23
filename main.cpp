#include <iostream>
#include <lang/Object.h>
#include <lang/String.h>

#include <native/Helpers.h>
#include <lang/Array.h>

using namespace cpp::lang;

void println(class Object &o) {
    std::cout << o.ToString().NativeString() << std::endl;
}

int main() {

    auto o = Object();
    println(o);


    Array<class Object> arr(5, [](Int index) -> class Object & {
        if (index % 3 == 0)
            return String("My awesome String");
        else
            return Object();
    });


    arr.forEach([](class Object &it) {
        println(it);
    });
    return 0;
}