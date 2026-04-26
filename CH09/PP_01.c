#include <stdio.h>

void selection_sort(int numbers[], int size)
{
    int largest = -100, largest_index = -1;
    if (size > 0){
        for (int i = 0; i < size; i++){
            if (numbers[i] > largest){
                largest_index = i;
                largest = numbers[i];
            }
        }
        numbers[largest_index] = numbers[size-1];
        numbers[size-1] = largest;
        selection_sort(numbers, size-1);

    }
}

int main(void)
{   
    int N = 5;
    int numbers[5] = {5,4,3,2,1};
    selection_sort(numbers, N);
    for (int i = 0; i < N; i++){
        printf("%d ", numbers[i]);
    }

    return 0;

}