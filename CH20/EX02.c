#include <stdio.h>


int main(void)
{
    unsigned short i = 12;

    printf("%u\n", i);          // 0x1100
    printf("%u\n", i ^ 8 );     // 0x1100 ^ 0x1000 = 0x0100



    return 0;
}