#include <stdio.h>
/*
    int (*f(float (*(long), char *)))(double);

    // f is afunction that takes one argument -> a pointer to a function
    // function takes -> long ,char *
    // function returns -> float
    // f returns a pointer to a function that takes a double and returns an int


    return 0;
*/

/* ---------------------------------------------------------

   1)  float func(long, char*)
       A function taking (long, char*) → returning float
   --------------------------------------------------------- */
float sample_lc(long x, char *s) {
    printf("sample_lc called with (%ld, \"%s\")\n", x, s);
    return (float)(x + s[0]);
}

/* ---------------------------------------------------------
   2)  int func(double)
       A function taking (double) → returning int
   --------------------------------------------------------- */
int sample_d(double d) {
    printf("sample_d called with (%f)\n", d);
    return (int)d * 2;
}

/* ---------------------------------------------------------
   3)  The monster declaration:
       int (*f(float (*(long), char *)))(double);

       Meaning:
       f takes a pointer to a function (long,char*)→float
       and returns a pointer to a function (double)→int
   --------------------------------------------------------- */
int (*f(float (*p)(long, char *)))(double)
{
    printf("f was called — returning pointer to sample_d\n");
    return sample_d;
}

/* ---------------------------------------------------------
   4)  main() demonstrating the full call chain
   --------------------------------------------------------- */
int main(void)
{
    /* Step 1: call f with sample_lc */
    int (*returned_func)(double) = f(sample_lc);

    /* Step 2: call the returned function */
    int result = returned_func(3.14);

    printf("Final result = %d\n", result);

    return 0;
}
