#include <stdio.h>


int main(void)
{
    int hour, minutes;
    char AMPM[3];

    printf("Enter a 12-hour time: ");
    scanf("%2d:%2d %s", &hour, &minutes, &AMPM);
     
    if ((hour < 1 || hour > 12) || (minutes < 0 || minutes > 59)) {
        printf("Invalid 12-hour time.\n");
        return 1;
    }
    if (AMPM[0] == 'P'){
        hour += 12;
    }
    printf("Equivalent 24-hour time: %d:%d", hour, minutes);

    return 0;
}