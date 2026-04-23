#include <stdio.h>

int gcd(int m, int n){
    int c;
    while (n != 0){
        c = n;
        if (m < n){
            n = m;
            m = c;
        }
        n = m%n;
        m = c;
    }
    return m;
}

int main(void)
{   
    int x = 455, y = 1375;
    printf("The greatest common denominator of x=%d and y=%d is %d", x, y, gcd(x, y));
    return 0;
}