#include<stdio.h>

int fibo(int a, int b, int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    return fibo(a, b, n-1) + fibo(a, b, n-2);
} 

int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    // int arr[40];
    // arr[0] = a;
    // arr[1] = b;
    // for (int i = 2; i <= n; i++) {
    //     arr[i] = arr[i-1] + arr[i-2];
    // }
    // printf("%d\n", arr[n]);
    printf("%d\n", fibo(a, b, n));
    return 0;
}