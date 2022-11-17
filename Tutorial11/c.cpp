#include<stdio.h>

int counting(int arr[], int n) {
    int count[200005];
    for (int i = 1; i <= 200000; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int k = 0;
    for (int i = 1; i <= 200000; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[k++] = i;
        }
    }
}

int binary(int arr[], int n, int find) {
    int l = 0, h = n-1, m;
    while(l <= h) {
        m = (l + h) / 2;
        if (arr[m] == find) {
            return m + 1;
        } else if (find < arr[m]) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }
    return -1;
}

int main() {
    int n, q, arr[100005], a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    counting(arr, n);
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &a);
        printf("%d\n", binary(arr, n, a));
    }
    return 0;
}