#include <stdio.h>

int main(void)
{   
    int days = 30, hours = 24;
    float temperature_readings[30][24];
    float avg_temp;

    for (int day = 0; day< days; day++)
    {
        for (int hour=0; hour < hours; hour++){
            avg_temp += temperature_readings[day][hour];
        }
    }
    avg_temp = avg_temp / (float)(days*hours);
    return 0;
}