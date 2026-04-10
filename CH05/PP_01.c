#include <stdio.h>

int main(void)
{
    int number, length;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    length = 0;
    while (number != 0){
        length++;
        number /= 10;
    }
    printf("Length = %d", length);
    return 0;
}