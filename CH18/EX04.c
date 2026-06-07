#include <stdio.h>

int f(int i)
{
    static int j = 0;
    return i* j++;
}

/*
For the first call it initializes j to 0
Returns 0 for the first call not dependent on i

for the second call j = 1
so it returns i

for the third call j = 2
so it returns 2*i

etc
*/