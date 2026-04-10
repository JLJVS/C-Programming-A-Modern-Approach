#include <stdio.h>

int main(void){
    float income, amount;
    printf("Please enter your income: ");
    scanf("%f", &income);
    if (income < 750){
        amount = income * 0.01;
    } else if (income <= 2.250){
        amount = 7.50 + 0.02 * (income-750);
    } else if (income <= 3750){
        amount = 37.50 + 0.03 * (income -2250);
    } else if (income <= 5250){
        amount = 82.50 + 0.04 * (income - 3750);
    } else if (income <= 7000){
        amount = 142.50 + 0.05 * (income - 5250);
    } else {
        amount = 230 + 0.06 * (income - 7000);
    }
    printf("With your income of $ %.2f you will have to pay $ %.2f in taxes.\n", income, amount);
    
    return 0;
}