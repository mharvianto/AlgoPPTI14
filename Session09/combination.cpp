#include<stdio.h>

// void f(int n){
//     if (n == 0) {
//         return;
//     }
//     f(n-1);
// }


char arr[100];
void g(int i, int n){
    if (n == i) {
        arr[i] = '\0';
        printf("%s\n", arr);
        return;
    }
    for (int j = 1; j <= n; j++) {
        arr[i] = '0' + j;
        g(i+1, n);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    g(0, n);
    return 0;
}