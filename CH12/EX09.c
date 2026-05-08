#include <stdio.h>

double inner_product( const double *a, const double *b, int n){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += *(a+i)* *(b+i);
    }
    return sum;
}

int main(void)
{
    double a[] = { .5, 1.5, 2.5}, b[] = { 2, 3, 4};
    double n = 3;

    printf("The product is %.2f", inner_product(a, b, n));
    return 0;
}