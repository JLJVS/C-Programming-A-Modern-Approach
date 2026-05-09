#include <stdio.h>

int find_largest(int a[], int n) {
    int largest = *a;
    if (n > 1) {
        for ( int i = 0; i < n ; i++) {

            if (*(a+i) > largest) {
                largest = *(a+i);
            }

        }
}
    return largest;
    
   
}

int main(void) {

    int a[] = {0, 4, 3, 5, 1};
    int n = (sizeof(a) / sizeof(a[0]));

    printf("Largest: %d\n",find_largest(a, n));

}