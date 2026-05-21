#include <stdio.h>

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x: y;        \
}

/* a
 it substitutes type with long 
so GENERIC_MAX(long)
long long_max(long x, long y){
    return x > y ? x : y;
}

b
unsigned long consists of two tokens instead of the one in our macro

*/ 
