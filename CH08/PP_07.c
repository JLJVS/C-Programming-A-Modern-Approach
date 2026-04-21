#include <stdio.h>

#define N 5

int main(void)
{
    int numbers[N][N];
    int row_sums[N], column_sums[N];
    
    
    for (int i = 0; i < N; i++)
    {
        printf("Enter row %d: ", i+1);
        scanf("%d %d %d %d %d", &numbers[i][0], &numbers[i][1], &numbers[i][2], &numbers[i][3], &numbers[i][4]);
        row_sums[i] = numbers[i][0] + numbers[i][1] +  numbers[i][2] +  numbers[i][3] +  numbers[i][4];
    }
    
    for (int j = 0; j < N; j++)
    {
        column_sums[j] = numbers[0][j] + numbers[1][j] +  numbers[2][j] +  numbers[3][j] +  numbers[4][j];
    }

    printf("Row totals: \t%d %d %d %d %d\n", row_sums[0], row_sums[1], row_sums[2], row_sums[3], row_sums[4]);
    printf("Column totals: \t%d %d %d %d %d\n", column_sums[0], column_sums[1], column_sums[2], column_sums[3], column_sums[4]);

    return 0;
}