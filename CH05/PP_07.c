#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4;
    
    printf("Enter four integers (seperated with a space): ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    int largest = n1, smallest = n1;

    if (smallest > n2){
        smallest = n2;
    } else if (largest < n2){
        largest = n2;
    }
    if (smallest > n3){
        smallest = n3;
    } else if (largest < n3){
        largest = n3;
    }
    if (smallest > n4){
        smallest = n4;
    } else if (largest < n4){
        largest = n4;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    return 0;
}