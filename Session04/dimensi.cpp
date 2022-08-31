#include<stdio.h>



int main () {
    int M[5][5] = { {1, 2},
                    {3, 4}}; 
    int N[5][2] = { 1, 2, 
                    3, 4, 
                    5, 6, 
                    7, 8, 
                    9};
    printf("%d\n", M[1][1]);
    printf("%d\n", N[2][0]);

    // n*n
    int n, arr[105][105];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == j) {
                total += arr[i][j];
            }
        }
    }
    total = 0;
    int diag2 = 0;
    for (int i = 0, j = n-1; i < n; i++, j--) {
        total += arr[i][i];
        diag2 += arr[i][j];
    }
    return 0;
}