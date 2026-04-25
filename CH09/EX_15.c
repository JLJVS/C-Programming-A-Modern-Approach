#include <stdio.h>

double median(double x, double y, double z)
{
    double median = -1.1;
    if (x <= y){
        if (y <= z){
           median = y;
        } else if (x <= z){
            median = z;
        }
    }
    if (z <= y){
        median = y;
    }
    if (x <= z ){
        median = x;
    }
    return (median == -1.1) ? median : z;

}

int main(void)
{   
    double a = 1, b = 2, c =3;
    printf("median: %.2f\n", median(a, b, c));

    return 0;
}