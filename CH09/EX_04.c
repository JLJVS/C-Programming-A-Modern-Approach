#include <stdio.h>

int is_leap_year(int year){
    if (year%400==0){
        return 1;
    } else if (year%100==0){
        return 0;
    } else if (year%4 == 0){
        return 1;
    } else {
        return 0;
    }
}

int day_of_year(int month, int day, int year){
    int total = 0;
    int days_in_month[12] = {31, 28, 31, 30, 31, 30,
                             31, 31, 30, 31, 30, 31};
    int leap_year = is_leap_year(year);
    if (leap_year){
        days_in_month[1] += 1;
    }
    
    int total_days[12] = {0};
    for (int i=0; i<11; i++){
        total_days[i+1] = total_days[i] + days_in_month[i];
    }

    if (month > 1){
        return total_days[month-1] + day;
    }
    return day;
}

int main(void)
{   
    int month = 1, day = 10, year = 2000;
    printf("%d-%d-%d: day of year = %d\n", month, day, year, day_of_year(month, day, year));
    month = 3;
    printf("%d-%d-%d: day of year = %d\n", month, day, year, day_of_year(month, day, year));
    year = 2001;
    printf("%d-%d-%d: day of year = %d\n", month, day, year, day_of_year(month, day, year));
    month = 12;
    day = 31;
    printf("%d-%d-%d: day of year = %d\n", month, day, year, day_of_year(month, day, year));
    year = 2000;
    printf("%d-%d-%d: day of year = %d\n", month, day, year, day_of_year(month, day, year));


    return 0;
}