#include <stdio.h>

/*
a) char (*x[10]) (int);
x is an array of 10 pointers
each pointer points to a function taking an int
each function returns a char

-> 
typedef char(*FuncIntToChar)(int);
FuncIntToChar x[10];


b) int (*x(int))[5];
x is a function taking an it
it returns a pointer to an array of 5 ints

->
typedef int Array5Int[5];
typedef Array5Int *PtrToArray5Int;

PtrToArray5Int x (int);


c) float *(*x(void))(int);
x is a function that takes no arugments
it returns a pointer to a function
the function takes an int
and returns a float

->
typedef float *FloatPtr;
typedef FloatPtr (*FuncIntToFloatPtr)(int);

FuncIntToFloatPtr x(void);


d) void (*x(int, void (*y)(int)))(int);
x is a function that returns void
x takes an int and a pointer to a function y
y takes an int and returns a void

->
typedef void (*FuncIntToVoid)(int);

FuncIntToVoid x(int, FuncIntToVoid y);

*/