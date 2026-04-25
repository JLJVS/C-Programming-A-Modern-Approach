#include <stdio.h>

int gcd( int m, int n){
    return (n == 0) ? m: gcd(n, m%n);
}

int main(void){
    int m = 24, n = 166;
    printf("m=%d, n=%d, gcd(m,n) = %d", m, n, gcd(m,n));
}