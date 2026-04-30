#include <stdio.h>

int main(void)
{
    int i = 10, *p = &i;

    printf("a: %d\n", *p);
    printf("b: %p\n", &p);
    printf("c: %d\n", *&p);
    printf("d: %p\n", &*p);
    //printf("e: %d\n", *i);
    printf("f: %p\n", &i);
    printf("g: %d\n", *&i);
    //printf("h: %p\n", &*i);

    return 0;
}