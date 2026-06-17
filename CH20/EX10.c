#include <stdio.h>

unsigned int reverse_bits(unsigned int n){
    unsigned int reversed = 0;
    for (int i=0; i<32; i++){
        reversed <<= 1;
        reversed |= (n>>i)&1;
    }
    return reversed;
}

int main(void)
{
    unsigned int x = 0xF;
    unsigned int r = reverse_bits(x);

    printf("Original: 0x%08X\n", x);
    printf("Reversed: 0x%08X\n", r);

    return 0;
}