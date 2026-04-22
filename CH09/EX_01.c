#include <stdio.h>

double triangle_area(double base, double height){
    double product;
    product = base * height;
    return product / 2;
}

int main(void)
{
    double base = 10, height = 5;
    printf("A triangle with a base of %.2f cm and a height of %.2f cm will have an area of %.2f cm^2", base, height, triangle_area(base, height));
    return 0;
}