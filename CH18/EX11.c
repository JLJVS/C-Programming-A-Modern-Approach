#include <stdio.h>

int main(void)
{   
    // return a pointer to an array and define a size for the array
    int (*f(int))[10];
    // returns a pointer function instead of a function
    int (*g(int))(int);
    // a is an array of 10 pointers to functions taking an int and returns an int
    int (*a[10])(int);


    return 0;
}