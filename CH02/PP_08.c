#include <stdio.h> 

int main(void)
{
    float amount, interest, monthly_interest, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    monthly_interest = 1+interest/12/100;

    amount = amount * monthly_interest - payment;
    printf("Balance reamining after first payment: $%.2f\n", amount);
    amount = amount * monthly_interest - payment;
    printf("Balance reamining after second payment: $%.2f\n", amount);
    amount = amount * monthly_interest - payment;
    printf("Balance reamining after third payment: $%.2f\n", amount);

    return 0;

}