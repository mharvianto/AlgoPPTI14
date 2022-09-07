#include<stdio.h>
#include<math.h>

int main(){
    int arr[200005], t, n, a;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        for (int i = 1; i <= 200000; i++) {
            arr[i] = 0;
        }
        
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            arr[a]++;
        }

        int max = 0, m = 0, arrMax[20005];
        for (int i = 1; i <= 200000; i++) {
            if (max < arr[i]) {
                max = arr[i];
                m = 0;
                arrMax[m++] = i;
            } else if(max == arr[i]) {
                arrMax[m++] = i;
            }
        }
        printf("Case #%d: %d\n", tc + 1, max);

        for (int i = 0; i < m; i++) {
            if (i == 0) {
                printf("%d", arrMax[i]);
            } else {
                printf(" %d", arrMax[i]);
            }
        }
        
        // for (int i = 1; i <= 200000; i++) {
        //     if (max == arr[i]) {
        //         if (m == 0) {
        //             printf("%d", i);
        //         } else {
        //             printf(" %d", i);
        //         }
        //         m++;
        //     }
        // }
        printf("\n");
    }
    return 0;
}