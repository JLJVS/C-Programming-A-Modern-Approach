#include <stdio.h>

#include <stdio.h>

int main(void)
{
    int digits[10] = {[0]=0};
    long num;
    int remainder;
    while (1){
        printf("Enter a number (to exit enter a number less than o equal to 0): ");
        scanf("%ld", &num);

        for (int i = 0; i<10; i++){
            digits[i] = 0;
        }
        
        if (num <= 0){
            printf("kthxbye");
            break;
        }

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
    }

    
    return 0;
}