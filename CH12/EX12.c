#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest){
    *largest = *a;
    *second_largest = *a;
    for (int i = 0; i < n; i++){
        if (*(a+i) > *largest){
            *second_largest = *largest;
            *largest = *(a+i);    
        }
        else if (*(a+i) > *second_largest){
            *second_largest = *(a+i);
        }
    }
}

int main(void)
{

    int a[] = {1, 3, 5, 62, 49, 2, 4};
    int n = 7;
    int largest, second_largest;

    find_two_largest(a, n, &largest, &second_largest);
    printf("hi\n");
    printf("largest = %d, second largest = %d", largest, second_largest);

    return 0;
}