#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &n1, &n2);
    printf("The reversal is: %d%d", n2, n1);
    return 0;
}