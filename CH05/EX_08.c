#include <stdio.h>
#include <stdbool.h>

int main(void)
{   
    int age = 15;
    bool teenager = false;
    if (age >= 13 && age <= 19){
        teenager = true;
    }
    printf("%d", teenager);


    return 0;
}