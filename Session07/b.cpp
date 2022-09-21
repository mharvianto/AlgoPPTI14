#include<stdio.h>
#include<string.h>

int main() {
    int t, a, b, c, d;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d %d", &a, &b);
        c = 0;
        d = 1;
        while (a > 0 || b > 0) {
            c += (((a % 10) + (b % 10)) % 10) * d;
            a /= 10;
            b /= 10;
            d *= 10;
        }
        printf("Case #%d: %d\n", tc+1, c);
    }
    
    return 0;
}