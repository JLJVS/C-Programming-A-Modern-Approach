#include <stdio.h>

int main(void) {
    int i = 10;
    int p = 20;
    while (i >= 1){
        printf("%d ", i++);
        i /= 2;
        p--;
        if (p ==0){
            break;
        }
    }
    // expected output -> "10 5 3 2 1 1 1 1 1 1... (infinite loop)"
}