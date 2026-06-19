#include <stdio.h>

/*
This clears the lowest bit. Let's look at the example of n=6
n=6     -> 0b110
n-1=5   -> 0b101
n&=n-1  -> 0b110&0b101=0b100 = 4

n=4     -> 0b100
n-1= 3  -> 0b011
n&n-1   -> 0b000 
*/

int main(void)
{
    int n = 255;
    for (int i=0; i < 5; i++){
        printf("n: %d -> ", n);
        n &= n-1;
        printf("n&=n-1 -> n: %d\n", n);
        printf("255 - %d = %d\n", n, 255-n);

    }
    
    return 0;
}