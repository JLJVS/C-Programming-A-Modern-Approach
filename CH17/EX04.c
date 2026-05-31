#include <stdio.h>
#include <stdlib.h>

struct point { int x ,y;};
struct rectangle { struct point upper_left, lower_right;};


int main(void){
    struct rectangle *p;
    
    // set the upper left values
    p->upper_left.x = 10;
    p->upper_left.y=25;

    // set the lower right values
    p->lower_right.x = 20;
    p->lower_right.y = 15;

    printf("Upper Left: (%d, %d)\n", p->upper_left.x, p->upper_left.y);
    printf("Lower Right: (%d, %d)\n", p->lower_right.x, p->lower_right.y);

    return 0;
}