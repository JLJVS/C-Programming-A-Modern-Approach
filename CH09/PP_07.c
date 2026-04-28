#include <stdio.h>

long power(int base, int n){

    if (n == 0) return (long) 1;

    if (n==1){return (long) base;}

    if (n%2==0){
        return power(base, n/2)*power(base, n/2);
    } else {
        return base * power(base, n-1);
    }
}

int main(void)
{
    for (int base = 2; base <= 5; base++){
        for (int n = 0; n <= 5; n++){
            printf("base = %d, n = %d, res = %ld\n", base, n, power(base, n));
        }
    }


    return 0;
}