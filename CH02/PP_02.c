#include <stdio.h>

int main(void){
    float pi = 3.14;
    float r  = 10;
    float volume = 4.0f / 3.0f * pi * r * r * r;
    printf("The volume of a sphere with radius %.0f is %.2f\n", r, volume); 
    return 0;
}