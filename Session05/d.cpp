#include<stdio.h>

int main(){
    int t, n, arr[2005];
    long long sum;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d", &n);
        sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > sum) {
                count++;
            }
        }
        printf("Case #%d: %lld\n%d\n", tc + 1, sum, count);
    }
    return 0;
}