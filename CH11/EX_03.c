#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0;
    for (i = 0; i < n; i++){
        *sum += a[i];
    }
    *avg = *sum / n;
}

int main(void){
    double a[5] = {6, 2, 3, 4, 5}, avg = 0, sum = 0;
    int n = 5;

    avg_sum(a, n, &avg, &sum);

    printf("The average is %.2f\n", avg);
    printf("The sum is %.2f\n", sum);

    return 0;
}