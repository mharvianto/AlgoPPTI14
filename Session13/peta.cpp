#include<stdio.h>
#include<math.h>

struct Point {
    int x, y;
};

void move(int x, int y, double step, double board[15][15], char map[15][15]) {
    if(x < 0 || x > 9 || y < 0 || y > 9) return;
    if (map[y][x] == '#') return;
    if (board[y][x] <= step) return;
    board[y][x] = step;
    move(x - 1, y, step + 1, board, map);
    move(x + 1, y, step + 1, board, map);
    move(x, y - 1, step + 1, board, map);
    move(x, y + 1, step + 1, board, map);
    move(x + 1, y + 1, step + sqrt(2), board, map);
    move(x + 1, y - 1, step + sqrt(2), board, map);
    move(x - 1, y + 1, step + sqrt(2), board, map);
    move(x - 1, y - 1, step + sqrt(2), board, map);
}

int main() {
    double board[15][15];
    char map[15][15] = {
        "..........",
        "...#..#...",
        "...####...",
        "......#...",
        "...#..#...",
        "#####.....",
        "..........",
        "....######",
        "..........",
        "..........",
    };
    Point src, dst;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            board[i][j] = 99;
        }
    }
    scanf("%d %d %d %d", &src.x, &src.y, &dst.x, &dst.y);
    move(src.x, src.y, 0, board, map);
    printf("%lf\n", board[dst.y][dst.x]);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%5.2lf|", board[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}