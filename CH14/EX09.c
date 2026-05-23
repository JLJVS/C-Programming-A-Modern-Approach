#include <stdio.h>

#define CHECK(x, y, n) ( ((x) >= 0 && (x) < (n) && (y) >= 0 && (y) < (n)) ? 1 : 0 )

#define MEDIAN(x, y, z) ( \
    ((x) > (y)) ? ( \
        ((y) > (z)) ? (y) : ((x) > (z) ? (z) : (x)) \
    ) : ( \
        ((x) > (z)) ? (x) : ((y) > (z) ? (z) : (y)) \
    ) \
)

#define POLYNOMIAL(x) ( \
    3*(x)*(x)*(x)*(x)*(x) + \
    2*(x)*(x)*(x)*(x)     - \
    5*(x)*(x)*(x)         - \
    (x)*(x)               + \
    7*(x)                 - 6 \
)


int main(void)
{
    int x = 5, y = 3, n1 = 10, n2= 4;

    printf("x=%d, y=%d, n=%d, check(x,y,n) = %d\n", x, y, n1, CHECK(x,y,n1));
    printf("x=%d, y=%d, n=%d, check(x,y,n) = %d\n", x, y, n2, CHECK(x,y,n2));

    printf("x=%d, y=%d, z=%d, median(x,y,z) = %d\n", x, y, n1, MEDIAN(x,y,n1));
    printf("x=%d, y=%d, z=%d, median(x,y,z) = %d\n", x, y, n2, MEDIAN(x,y,n2));

    printf("x=%d, polynomial(x) = %d\n", x, POLYNOMIAL(x));
    printf("x=%d, polynomial(x) = %d\n", y, POLYNOMIAL(y));
    return 0;
}