#include<stdio.h>

long long fibo(int n);

int factorial(int n) {
    if(n == 0) return 1;
    return n * factorial(n - 1);
}

void loop(int n) {
    if(n == 0) return;
    printf("Before %d\n", n);
    loop(n-1);
    printf("After %d\n", n);
}

int main() {
    loop(5);
    // printf("%lld\n", fibo(5));
    // printf("%lld\n", factorial(5));
    return 0;
}

long long fibo(int n) {
    printf("%d ", n);
    if(n == 1 || n == 0) return 1;
    return fibo(n-1) + fibo(n-2);
}