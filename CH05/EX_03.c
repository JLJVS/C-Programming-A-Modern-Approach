#include <stdio.h>

int main(void)
{
    int i, j, k;

    // a
    printf("a: ");
    i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);

    // b
    printf("b: ");
    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);


    // c
    printf("c: ");
    i = 7; j = 8; k = 9;
    printf("%d ",(i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);


    // d
    printf("d: ");
    i = 1; j = 1; k = 1;
    printf("%d ", ++ i || ++ j && ++k);
    printf("%d %d %d\n", i, j, k);





    return 0;
}