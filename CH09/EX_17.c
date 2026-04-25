#include <stdio.h>

int fact(int n)
{
    if (n <= 1){
        return 1;
    }
    int total = 1; 

    for (int i = n; i > 1; i--){
        total *= i;
    }
    return total;
}

int main(void)
{
    int n = 6;
    printf("Factorial of %d: %d\n", n, fact(n));

    return 0;
}