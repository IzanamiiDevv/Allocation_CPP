@echo off
g++ -o CPP_Program main.test.cpp
gcc -o C_Program main.test.c

echo C++ : begin.
echo --------------------
CPP_Program
echo --------------------
echo C++ : end.

echo C : begin.
echo --------------------
C_Program
echo --------------------
echo C : end.