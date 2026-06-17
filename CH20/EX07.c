#include <stdio.h>

unsigned int rotate_left(unsigned int i, int n)
{
    return i << n | i >> (8-n);
}

unsigned int rotate_right(unsigned int i, int n)
{
    return i >> n | i << (8-n);
}

int main(void)
{
    unsigned int value = 0x96;   // example 8‑bit value: 150 decimal
    int n = 3;                   // rotate by 3 bits

    unsigned int left  = rotate_left(value, n) & 0xFF;
    unsigned int right = rotate_right(value, n) & 0xFF;

    printf("Value:        0x%02X (%u)\n", value, value);
    printf("Rotate left:  0x%02X (%u)\n", left, left);
    printf("Rotate right: 0x%02X (%u)\n", right, right);

    return 0;
}