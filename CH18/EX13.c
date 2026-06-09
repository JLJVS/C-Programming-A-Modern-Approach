#include <stdio.h>

#define PI 3.14159

int main(void)
{   
    // a) char c = 65;
    char c = 65;
    printf("%d\n", c);
    // b) static int i = 5, j = i*i;
    // static int i = 5, j = i*i;   
    // i is not constant so not allowed
    // c) double d = 2 * PI;
    double d = 2 * PI;
    printf("%f\n", d);
    // d) double angles [] = {0, PI/2, PI, 3*pi/2};
    double angles [] = {0, PI/2, PI, 3*PI/2};
    for ( int i = 0; i < 4; i++){
        printf("%f ", angles[i]);
    }
    printf("\n");


    return 0;
}