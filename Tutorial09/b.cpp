#include<stdio.h>

int fibo(int n) {
    if (n == 0 || n == 1) return 1;
    return 1 + fibo(n-1) + fibo(n-2);
}

int main(){
    int arr[50];
    arr[0] = arr[1] = 1;
    for (int i = 2; i <= 40; i++) {
        arr[i] = 1 + arr[i-1] + arr[i-2];
    }
    int t, n;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d", &n);
        // printf("Case #%d: %d\n", tc+1, fibo(n));
        printf("Case #%d: %d\n", tc+1, arr[n]);
    }
    return 0;
}