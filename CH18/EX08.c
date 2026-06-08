#include <stdio.h>

/*
a) char (*x[10]) (int);
x is an array of 10 pointers
each pointer points to a function taking an int
each function returns a char


b) int (*x(int))[5];
x is a function taking an it
it returns a pointer to an array of 5 ints


c) float *(*x(void))(int);
x is a function that takes no arugments
it returns a pointer to a function
the function takes an int
and returns a float


d) void (*x(int, void (*y)(int)))(int);
x is a function that returns void
x takes an int and a pointer to a function y
y takes an int and returns a void


*/