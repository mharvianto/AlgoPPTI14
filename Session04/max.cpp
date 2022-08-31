#include<stdio.h>

int main() {
    // 3299 1591 287 7590 9034 3646 2440 1228 2937 8692
    int n, arr[1005], min, max;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = 2<<20;
    max = -min;
    for (int i = 0; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    int max2 = -min;
    for (int i = 0; i < n; i++) {
        if (max2 < arr[i] && arr[i] < max) {
            max2 = arr[i];
        }
    }
    int total = 0;
    for (int i = 0; i < 10; i++) {
        total += arr[i]; // total = total + arr[i];
    }
    printf("%d %d %d\n", min, max, max2);
    printf("%d\n", total/n);
    return 0;
}