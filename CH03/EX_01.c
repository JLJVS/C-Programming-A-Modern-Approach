#include <stdio.h>


int main(void)
{
    //a)   6 width so ____86 and 1040
    printf("%6d, %4d\n", 86, 1040);
    //b)  12 width with a precision of 5 _30.25300e+01
    printf("%12.5e\n", 30.253);
    //c) 83.1620
    printf("%.4f\n", 83.162);
    //d) width of 6 left aligned 1e-06
    printf("%-6.2g\n", .0000009979);
    return 0;
}
