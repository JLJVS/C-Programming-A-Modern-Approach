#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool weekend[7] = {[0]=1, [6]=1};
    for (int i = 0; i < 7; i++){
        printf("%d: %d\n", i, weekend[i]);
    }
    return 0;
}