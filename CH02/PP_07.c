#include <stdio.h>

int main(void)
{
    int amount;
    printf("Enter a dollar amount : ");
    scanf("%d", &amount);

    int twenties = 0, tens = 0, fives = 0, singles = 0;
    
    while (amount > 0){
        if (amount > 20){
            amount-= 20;
            twenties += 1;
            continue;
        }
        if (amount > 10){
            amount-= 10;
            tens += 1;
            continue;
        }
        if (amount > 5){
            amount-= 5;
            fives += 1;
            continue;
        }
        if (amount > 0){
            amount-= 1;
            singles += 1;
            continue;
        }
    }
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", singles);
    return 0;
}