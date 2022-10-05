#include<stdio.h>

int main() {
    int t, n, i;
    long long m;
    // double i;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%lld %d %d", &m, &i, &n);
        printf("Case #%d:\n", tc+1);
        for (int j = 0; j < n; j++) {
            m += m * i * 80 / 120000;
            printf("%d %lld\n", j+1, m);
        }
    }
    return 0;
}