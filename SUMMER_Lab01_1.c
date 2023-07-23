#1063

#include <stdio.h>
#include <string.h>

#define CHESS_SIZE 8

#define R 0
#define L 1
#define B 2
#define T 3
#define RT 4
#define LT 5
#define RB 6
#define LB 7

const int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int dy[] = {0, 0, -1, 1, 1, 1, -1, -1};

int isValidPosition(int x, int y) {
    return (x >= 1 && x <= CHESS_SIZE && y >= 1 && y <= CHESS_SIZE);
}

void movePiece(int* x, int* y, int* rockX, int* rockY, int direction) {
    int newX = *x + dx[direction];
    int newY = *y + dy[direction];

    if (!isValidPosition(newX, newY))
        return;

    if (newX == *rockX && newY == *rockY) {
        int newRockX = *rockX + dx[direction];
        int newRockY = *rockY + dy[direction];

        if (!isValidPosition(newRockX, newRockY))
            return;

        *rockX = newRockX;
        *rockY = newRockY;
    }

    *x = newX;
    *y = newY;
}

int main() {
    char kingPos[3], rockPos[3], move[3];
    int kingX, kingY, rockX, rockY, N;

    scanf("%s %s %d", kingPos, rockPos, &N);

    kingX = kingPos[0] - 'A' + 1;
    kingY = kingPos[1] - '0';
    rockX = rockPos[0] - 'A' + 1;
    rockY = rockPos[1] - '0';

    for (int i = 0; i < N; i++) {
        scanf("%s", move);

        int direction;
        if (strcmp(move, "R") == 0) direction = R;
        else if (strcmp(move, "L") == 0) direction = L;
        else if (strcmp(move, "B") == 0) direction = B;
        else if (strcmp(move, "T") == 0) direction = T;
        else if (strcmp(move, "RT") == 0) direction = RT;
        else if (strcmp(move, "LT") == 0) direction = LT;
        else if (strcmp(move, "RB") == 0) direction = RB;
        else if (strcmp(move, "LB") == 0) direction = LB;

        movePiece(&kingX, &kingY, &rockX, &rockY, direction);
    }

    printf("%c%d\n%c%d\n", kingX + 'A' - 1, kingY, rockX + 'A' - 1, rockY);

    return 0;
}
