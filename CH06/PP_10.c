#include <stdio.h>
#include <stdbool.h>

int main(void) {


    int month, day, year, earliest_month = 13, earliest_day = 32, earliest_year = 9999;
    bool found = false;

    while (~found){
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        
        if (month == 0 && day == 0 && year == 0){
            break;
        }
        else if ((year < earliest_year) || (year == earliest_year && month < earliest_month) || (year == earliest_year && month == earliest_month && day < earliest_day)) {
            found = true;
            earliest_month = month;
            earliest_day = day;
            earliest_year = year;
        }
    }
    if (found) 
        printf("%02d/%02d/%02d is the earliest date\n", earliest_month, earliest_day, earliest_year);
    else
        printf("No date found.\n");
    return 0;
    
}