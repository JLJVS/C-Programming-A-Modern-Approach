#include <stdio.h>
#include <stdlib.h>

int sum(int (*f)(int), int start, int end){

    int total = 0;
    for (int i = start; i <= end; i++){
        total += (*f)(i);
    }
    return total;
}

int double_fn(int x){
    return 2*x;
}

int poly_fn(int x){
    return 3*x*x - 2*x + 1;
}

int main(void)
{
    /* -------- Example 1: doubling function -------- */
    int s1 = 1, e1 = 5;
    int result1 = sum(double_fn, s1, e1);
    printf("Sum of 2x from %d to %d = %d\n", s1, e1, result1);

    /* -------- Example 2: quadratic polynomial -------- */
    int s2 = -2, e2 = 3;
    int result2 = sum(poly_fn, s2, e2);
    printf("Sum of 3x^2 - 2x + 1 from %d to %d = %d\n", s2, e2, result2);

    /* -------- Example 3: another range with doubling -------- */
    int s3 = 10, e3 = 15;
    int result3 = sum(double_fn, s3, e3);
    printf("Sum of 2x from %d to %d = %d\n", s3, e3, result3);

    return 0;
}