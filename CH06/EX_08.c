#include <stdio.h>

int main(void)
{
    int i = 0;
    for (i = 10; i >= 1; i/= 2){
        printf("%d ", i++);
    }

    return 0;
}

// this produces an infinite loop i: 10 -> 5 -> 6 -> 3 -> 4 -> 2 -> 3 -> 1 -> 2 -> 1 -> 2 