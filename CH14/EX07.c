#include <stdio.h>

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x: y;        \
}

#define GENERIC_MAX_fix_1(name, type) \
type name##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}

#define max(x, y) _Generic((x), \
    long: long_max, \
    unsigned long: ulong_max, \
    int: int_max \
)(x, y)


/* a
 it substitutes type with long 
so GENERIC_MAX(long)
long long_max(long x, long y){
    return x > y ? x : y;
}

b
unsigned long consists of two tokens instead of the one in our macro

*/ 
