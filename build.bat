@echo off
g++ -o CPP_Program main.test.cpp
gcc -o C_Program main.test.c

echo C++ : begin
CPP_Program
echo C++ : end

echo C : begin
C_Program
echo C : end