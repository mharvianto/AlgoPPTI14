#include<stdio.h>

int sum(int arr[], int n) {
    if (n < 0) return 0;
    return arr[n] + sum(arr, n-1);
}

int main(){
    int t, n, arr[1005];
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("Case #%d: %d\n", tc+1, sum(arr, n-1));
    }
    return 0;
}