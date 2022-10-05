#include<stdio.h>

int main(){
    int t, n, arr[10005];
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int count = 0;
        for (int i = 0; i < n;) {
            if (arr[i] == arr[i+1]) {
                count++;
                i+=2;
            } else {
                i++;
            }
        }
        printf("Case #%d: %d\n", tc+1, count);
    }
    return 0;
}