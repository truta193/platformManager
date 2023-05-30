cmake_minimum_required(VERSION 3.25)
project(platformManager C)

set(CMAKE_C_STANDARD 11)

add_executable(platformManager main.c platformManager.c platformManager.h)
