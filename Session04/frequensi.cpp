#include<stdio.h>

int main(){
    int arr[15];
    for (int i = 1; i <= 10; i++) {
        arr[i] = 0;
    }
    int n, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        arr[a]++; // arr[a] = arr[a] + 1;
    }
    for (int i = 1; i <= 10; i++) {
        if (arr[i] > 0) {
            printf("%d: %d\n", i, arr[i]);
        }
    }
    return 0;
}