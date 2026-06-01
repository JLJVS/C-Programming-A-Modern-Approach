#include <stdio.h>

/* 
If x is a structure and a is a member of that structure, then (&x)->a is the same as x.a
True, &x is a pointer and -> means access this pointer and follow to a
*/

struct x { 
    int a;
    int b;
    };

int main(void){
    struct x x_example = { 0, 1};

    printf("x_example.a = %d\n", x_example.a);
    printf("(&x_example)->a = %d\n", (&x_example)->a);

    // sanity check by modifying a 
    x_example.a = 10;
    printf("After x_example.a = 10: (&x_example)->a = %d\n", (&x_example)->a);

    (&x_example)->a = 99;
    printf("After (&x_example)->a = 99: x_example.a = %d\n", x_example.a);
    
    
    
    return 0;
}