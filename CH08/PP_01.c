#include <stdio.h>

int main(void)
{
    int digits[10] = {[0]=0};
    int num, remainder ;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0){
        remainder = num%10;
        digits[remainder] += 1;
        num /= 10;
    }
    
    printf("Repeated digit(s): ");
    for (int i=0; i<10; i++){
        if (digits[i] > 1){
            printf("%d ", i);
        }
    }
    
    return 0;
}