#include <stdio.h>

int main(void)
{
    int prefix, group, pub, digit;
    long num;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &pub, &num, &digit);
    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", pub);
    printf("Item number: %ld\n", num);
    printf("Check digit: %d\n", digit);
    return 0;

}