#include <stdio.h>

int main(void){
    int day1, day2, month1, month2, year1, year2;
    int first;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 < year2){
        first = 1;
    } else if (year2 < year1){
        first = 2;
    } else {
        if (month1 < month2){
            first = 1;
        } else if (month2 < month1){
            first = 2;
        } else {
            if (day1 < day2){
                first = 1;
            } else{
                first = 2;
            }
        }
    }
    if (first == 1){
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", month1, day1, year1, month2, day2, year2);
    } else {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", month2, day2, year2, month1, day1, year1);
    }

}