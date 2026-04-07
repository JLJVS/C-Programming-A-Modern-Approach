#include <stdio.h>

int main(void)
{   
    // a
    printf("%-8.1e\n", 5123456789);
    // b
    printf("%10.6e\n", 5123456789);
    //c
    printf("%-8.3f\n", 103.5832);
    //d
    printf("%6.0f", 104.52);

    return 0;
}