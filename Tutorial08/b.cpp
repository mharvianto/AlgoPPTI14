#include<stdio.h>

int fibo(int x, int y, int n) {
    if (n == 0) return x;
    if (n == 1) return y;
    return fibo(x, y, n-1) - fibo(x, y, n-2);
}

int main(){
    int t, n, x, y;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d %d %d", &n, &x, &y);
        printf("Case #%d: %d\n", tc+1, fibo(x, y, n));
    }
    return 0;
}