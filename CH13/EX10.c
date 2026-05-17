#include <stdio.h>
#include <string.h>


/*
The original duplicate doesn't have an initialized q. So it will write to a random memory address

*/
char *duplicate(char *q, const char *p)
{
    // we take a pointer q as input instead char *q;
    strcpy(q,p);
    return q;
}

int main(void)
{
    char q[20] = "Hello";
    char p[20] = "byebye";

    printf("%s\n", q);
    printf("%s\n", p);
    duplicate(q,p);
    printf("%s\n", q);
    printf("%s\n", p);


    return 0;
}