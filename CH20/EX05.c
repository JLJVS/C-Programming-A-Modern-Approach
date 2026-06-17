#include <stdio.h>

#define MK_COLOR(r, g, b) ( ((long)(b)<<16) | ((long)(g)<<8) | (long)(r))

#define GET_RED(color)      ((long)((color) & 0xFF))
#define GET_GREEN(color)    ((long)((color) >> 8 & 0xFF))
#define GET_BLUE(color)     ((long)((color) >> 16 & 0xFF))

int main(void)
{
    long r = 10;
    long g = 20;
    long b = 30;

    long color = MK_COLOR(r, g, b);

    printf("Original RGB:  R=%ld, G=%ld, B=%ld\n", r, g, b);
    printf("Packed color value: %ld\n", color);

    printf("Extracted RED:   %ld\n", GET_RED(color));
    printf("Extracted GREEN: %ld\n", GET_GREEN(color));
    printf("Extracted BLUE:  %ld\n", GET_BLUE(color));

    return 0;
}