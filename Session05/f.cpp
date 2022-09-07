#include<stdio.h>

int main() {
    int t, n, v[100005];
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d", &n);
        int max1, max2;
        for (int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }
        max1 = 0;
        for (int i = 0; i < n; i++) {
            if (v[max1] < v[i]) {
                max1 = i;
            }
        }
        int temp = v[max1];
        v[max1] = v[0];
        v[0] = temp;
        max2 = 1;
        for (int i = 1; i < n; i++) {
            if (v[max2] < v[i]) {
                max2 = i;
            }
        }
        printf("Case #%d: %d\n", tc+1, v[0] + v[max2]);
    }
    
    return 0;
}