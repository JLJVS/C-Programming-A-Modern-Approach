#include <stdio.h>

float calc_tax(float income) {
    float tax = 0;
    if (income < 750.0f)
        tax = income * .01f;
    else if (income < 2250.0f)
        tax = 7.50f + ((income - 750.0f) * 0.02f);
    
    else if (income < 3750.0f)
        tax = 37.50f + ((income - 2250.0f) * 0.03f);
    
    else if (income < 5250.0f)
        tax = 82.50f + ((income - 3750.0f) * 0.04f);
    
    
    else if (income < 7000.0f)
        tax = 142.50f + ((income - 5250.0f) * 0.05f);
    
    else
        tax = 230.0f + ((income - 7000.0f) * 0.06f);
    
    return tax;


}

int main(void) {
    float income;

    printf("Enter taxable income: ");
    scanf("%f", &income);
    float tax = calc_tax(income);
    printf("Tax = %.2f\n", tax);
    return 0;
}