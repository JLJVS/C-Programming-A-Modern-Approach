#include <stdio.h>

unsigned int f(unsigned int i, int m, int n)
{
    return (i >> (m+1-n)) & ~(~0 << n);
}

/*
a) What is the value of ~(~0 << n)?
let's start with ~0 << n
0 = 0x0000 -> ~0 = 0xFFFF
~0 << n -> 0xFFFC (this example has n=2)
~(~0 << n) = 0x0003
This creates a mask for the lowest n bits of 1's

b) What does this function do?
the left half i >> (m+1-n) shifts the input i to the right
and the right half creates a mask for values to keep from the right shifted i.

*/

void print_bits(unsigned int x)
{
    for (int i = 31; i >= 0; i--)
        putchar((x & (1u << i)) ? '1' : '0');
}

int main(void)
{
    unsigned int i = 0b1101011010110011;  // example input
    int m = 7;   // ending bit position
    int n = 4;   // number of bits to extract

    unsigned int result = f(i, m, n);

    printf("Input value (i):       ");
    print_bits(i);
    printf("\n");

    printf("Extracting %d bits ending at bit %d\n", n, m);

    printf("Result (binary):       ");
    print_bits(result);
    printf("\n");

    printf("Result (hex):          0x%X\n", result);

    return 0;
}