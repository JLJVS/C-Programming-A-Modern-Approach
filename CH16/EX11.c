#include <stdio.h>

struct {
    double a;
    union {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} s;

int main(void) {
    printf("Size of struct type: %zu\n", sizeof(s));
    return 0;
}