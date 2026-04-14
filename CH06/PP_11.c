#include <stdio.h>


int main (void)
{
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);

    float total = 1;
    float frac = 1;

    for (int i=1; i <= n; i++)
    {   
        printf("%f \n", total);
        frac /= i;
        total += frac;
    }

    printf("%.5f\n", total);
    printf("2.71828");
    return 0;
}