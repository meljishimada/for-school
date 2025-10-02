cmake_minimum_required(VERSION 3.10) # 4.0 n'existe pas, 3.10 ou + suffit
project(for_school)

set(CMAKE_CXX_STANDARD 14)

add_executable(for_school
        main.cpp
        vecteur.cpp
       #Test/mesTests.cpp
)
include(FetchContent) # utilise ton module FetchContent
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.12.x
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(Test)

