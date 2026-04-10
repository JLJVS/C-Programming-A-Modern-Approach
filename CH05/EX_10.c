#include <stdio.h>

// missing break statements in the cases.

int main(void)
{

    int i = 1;
    switch (i%3) {
        case 0: printf("zero"); break;

        case 1: printf("one"); break;
        case 2: printf("two");
    }
    return 0;
}