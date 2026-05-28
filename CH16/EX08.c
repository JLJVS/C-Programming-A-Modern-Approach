#include <stdio.h>

struct color {
    int red;
    int green;
    int blue;
};

void print_color (struct color c){
    printf("Red=%d, Green=%d, Blue=%d\n", c.red, c.green, c.blue);
}

int main(void)
{
    struct color MAGENTA = {255, 0, 255};
    print_color(MAGENTA);
    struct color MAGENTA2 = {.red = 255, .blue = 255};
    print_color(MAGENTA2);

    return 0;
}