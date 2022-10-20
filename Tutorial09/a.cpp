#include<stdio.h>

void fibo(int n, char a, char b){
    if (n == 0) {
        printf("%c", a);
    } else if (n == 1) {
        printf("%c", b);
    } else {
        fibo(n-1, a, b);
        fibo(n-2, a, b);
    }
}

int main(){
    int tc, n;
    char a, b;
    scanf("%d", &tc);
    for (int t = 0; t < tc; t++) {
        scanf("%d %c %c", &n, &a, &b);
        printf("Case #%d: ", t+1);
        fibo(n, a, b);
        printf("\n");
    }
    return 0;
}