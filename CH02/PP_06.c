#include <stdio.h>

int main(void)
{
    float x;
    printf("x: ");
    scanf("%f", &x);

    float result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("%.1f", result);
    return 0;
}