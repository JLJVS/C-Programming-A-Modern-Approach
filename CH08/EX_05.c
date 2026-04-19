#include <stdio.h>

int main(void)
{
    int fib_a[40] = {[0]=0, [1]=1};
    
    for (int i=0; i<40; i++){

        if (i<2){
            printf("%d: %d\n", i, fib_a[i]);
        } else {
            fib_a[i] = fib_a[i-1] + fib_a[i-2];
            printf("%d: %d\n", i, fib_a[i]);
        }
    }

    return 0;
}