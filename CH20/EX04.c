#include <stdio.h>

/*
Create a macro MK_COLOR with three parameters (red, green, blue intensities). That returns a long with the last three bytes representing blue green red respectively.

*/

#define MK_COLOR(r, g, b) ( ((long)(b)<<16) | ((long)(g)<<8) | (long)(r))

int main() {
    long c1 = MK_COLOR(255, 0, 0);      // red
    long c2 = MK_COLOR(0, 255, 0);      // green
    long c3 = MK_COLOR(0, 0, 255);      // blue
    long c4 = MK_COLOR(128, 64, 32);    // custom color
    long c5 = MK_COLOR(255, 255, 255);  // white

    printf("Testing MK_COLOR macro:\n\n");

    printf("Red     (255, 0, 0)     -> 0x%06lx\n", c1);
    printf("Green   (0, 255, 0)     -> 0x%06lx\n", c2);
    printf("Blue    (0, 0, 255)     -> 0x%06lx\n", c3);
    printf("Custom  (128, 64, 32)   -> 0x%06lx\n", c4);
    printf("White   (255, 255, 255) -> 0x%06lx\n", c5);

    return 0;
}

