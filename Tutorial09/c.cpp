#include<stdio.h>

int main(){
    int t, n, a;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d", &n);
        int count[105] = {}, max = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            count[a]++;
            if(a > max) {
                max = a;
            }
        }
        printf("Case #%d: %d\n", tc+1, count[max]);
    }
    return 0;
}