#include <stdio.h>
#include <stdbool.h>

int calc_gcd(int a, int b){
    int  c;

    while (true){
        
        if (a < b){
            c = a;
            a = b;
            b = c;
        }
        
        c = a%b;
        a = b;
        b = c;
        if (c==0) break;
    }
    return a;
}


int main(void)
{
    int a, b, gcd;

    printf("Enter two integers: ");
    scanf("%d/%d", &a, &b);
    gcd = calc_gcd(a, b);
    printf("%d\n", gcd);
    printf("In lowest terms: %d/%d", a/gcd, b/gcd);
    
    return 0;
}