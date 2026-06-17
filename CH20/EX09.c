#include <stdio.h>

int count_ones(unsigned char ch){

    int ones = 0;
    for (int i=0;i<8;i++){
        ones += (ch >> i) & 0x1;
    }
    return ones;
}

int count_ones_no_loop(unsigned char ch)
{
    ch = (ch & 0x55) + ((ch >> 1) & 0x55);
    ch = (ch & 0x33) + ((ch >> 2) & 0x33);
    ch = (ch & 0x0F) + ((ch >> 4) & 0x0F);
    return (int)ch;
}

int main(void)
{
    unsigned char x = 0b10110100;  // example value
    int ones = count_ones(x);
    int ones_no_loop = count_ones_no_loop(x);

    printf("Value: 0x%02X\n", x);
    printf("Number of 1 bits: %d\n", ones);
    printf("Number of 1 bits: %d\n", ones_no_loop);
    return 0;
}