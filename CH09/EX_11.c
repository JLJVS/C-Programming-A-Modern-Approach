#include <stdio.h>

float compute_GPA(char grades[], int n){
    float average = 0;
    for (int i = 0; i < n; i++){
        switch (grades[i]){
            case 'A':
            case 'a':
                average += 4;
                break;
            case 'B':
            case 'b':
                average += 3;
                break;
            case 'C':
            case 'c':
                average += 2;
                break;
            case 'D':
            case 'd':
                average += 1;
                break;
            default:
                break;
        }
    }
    return average/n;
}


int main(void)
{

    char grades[5] = {'a', 'f', 'C', 'B', 'D'};
    int n=5;

    printf("The average grade is: %.2f", compute_GPA(grades, n));
    return 0;
}