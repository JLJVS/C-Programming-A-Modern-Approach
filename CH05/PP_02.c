#include <stdio.h>

int main(void)
{
    int hour, mins;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &mins);
    printf("Equivalent 12-hour time: %d:%d ", hour%12, mins);
    (hour > 12) ? printf("PM") : printf("AM");
    return 0;
}