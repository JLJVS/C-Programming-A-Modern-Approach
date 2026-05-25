/*

a) Declare structure variables named c1, c2 and c3 each having members real and imaginary of type double

b) Modify the declaration in part (a) so that c1's member initially have the values 0.0 and 1.0 while c2 are 1.0 and 0.0 (c3 is not initalized)

c) Write statements that copy the member of c2 into c1. can this be done in one statement or does it require two?

d) Write statements that add the corresponding member of c1 and c2, storing the result in c3

*/

#include <stdio.h>

struct complex {
    double real;
    double imaginary;
};

int main(void)
{
    // b
    struct complex c1 = {0.0, 1.0};
    struct complex c2 = {1.0, 0.0};
    struct complex c3;

    printf("(b)\n");
    printf("c1 = (%f, %f)\n", c1.real, c1.imaginary);
    printf("c2 = (%f, %f)\n", c2.real, c2.imaginary);

    // c
    c1 = c2;

    printf("(c)\n");
    printf("c1 = (%f, %f)\n", c1.real, c1.imaginary);
    printf("c2 = (%f, %f)\n", c2.real, c2.imaginary);

    // d
    c3.real = c2.real + c1.real;
    c3.imaginary = c2.imaginary + c1.imaginary;

    printf("(d)\n");
    printf("c1 = (%f, %f)\n", c1.real, c1.imaginary);
    printf("c2 = (%f, %f)\n", c2.real, c2.imaginary);
    printf("c3 = (%f, %f)\n", c3.real, c3.imaginary);


    return 0;
}