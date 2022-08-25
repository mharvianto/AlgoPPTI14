#include<stdio.h>

int main(){
    int t, n;
    long long sum, a;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d", &n);
        sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a);
            sum += a; // sum = sum + a;
        }
        printf("Case #%d: %lld\n", tc+1, sum);
    }
    return 0;
}