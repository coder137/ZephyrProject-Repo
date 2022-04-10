# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(foo)
set(SOURCES main.c)
find_package(ZephyrUnittest REQUIRED HINTS $ENV{ZEPHYR_BASE})

message("FOO ${CMAKE_CURRENT_SOURCE_DIR}")

target_include_directories(testbinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_sources(testbinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../src/foo.c)
target_compile_options(testbinary PRIVATE -fprofile-abs-path)
target_link_options(testbinary PRIVATE -fprofile-abs-path)
