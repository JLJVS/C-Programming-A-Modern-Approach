#include <stdio.h>

int main(void)
{
    int i,j, offset = 0;
    const int N = 8;

    char check[2] = { 'B', 'R'};

    char checker_board[N][N];
    for (i=0; i<N; i++){
        offset = i%2;
        for (j=0; j<N; j++){
            checker_board[i][j] = check[(j+offset)%2];
        }
    }

    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            printf("%c ", checker_board[i][j]);
        }
        printf("\n");
    }

    return 0;
}