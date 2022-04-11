# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(unit_testing)

target_sources(app PRIVATE src/main.c)

target_sources(app PRIVATE
    lib/foo/src/foo.c
    lib/bar/src/bar.c
)
target_include_directories(app PRIVATE
    lib/foo/include
    lib/bar/include
)
