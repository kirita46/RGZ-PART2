cmake_minimum_required(VERSION 3.28)
project(prog_rgz_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(prog_rgz_cpp main.cpp
        SetterUtil.cpp
        SetterUtil.h
        WhiteGoods.cpp
        WhiteGoods.h
        TV.cpp
        TV.h
        Menu.cpp
        Menu.h
        Radio.cpp
        Radio.h)
