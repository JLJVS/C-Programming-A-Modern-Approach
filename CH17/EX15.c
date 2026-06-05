#include <stdio.h>

/*
f1 takes a function pointer and repeatedely calls that function by incrementing n until it returns false.
f2 takes i and returns the result of i^2 + i -12
i^2 + i - 12 = (i+4)(i-3)
f2 will return false when the product of the equation is 0 so at i = 3
*/


int f1(int (*f) (int));
int f2(int i);

int main(void)
{
    printf ("Answer: %d\n", f1(f2));
    return 0;
}

int f1(int (*f) (int)){
    int n= 0;
    while ((*f)(n)) n++;
    return n;
}

int f2(int i){
    return i*i+i-12;
}