#include<stdio.h>

int main() {
    char board[5][5];
    int checker[10][10] = {
        { 0, 0, 1, 1, 2, 2}, // diag 1
        { 0, 2, 1, 1, 2, 0}, // diag 2
        { 0, 0, 0, 1, 0, 2}, // row 1
        { 1, 0, 1, 1, 1, 2}, // row 2
        { 2, 0, 2, 1, 2, 2}, // row 3
        { 0, 0, 1, 0, 2, 0}, // col 1
        { 0, 1, 1, 1, 2, 1}, // col 2
        { 0, 2, 1, 2, 2, 2}, // col 3
    };
    int turn = 0, x, y;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%c", board[j][k]);
            }
            printf("\n");
        }
        scanf("%d %d", &x, &y);
        if (board[y-1][x-1] == ' ') {
            if (turn == 0) {
                board[y-1][x-1] = 'O';
            } else {
                board[y-1][x-1] = 'X';
            }
            turn = (turn + 1) % 2;
        } else {
            i--;
        }
        // if (board[0][0] == board[0][1] && board[0][1] == board[0][2]){

        // }
        int check = 0;
        // for (int j = 0; j < 3; j++) {
        //     check = 0;
        //     for (int k = 1; k < 3; k++) {
        //         if (board[j][0] == board[j][k] && board[j][0] != ' ') {
        //             check++;
        //         }
        //     }
        //     if (check == 2) {
        //         printf("%c Win\n", board[j][0]);
        //         return 0;
        //     }
            
        //     check = 0;
        //     for (int k = 1; k < 3; k++) {
        //         if (board[0][j] == board[k][j] && board[0][j] != ' ') {
        //             check++;
        //         }
        //     }
        //     if (check == 2) {
        //         printf("%c Win\n", board[0][j]);
        //         return 0;
        //     }
        // }
        // if(board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        //     printf("%c Win\n", board[0][0]);
        //     return 0;
        // }
        // if(board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        //     printf("%c Win\n", board[0][2]);
        //     return 0;
        // }
        for (int j = 0; j < 8; j++) {
            if (board[checker[j][0]][checker[j][1]] == board[checker[j][2]][checker[j][3]] && board[checker[j][0]][checker[j][1]] == board[checker[j][4]][checker[j][5]]) {
                printf("%c Win\n", board[checker[j][0]][checker[j][1]]);
                return 0;
            }
        }
    }
    return 0;
}