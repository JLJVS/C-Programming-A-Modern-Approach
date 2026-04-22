#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(void)
{   
    // set the random seed
    srand((unsigned int) 101);

    // create the 10 x 10 grid
    char grid[N][N];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            grid[i][j] = '.';
        }
    }

    // create an iterator variable
    int p;

    unsigned int x = 0, y = 0;
    grid[x][y] = 65;
    int stuck = 0;

    for (int i = 1; i < 26; i++){
        p = 0;
        if (stuck){
            break;
        }
        while (p < 50){
            int r = rand()%4;
            p++;
            switch (r){
                case 0: // moves left
                    if (x - 1 < N && grid[x-1][y] == '.'){
                        x -= 1;
                        p += 100;
                    }
                    break;
                case 1: // moves up
                    if (y - 1 < N && grid[x][y-1] == '.'){
                        y -= 1;
                        p += 100;
                    }
                    break;
                case 2: // moves right
                    if (x + 1 < N && grid[x+1][y] == '.'){
                        x += 1;
                        p += 100;
                    }
                    break;
                case 3: // moves down
                    if (y + 1 < N && grid[x][y+1] == '.'){
                        y += 1;
                        p += 100;
                    }
                    break;
            }
        }
        if (grid[x][y] != '.'){
                printf("No legal moves left ending now.\n");
                stuck = 1;
                break;
            } else {
                grid[x][y] = 65 + i;
            }
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }



    return 0;
}