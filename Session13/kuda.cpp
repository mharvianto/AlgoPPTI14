#include<stdio.h>

struct Point {
    int x, y;
};

void move(int x, int y, int step, int board[10][10]) {
    if(x < 0 || x > 7 || y < 0 || y > 7) return;
    if (board[y][x] <= step) return;
    board[y][x] = step;
    move(x - 1, y - 2, step + 1, board);
    move(x + 1, y - 2, step + 1, board);
    move(x - 2, y - 1, step + 1, board);
    move(x + 2, y - 1, step + 1, board);
    move(x - 2, y + 1, step + 1, board);
    move(x + 2, y + 1, step + 1, board);
    move(x - 1, y + 2, step + 1, board);
    move(x + 1, y + 2, step + 1, board);
}

int main() {
    int board[10][10];
    Point src, dst;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j] = 64;
        }
    }
    scanf("%d %d %d %d", &src.x, &src.y, &dst.x, &dst.y);
    move(src.x, src.y, 0, board);
    printf("%d\n", board[dst.y][dst.x]);
    return 0;
}