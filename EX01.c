#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];


    // a value of *(p+3) so that should be a[4]=14
    printf("a) *(p+3) = %d\n", *(p+3));
    // b value of *(q-3) should correspond to a[2]=34
    printf("b) *(q-3) = %d\n", *(q-3));
    // c value q - p should be 4?
    printf("c) q-p = %d\n", q-p);
    // d p < q should be true
    printf("d) p < q = %d\n", p < q);
    // e *p < *q, *p=15, *q = 2 -> false
    printf("e) *p < *q = %d", *p < *q);

    return 0;
}