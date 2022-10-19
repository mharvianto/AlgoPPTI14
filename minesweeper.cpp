#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

void generateBomb(char board[N+5][N+5]){
    for (int i = 0; i < N;) {
        int x = rand() % N,
            y = rand() % N;
        if (board[x][y] != '*') {
            board[x][y] = '*';
            i++;
        }
    }
}

int countNearBomb(char board[N+5][N+5], int x, int y) {
    int count = 0;
    for (int i = x-1; i <= x+1; i++) {
        for (int j = y-1; j <= y+1; j++) {
            if(i >= 0 && i < 10 && j >= 0 && j < 10 && board[i][j] == '*') {
                count++;
            }
        }   
    }
    return count;
}

void countBomb(char board[N+5][N+5]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] != '*') {
                int count = countNearBomb(board, i, j);
                if(count == 0) board[i][j] = '.';
                else board[i][j] = '0' + count;
            }
        }
    }
}
void hideDisplay(char display[N+5][N+5]){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            display[i][j] = 0;
        }
    }
}
void printBoard(char board[N+5][N+5], char display[N+5][N+5]) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n   ");
    for (int i = 0; i < N; i++) {
        if((i+1) % 10 == 0) printf("%d", (i+1)/10);
        else printf(" ");
    }
    printf("\n");
    printf("   ");
    for (int i = 0; i < N; i++) {
        printf("%d",(i+1)%10);
    }
    printf("\n\n");
    for (int i = 0; i < N; i++) {
        printf("%2d ", i+1);
        for (int j = 0; j < N; j++) {
            if(display[i][j] == 0) printf("#");
            else printf("%c", board[i][j]);
        }
        printf("\n");
    }
}

int floodFill(char board[N+5][N+5], char display[N+5][N+5], int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= N || display[x][y] == 1) return 0;
    if ('1' <= board[x][y] && board[x][y] <= '9') {
        display[x][y] = 1;
        return 1;
    }
    display[x][y] = 1;
    return 1 + 
        floodFill(board, display, x-1, y) +
        floodFill(board, display, x+1, y) +
        floodFill(board, display, x, y-1) +
        floodFill(board, display, x, y+1) +
        floodFill(board, display, x-1, y-1) +
        floodFill(board, display, x-1, y+1) +
        floodFill(board, display, x+1, y-1) +
        floodFill(board, display, x+1, y+1);
}

int main() {
    srand(time(0));
    int x, y;
    char board[N+5][N+5] = {};
    generateBomb(board);
    countBomb(board);
    char display[N+5][N+5];
    hideDisplay(display);
    int count = 0;
    do {
        printBoard(board, display);
        printf("Input x(1..%d), y(1..%d): ", N, N);
        scanf("%d %d", &x, &y);
        if (board[x-1][y-1] == '*') {
            display[x-1][y-1] = 1;
            printBoard(board, display);
            printf("You Lose...\n");
            break;
        } else {
            count += floodFill(board, display, x-1, y-1);
        }
        if(count == N * N - N) {
            printBoard(board, display);
            printf("You Win...\n");
            break;
        }
    } while(1);
    return 0;
}