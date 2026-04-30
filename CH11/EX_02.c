/*

a) False    p requires the assignment to be a int pointer
b) False    *p reads the value of the adress where the pointer is pointing to, so we can't assign
c) False    a reference to an existing pointer p can't be on the left hand of assignment
d) False    the pointer p is updated to point to a pointer  of a pointer int
e) False    the pointer p is updated to the adress that q is pointing to
f) True     the po
g) False
h) False
i) True

*/

#include <stdio.h>

int main(void)
{
    int i = 5, *p = &i, *q = &i;

    // p = i;       // not allowed
    // *p = &i;     // not allowed
    // &p = q;      // not allowed
    // p = &q;      // not allowed
    // p = *&q;     // allowed
    // p = q;       // allowed
    // p = *q;      // warning
    // *p = q;      // not allowed
    // *p = *q;     // allowed

    return 0;

}