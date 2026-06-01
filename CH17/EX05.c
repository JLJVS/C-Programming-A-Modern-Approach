#include<stdio.h>
#include<stdlib.h>


/*
a) p->b = ' '; Not allowed should be p->d.b = ' ';
b) p->e[3] = 10; Allowed
c) (*p).d.a = '*'; Allowed
d) p->d->c = 20; Not allowed should be p->d.c = 20;

*/

int main(void)
{
    struct {
        union {
            char a, b;
            int c;
        } d;
        int e[5];
    } f, *p = &f;
    // a) not allowed
    // p->b = ' ';

    // b) allowed
    // p->e[3] = 10;

    // c) allowed
    // (*p).d.a = '*';

    // d) not allowed
    // p->d->c = 20;

    return 0;
}