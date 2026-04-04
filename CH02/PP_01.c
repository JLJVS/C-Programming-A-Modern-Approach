#include <stdio.h>

int main(void)
{
    printf("01234567890\n");
    printf("%*s*\n", 7, "");
    printf("%*s*\n", 6, "");
    printf("%*s*\n", 5, "");
    printf("*   *\n");
    printf(" * *\n");
    printf("  *\n");
    printf("01234567890\n");
    return 0;
}