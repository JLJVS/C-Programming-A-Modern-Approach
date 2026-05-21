#include <stdio.h>
#include <math.h>

#define DISP(fname, x) \
    printf("%s(%g) = %g\n", #fname, (x), fname(x))


#define DISP2(fname, x, y) \
    printf("%s(%d, %d) = %d\n", #fname, (x), (y), fname(x,y))

int product(int x, int y){
    return x*y;
}

int main(void)
{

    float x = 3.0;
    int a = 3, b = 5;
    DISP(sqrt, x);
    DISP2(product, a, b);
    return 0;
}