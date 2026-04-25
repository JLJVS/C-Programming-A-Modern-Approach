#include <stdio.h>

int evaluate_position(char board[8][8]){

    int score_white = 0, score_black = 0, n = 8;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            switch (board[i][j]){
                case 'Q':
                    score_white += 9;
                    break;
                case 'q':
                    score_black += 9;
                    break;
                case 'R':
                    score_white += 5;
                    break;
                case 'r':
                    score_black += 5;
                    break;
                case 'B':
                    score_white += 3;
                    break;
                case 'b':
                    score_black += 3;
                    break;
                case 'N':
                    score_white += 3;
                    break;
                case 'n':
                    score_black += 3;
                    break;
                case 'P':
                    score_white += 1;
                    break;
                case 'p':
                    score_black += 1;
                    break;
                default:
                    break;
            }
        }
    }
    return score_white-score_black;
}

int main(void)
{
    char board[8][8] = {{'K','Q','R'},
                        {'k','q','r','b','n'}};
    int result = evaluate_position(board);
    printf("%d", result);
    return 0;

}