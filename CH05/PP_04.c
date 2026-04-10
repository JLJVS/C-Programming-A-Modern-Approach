#include <stdio.h>

int main(void)
{
    int speed;
    const char *description;
    printf("Please enter a wind speed (in knots): ");
    scanf("%d", &speed);

    if (speed < 1){
        description = "Calm";
    } else if (speed <=3){
        description =  "Light air";
    } else if (speed <= 27){
        description = "Breeze";
    } else if (speed <= 47){
        description = "Gale";
    } else if (speed <=64){
        description = "Storm";
    } else {
        description = "Hurricane";
    }
    
    printf("A wind speed of %d knots can be described as: %s", speed, description);
    
    return 0;
}