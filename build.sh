#!/bin/bash

#Kernel build script by Daniel Jones (www.github.com/McSwaggens/)

echo "Kernel compiler script by Daniel Jones (www.github.com/McSwaggens/)"

CXX=g++

echo "Compiling bootstrap..."

nasm -f elf32 src/bootstrap.nasm -o bootstrap.o


echo "Compiling kernel..."

cmake .
make -j $@

echo "Linking kernel and bootstrap..."

ld -m elf_i386 -T link.ld -o kernel bootstrap.o libkernel.a

echo "Cleaning up..."

rm *.o

echo "Compilation finished..."
