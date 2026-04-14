#include <stdio.h>

int main(void)
{
    int num_days, start_day;
    printf("Enter number of days in month: ");
    scanf("%d", &num_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
    scanf("%d", &start_day);

    int count = 0;
    for (int i=1; i < start_day; i++){
        printf("   ");
        count++;
    }
    int day = 1;
    while (day <= num_days){
        printf("%02d ", day);
        day++;
        count++;
        if (count%7==0){
            printf("\n");
        }
    }



    return 0;
}