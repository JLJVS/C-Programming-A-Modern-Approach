#include <stdio.h>

// A and B are equivalent 
int main(void)
{
    int i = 0;
    for (i=0; i< 10; i++){
        printf("%d ", i);
    }
    printf("\n");
    for (i=0; i< 10; ++i){
        printf("%d ", i);
    }
    printf("\n");
    for (i=0; i++< 10;){
        printf("%d ", i);
    }
    printf("\n");


    return 0;
}