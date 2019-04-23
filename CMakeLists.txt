cmake_minimum_required(VERSION 3.13)
project(CppFramework)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppFramework main.cpp lang/Object.h lang/typesStub.h lang/Bool.h lang/Object.cpp lang/declarations.h lang/Bool.cpp lang/String.cpp lang/String.h native/Helpers.cpp native/Helpers.h lang/AutoReference.h)
include_directories(${PROJECT_SOURCE_DIR})