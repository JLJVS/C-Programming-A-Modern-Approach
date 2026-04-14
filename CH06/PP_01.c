#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool valid = true;
    float  num, largest = 0;

    while (valid){
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num > largest){
            largest = num;
        }
        if (num <= 0){
            break;
        }
    }
    printf("The largest number entered was %.2f", largest);
    return 0;
}