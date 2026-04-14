#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a, b, c;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    while (true){
        printf("%d, %d \n", a, b);
        if (a < b){
            c = a;
            a = b;
            b = c;
        }
        printf("%d, %d \n", a, b);
        c = a%b;
        a = b;
        b = c;
        if (c==0) break;
        
       
    }

    printf("Greatest common divisor: %d\n", a);

    return 0;
}