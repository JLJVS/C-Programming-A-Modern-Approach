#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day){
    int days[12] = {31, 28, 31, 30, 31, 30,
                     31, 31, 30, 31, 30, 31};
    

    // check for leap year
    if (year%400==0){
        days[1]++;
    } else if (year%100==0){
        1;
    } else if (year%4==0) {
        days[1]++;
    }

    *month = 1;
    *day = 0;

    int month_index = 0;
    while (day_of_year > days[month_index]){
        *month += 1;
        day_of_year -= days[month_index++];
    }
    *day = day_of_year;
}

int main(void)
{

    int day_of_year = 67;
    int year = 2024;
    int month, day;
    split_date(day_of_year, year, &month, &day);
    printf("%d/%d/%d\n", month, day, year);


    return 0;
}