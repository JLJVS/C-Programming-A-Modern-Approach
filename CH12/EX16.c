#include <stdio.h>
#include <stdbool.h>

int *find_largest(int a[], int n) {
    int *largest = a;
    if (n > 1) {
        for ( int *p = (a+1); p < (a + n) ; p++) {
            if (*p > *largest) {
                largest = p;
            }
        }
}
    return largest;
}



int main(void){
    int row;
    int temperatures[7][24] = {
        {20,21,22,23,24,25,26,27,28,29,30,31,20,21,22,23,24,25,26,27,28,29,30,31},
        {20,21,22,23,24,25,26,266,28,29,30,31,20,21,22,23,24,25,26,27,28,29,30,31},
        {20,21,22,23,24,25,26,27,28,29,30,31,20,21,22,23,24,525,26,27,28,29,30,31},
        {20,21,22,23,24,25,26,27,28,29,30,131,20,21,22,23,24,25,26,27,28,29,30,31},
        {20,21,22,23,24,25,26,27,28,29,30,31,620,21,22,23,24,25,26,27,28,29,30,31},
        {20,21,22,23,24,25,26,27,28,29,30,31,20,21,122,23,24,25,26,27,28,29,32,31},
        {20,21,22,23,24,25,26,27,28,29,30,31,20,21,22,23,24,25,26,27,28,29,30,31}
    };

    
    int *largest = find_largest(temperatures[0], 24);
    for (int row = 1; row < 7; row++) {

        int *sublargest = find_largest(temperatures[row], 24);

        if (*sublargest > *largest) {
            largest = sublargest;
        }
    }

    printf("Largest: %d\n", *largest);
    
    return 0;
}