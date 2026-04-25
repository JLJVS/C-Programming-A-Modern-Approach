#include <stdio.h>

int find_largest(int array[], int n){

    int largest = 0;
    for (int i=0; i<n; i++){
        if (array[i] > largest){
            largest = array[i];
        }
    }
    return largest;
}

double calc_average(int array[], int n){
    double total = 0;
    for (int i = 0; i<n; i++){
        total += array[i];
    }
    return total/n;
}

int num_pos(int array[], int n){
    int pos = 0;
    for (int i = 0; i < n; i++){
        if (array[i] >= 0) pos++;
    }
    return pos;
}

int main(void){

    int array[6] = {1,2,8,4,5, -1};
    int n = 6;

    printf("largest: %d\n", find_largest(array, n));
    printf("average: %.2f\n", calc_average(array, n));
    printf("number of positive entries: %d", num_pos(array, n));
    return 0;
}