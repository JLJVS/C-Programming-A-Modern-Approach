#include <stdio.h>
#include <stdbool.h>

struct color {
    int red;
    int green;
    int blue;
};

void print_color (struct color c){
    printf("Red=%d, Green=%d, Blue=%d\n", c.red, c.green, c.blue);
}

// a
struct color make_color(int red, int green, int blue){
    if (red < 0 ){
        red = 0;
    }
    if (green < 0 ){
        green = 0;
    }
    if (blue < 0){
        blue = 0;
    }
    struct color c = {red, green, blue};
    return c;
}

// b
int getRed(struct color c){
    return c.red;
}

// c
bool equal_color(struct color color1, struct color color2){
    return ((color1.red == color2.red) && (color1.green == color2.green) && (color1.blue == color2.blue));
}

// d
struct color brighter(struct color c){
    struct color new_c = {(c.red/7)*10, (c.green/7)*10, (c.blue/7)*10};
    return new_c;
}

// e
struct color darker(struct color c){
    struct color new_c = {(c.red/10)*7, (c.green/10)*7, (c.blue/10)*7};
    return new_c;
}

int main(void){

    printf("=== TEST make_color ===\n");
    struct color c1 = make_color(255, 0, 255);
    print_color(c1);

    struct color c2 = make_color(-10, 50, -3);
    print_color(c2);   // should clamp negatives to 0

    printf("\n=== TEST getRed ===\n");
    printf("Red component of c1 = %d\n", getRed(c1));

    printf("\n=== TEST equal_color ===\n");
    struct color c3 = make_color(255, 0, 255);
    printf("c1 == c3 ? %s\n", equal_color(c1, c3) ? "true" : "false");
    printf("c1 == c2 ? %s\n", equal_color(c1, c2) ? "true" : "false");

    printf("\n=== TEST brighter ===\n");
    struct color c4 = make_color(100, 0, 100);
    print_color(c4);
    struct color bright = brighter(c4);
    print_color(bright);

    printf("\n=== TEST darker ===\n");
    print_color(c4);
    struct color dark = darker(c4);
    print_color(dark);

    return 0;
}