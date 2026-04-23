#include <stdio.h>

int check(int x, int y, int n){

    return (x > 0) && (x < n-1) && (y > 0) && (y < n -1);
}

int main(void)
{   
    int x = 1, y =1, n=1;

    printf("x=%d, y=%d, n=%d, check=%d\n", x, y, n, check(x, y, n));



    return 0;
}