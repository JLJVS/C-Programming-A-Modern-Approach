#include <stdio.h>


int main (void)
{
    float epsilon;
    printf("Please enter an error epsilon: ");
    scanf("%f", &epsilon);

    float e = 2.71828;
    float total = 1;
    float frac = 1;
    int i = 1;

    while (e-total > epsilon)
    {   
        printf("%f \n", total);
        frac /= i;
        total += frac;
        i++;

    }

    printf("%.5f\n", total);
    printf("2.71828\n");
    printf("It took %d iterations to achieve an error of %.5f", i, epsilon);
    return 0;
}