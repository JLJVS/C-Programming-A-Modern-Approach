#include <stdio.h>

int main(void)
{
    int a[] = {1, 2, 3};
    int *low = &a[0], *middle, *high = &a[2];

    /*  
   
    middle = (low + high) / 2;
    addition isn't allowed as a binary operation between two pointers
   
    */ 
    int difference = (high - low )/2;
  
    middle = *(low + difference);
    printf("The middle value of {1, 2, 3} is %d", middle);



    return 0;
}