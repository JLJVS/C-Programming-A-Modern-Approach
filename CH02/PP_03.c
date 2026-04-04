#include <stdio.h>

int main(void){
    float pi = 3.14;
    float r;

    printf("Please enter the radius: ");
    scanf("%f", &r);
    float volume = 4.0f / 3.0f * pi * r * r * r;
    printf("\nThe volume of a sphere with a radius %.0f m is %.2f m^3 \n", r, volume); 
    return 0;
}