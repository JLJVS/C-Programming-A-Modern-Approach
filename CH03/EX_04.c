#include <stdio.h>

int main(void)
{
    int i, j;
    float x;

    scanf("%d%f%d", &i, &x, &j);

    printf("%d, %f, %d", i, x, j);

    return 0;
}

/*
Because i expects an integer it stops at the . and this becomes the start of x
*/