#include <stdio.h>

void f(int x){
    long res = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6;
    printf("f(%d) = %ld", x, res);
}

int main(void)
{
    int x;
    printf("Please enter a value of x: ");
    scanf("%d", &x);
    f(x);



    return 0;
}