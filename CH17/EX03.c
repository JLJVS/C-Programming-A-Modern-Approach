#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value){

    int *array = malloc(sizeof(int)*n);
    if (array == NULL){
        printf("malloc failed.\n");
        return NULL;
    }
    for (int i = 0 ; i < n; i++){
        array[i] = initial_value;
    }
    
    return array;
}

int main(void) {
    int *arr = create_array(5, 42);

    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}