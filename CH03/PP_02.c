#include <stdio.h>

int main(void)
{
    int item_num, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy)");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit Price\tPurchase Date\n");
    printf("%d\t$ %6.2f\t%02d/%02d/%d", item_num, price, month, day, year);
    return 0 ;
}