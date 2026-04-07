#include <stdio.h>


int main(void)
{

    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, total;
    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3,
    &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);
    
    total = n2 + n4 + n6 + n8 + n10 + n12;
    total *= 3;
    //printf("%d\n", total);
    total += n1 + n3 + n5 + n7 + n9 + n11;
    //printf("%d\n", total);
    total -= 1;
    //printf("%d\n", total);
    total %= 10;
    //printf("%d\n", total);
    total = 9 - total;
    printf("Check digit: %d", total);

    return 0;
}