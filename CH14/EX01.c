#include <stdio.h>

// a
#define CUBE(x) ((x)*(x)*(x))

// b
#define REM4(n) ((n) % 4)

// c
#define PROD_LT_100( x, y) (((x)*(y)) < 100 ? 1 : 0)


int main(void)
{
    int a = 3;
    int n = 13;
    int x = 8, y1 = 99, y2=7;

    // a
    printf("Cube(%d) = %d\n", a, CUBE(a));
    // b 
    printf("Remainder after division by 4: REM4(%d) = %d\n", n, REM4(n));
    //c
    printf("PROD_LT_100(%d, %d) = %d\n", x, y1, PROD_LT_100(x,y1));
    printf("PROD_LT_100(%d, %d) = %d\n", x, y2, PROD_LT_100(x,y2));
    
    return 0;
}