#include <stdio.h>

#define AVG(x, y) (((x)+(y))/2)
#define AREA(x, y) ((x) * (y))

int main(void)
{   
    int a = 5, b = 3, c=10;
    int a_avg = AVG(a, b);
    int b_area = AREA( a, b);


    printf("avg of %d and %d = %d\n", a, b, a_avg);
    printf("3*avg of %d and %d = %d\n", a, b, 3*a_avg);
    printf("area of %d and %d = %d\n", a, b, b_area);
    printf("15/area of %d and %d = %d\n", a, b, 15/b_area);
    return 0;

}