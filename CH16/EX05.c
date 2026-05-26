#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int day_of_year(struct date d){
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.month == 0){
        return d.day;
    }
    else {
        int total_days = 0;
        for (int i = 0; i < d.month; i++){
            total_days += days[i];
        }
        return total_days + d.day;
    }
}

int compare_dates(struct date d1, struct date d2){
    if (d1.year < d2.year){
        return -1;
    } else if (d1.year > d2.year){
        return 1;
    } else {
        if (d1.month < d2.month){
            return -1;
        } else if (d1.month > d2.month){
            return 1;
        } else {
            if (d1.day < d2.day){
                return -1;
            } else if (d1.day > d2.day){
                return 1;
            } else {
                return 0;
            }
        }
    }
}

int main() {
    // Test day_of_year
    struct date a = {0, 15, 2024};   // January 15
    struct date b = {1, 10, 2024};   // February 10
    struct date c = {11, 31, 2024};  // December 31

    printf("Day of year for Jan 15: %d (expected 15)\n", day_of_year(a));
    printf("Day of year for Feb 10: %d (expected 41)\n", day_of_year(b));
    printf("Day of year for Dec 31: %d (expected 365)\n", day_of_year(c));

    // Test compare_dates
    struct date d1 = {5, 10, 2023};
    struct date d2 = {5, 10, 2023};
    struct date d3 = {3, 20, 2022};
    struct date d4 = {7, 1, 2024};

    printf("\nComparing equal dates: %d (expected 0)\n", compare_dates(d1, d2));
    printf("Comparing 2022 < 2023: %d (expected -1)\n", compare_dates(d3, d1));
    printf("Comparing 2024 > 2023: %d (expected 1)\n", compare_dates(d4, d1));

    return 0;
}