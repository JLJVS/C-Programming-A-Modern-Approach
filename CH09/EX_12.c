#include <stdio.h>

double inner_product( double a[], double b[], int n){

    double total = 0;
    for (int i = 0; i < n; i++){
        total += a[i]*b[i];
    }
    return total;
}

int main(void){

    double a[5] = {1,2,3,4,5};
    double b[5] = {6, 7, 8, 9, 10};
    int n = 5;

    printf("total = %.2f", inner_product(a, b, n));
    return 0;
}