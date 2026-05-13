#include <stdio.h>

/*
a)  False, expected a char but got a char*
b)  True, expected a char* and got char* it returned the value at address 0 so -> a
c)  True, expected a char* and got a char* so it kept printing untill it hits a \n
d)  False, expected a char* but got a char instead.
*/

int main(void)
{
    char *p = "abc";

    // a putchar(p);
    // b putchar(*p);
    // c puts(p);
    // d puts(*p);

    return 0;
}