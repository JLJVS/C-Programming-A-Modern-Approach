#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key){

    for (int i = 0; i < n; i++){
        if (key == *(a+i)){
            return true;
        }
    }
    return false;
}


int main(void)
{
    int a[] = {1,2,3,4,5,101};
    int n = 6;

    printf("a=[1,2,3,4,5,101]\n");
    printf("3 in a = %d\n", search(a, n, 3));
    printf("5 in a = %d\n", search(a, n, 5));
    printf("101 in a = %d\n", search(a, n, 101));
    printf("6 in a = %d", search(a, n, 6));




    return 0;
}