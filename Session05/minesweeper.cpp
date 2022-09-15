#include<stdio.h>

/*
https://onlinejudge.org/external/101/10189.pdf
Input:
5 5
.....
..**.
...*.
*..*.
.....

Output:
01221
01**2
124*3
*12*2
11111
*/

int main() {
    int n, m;
    char board[105][105];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", board[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == '.') {
                int count = 0;
                for (int k = i-1; k <= i+1; k++) {
                    for (int l = j-1; l <= j+1; l++) {
                        if (0 <= k && k < n && 0 <= l && l < m && board[k][l] == '*') {
                            count++;
                        }
                    }
                }
                printf("%d", count);
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}