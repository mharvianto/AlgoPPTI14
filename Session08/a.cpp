#include<stdio.h>

int main() {
    int t, N, K, n[105][105], k[105][105];
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d %d", &N, &K);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &n[i][j]);
            }
        }
        for (int i = 0; i < K; i++) {
            for (int j = 0; j < K; j++) {
                scanf("%d", &k[i][j]);
            }
        }
        for (int i = 0; i < N-K+1; i++) {
            for (int j = 0; j < N-K+1; j++) {
                int sum = 0;
                for (int a = 0; a < K; a++) {
                    for (int b = 0; b < K; b++) {
                        sum += n[i+a][j+b] * k[a][b];
                    }
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
    }
    return 0;
}