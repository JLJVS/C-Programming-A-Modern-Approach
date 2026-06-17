#include <stdio.h>

unsigned short swap_bytes(unsigned short i){
    unsigned short swapped;
    swapped = (i << 8) | (i >> 8);
    return swapped;
}

int main(void)
{
    unsigned short val;
    printf("Enter a hexadeicmal number (up to four digits): ");
    scanf("%hx", &val);

    unsigned short swapped = swap_bytes(val);
    printf("Original: 0x%04hx\n", val);
    printf("Swapped: 0x%04hx\n", swapped);

    return 0;
}