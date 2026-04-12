#include <stdio.h>

int main(void)
{
    int i = 10;
    // a
    while (i < 10){
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // b
    i = 10;
    for (; i<10;){
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // c
    i = 10;
    do {
        printf("%d ", i);
        i++;
    } while (i < 10);

    return 0;
}