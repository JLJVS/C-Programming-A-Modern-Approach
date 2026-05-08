#include <stdio.h>

int *find_middle(int a[], int n) {
    return (a + (n / 2));
};

int main(void) {
    
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("Middle: %d\n", *find_middle(a, n));
    return 0;
}