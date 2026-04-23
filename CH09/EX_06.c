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

int digit(int n, int k){

    int digits = num_digits(n);
    if (k > digits){
        return 0;
    }
    for (int j=0; j<k-1; j++){
        n /= 10;
    }
    return n%10;
}

int main(void)
{

    int n = 829, a = 1, b =2, c = 3, d = 4;
    printf("n=%d, k=%d: %d\n", n, a, digit(n, a));
    printf("n=%d, k=%d: %d\n", n, b, digit(n, b));
    printf("n=%d, k=%d: %d\n", n, c, digit(n, c));
    printf("n=%d, k=%d: %d\n", n, d, digit(n, d)); 

    return 0;
}