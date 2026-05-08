#include <stdio.h>

int sum_array(const int a[], int n)
{
    int i = 0, sum = 0;
    
    for (i=0; i < n; i++){
        sum += *(a+i); 
    }

    return sum;
}

int main(void)
{
    int a[] = {1,2,3,4,5};
    int n = 5;

    printf("sum = %d", sum_array(a, n));

    return 0;
}