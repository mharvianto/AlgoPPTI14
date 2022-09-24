#include<stdio.h>

int main(){
    int t, n, arr[100005];
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d", &n);
        int sumR = 0, sumL = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sumR += arr[i];
        }
        int flag = 0;
        for (int i = 0; i < n; i++) {
            sumR -= arr[i];
            if (sumR == sumL) {
                flag = 1;
                break;
            }
            sumL += arr[i];
        }
        if (flag == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}