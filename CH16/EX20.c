#include <stdio.h>

enum Direction {NORTH, SOUTH, EAST, WEST};

int main(void)
{

    int x = 0, y = 0;
    enum Direction moves[8] = {
        NORTH, EAST, EAST, SOUTH,
        WEST, NORTH, WEST, SOUTH
    };

    for (int i = 0; i < 8; i++) {
        enum Direction d = moves[i];

        switch (d) {
            case NORTH: y += 1; break;
            case SOUTH: y -= 1; break;
            case EAST:  x += 1; break;
            case WEST:  x -= 1; break;
        }

        printf("Move %d: %d => Position (%d, %d)\n",
               i + 1,
               d,
               x, y);
    }

    return 0;
}