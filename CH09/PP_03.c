#include <stdio.h>
#include <stdlib.h>
#define N 10

void generate_random_walk(char walk[10][10]){
    // set the random seed
    srand((unsigned int) 101);

    // create the 10 x 10 walk
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            walk[i][j] = '.';
        }
    }

    // create an iterator variable
    int p;

    unsigned int x = 0, y = 0;
    walk[x][y] = 65;
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
                    if (x - 1 < N && walk[x-1][y] == '.'){
                        x -= 1;
                        p += 100;
                    }
                    break;
                case 1: // moves up
                    if (y - 1 < N && walk[x][y-1] == '.'){
                        y -= 1;
                        p += 100;
                    }
                    break;
                case 2: // moves right
                    if (x + 1 < N && walk[x+1][y] == '.'){
                        x += 1;
                        p += 100;
                    }
                    break;
                case 3: // moves down
                    if (y + 1 < N && walk[x][y+1] == '.'){
                        y += 1;
                        p += 100;
                    }
                    break;
            }
        }
        if (walk[x][y] != '.'){
                printf("No legal moves left ending now.\n");
                stuck = 1;
                break;
            } else {
                walk[x][y] = 65 + i;
            }
    }

}

void print_array(char walk[10][10]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{   
    char walk[10][10];
    generate_random_walk(walk);
    print_array(walk);
    return 0;
}