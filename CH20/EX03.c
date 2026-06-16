#include <stdio.h>

#define M(x,y) ((x)  ^= (y), (y)^=(x), (x)^=(y))
// swaps x and y 

/*
x = x ^ y
y = y ^ x
x = x ^ y
*/

int main() {
    int a = 5, b = 10;
    int c = -3, d = 7;
    int e = 42, f = 42;   // identical values (still safe)

    printf("=== Swap 1 ===\n");
    printf("Before: a=%d, b=%d\n", a, b);
    M(a, b);
    printf("After:  a=%d, b=%d\n\n", a, b);

    printf("=== Swap 2 ===\n");
    printf("Before: c=%d, d=%d\n", c, d);
    M(c, d);
    printf("After:  c=%d, d=%d\n\n", c, d);

    printf("=== Swap 3 ===\n");
    printf("Before: e=%d, f=%d\n", e, f);
    M(e, f);
    printf("After:  e=%d, f=%d\n\n", e, f);

    return 0;
}