cmake_minimum_required(VERSION 3.0)
project(kernel)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -nostdlib -w -m32")

file(GLOB_RECURSE SOURCES "src/*.cpp")

set (LD_FLAGS "-m elf_i386 -T link.ld")

add_library(kernel ${SOURCES})
