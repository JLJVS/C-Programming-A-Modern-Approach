#include <stdio.h>

#include <stdio.h>

int main(void)
{
    int digits[10] = {[0]=0};
    long num;
    int remainder ;
    printf("Enter a number: ");
    scanf("%ld", &num);
    while (num > 0){
        remainder = num%10;
        digits[remainder] += 1;
        num /= 10;
    }
    
    printf("Digit: \t\t");
    for (int i=0; i<10; i++)
    {
        printf("%d  ", i);
    }
    printf("\n");
    printf("Occurrences: \t");
    for (int i=0; i<10; i++){
        printf("%d  ", digits[i]);
    }
    
    return 0;
}