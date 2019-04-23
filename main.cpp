#include <iostream>
#include <lang/Object.h>
#include <lang/String.h>

#include <native/Helpers.h>

using namespace cpp::lang;

void test(bool cond) {
    static int testCounter = 0;
    testCounter++;
    if (cond) {
        std::cout << testCounter << ": OK\n";
    } else {
        std::cout << testCounter << ": FAIL\n";
    }
}

void println(class Object &o) {
    std::cout << o.ToString().NativeString();
}

int main() {

    test(Helpers::StringLenght("123456\0") == 6);
    test(Helpers::StringLenght("123456") == 6);
    test(Helpers::StringLenght("sadlkv") == 6);
    test(Helpers::StringLenght("123456sda\nasf") == 13);

    char *src = "123456";
    char *dst = new char[50];
    Helpers::StringCopy(src, dst, 10);
    std::cout << dst << "\n";


    auto o = Object();

    println(o);

    return 0;
}