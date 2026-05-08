#include <stdio.h>

void store_zeros(int a[], int n)
{
    int i ;

    for (i = 0; i < n; i++){
        a[i] = 0;
    }
}

int main(void)
{
    int a[] = {1,2,3,4,5};
    int n = 5;

    printf("a = [ ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i] );
    }
    printf("]\n");
    store_zeros(a, n);
    printf("a = [ ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i] );
    }
    printf("]\n");

    return 0;
}