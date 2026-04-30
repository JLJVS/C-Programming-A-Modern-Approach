#include <stdio.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(void)
{
    int p = 5, q = 10;
    printf("p = %d, q = %d\n", p, q);
    swap(&p, &q);
    printf("p = %d, q = %d\n", p, q);
    return 0;
}