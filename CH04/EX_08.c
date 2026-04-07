#include <stdio.h>

int main(void)
{
    int n =195;
    printf("%d\n", 9 - ((n-1)%10));
    printf("%d", (10 - (n%10))%10);
    return 0;
}