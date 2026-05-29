#include <stdio.h>

union {
    double a;
    struct{
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} u;

int main(void) {
    printf("Size of struct type: %zu\n", sizeof(u));
    return 0;
}