#include <stdio.h>

int num_digits(int n){
    if (n<=0){
        return 0;
    }
    int count = 0;
    while (n!=0){
        count++;
        n /= 10;
    }
    return count;
}

int main(void){
    int a = -1, b = 7, c = 20, d = 369, e = 1234;
    printf("%d has %d digits\n", a, num_digits(a));
    printf("%d has %d digits\n", b, num_digits(b));
    printf("%d has %d digits\n", c, num_digits(c));
    printf("%d has %d digits\n", d, num_digits(d));
    printf("%d has %d digits\n", e, num_digits(e));
    
    return 0;
}