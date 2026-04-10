#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    i = 1; j = 5;
    // equal should print -1
    printf("%d\n", (i>j) - (i < j));

    i = 1; j = 1;
    // equal should print 0
    printf("%d\n", (i>j) - (i < j));

    i = 5; j = 1;
    // equal should print 0
    printf("%d\n", (i>j) - (i < j));


    return 0;
}