#include <stdio.h>

int main(void)
{
    int i, n;
    printf("Please enter a positive integer: ");
    scanf("%d", &n);
    i = 1;
    while (i*i <= n){
        if (i%2 == 0){
            printf("%d\n", i*i);
        }
        i++;
        
    }



    return 0;
}