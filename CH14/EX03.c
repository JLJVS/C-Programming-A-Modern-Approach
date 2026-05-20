#include <stdio.h>

#define DOUBLE(x) (2*(x))

int main(void){

    int a = DOUBLE(1+2);
    int b = (4) / DOUBLE(2);
    

    printf("Double(1+2) = %d\n", a);
    printf("4/Double(2) = %d\n", b);



    return 0;
}