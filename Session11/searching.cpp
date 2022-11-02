#include<stdio.h>

int linaerSearch (int arr[], int n, int find) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == find) {
            return i;
        }
    }
    return -1;
}

int binarySearch (int arr[], int n, int find) {
    int l = 0, h = n-1, m;
    while (l <= h) { // log2(n)
        m = (l + h) / 2;
        if (arr[m] == find) {
            return m;
        } else if (find < arr[m]) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }
    return -1;
}

int main() {
    // linear -> n
    // binary -> log2(n)

    // quick -> n * log2(2)

    // quick + binary
    // n log n + log n -> n log n

    // quick + 1000 * binary
    // n log n + 1000 * log n = 146164

    // 1000 * linaer
    // 1000 * n = 10000 * 1000 = 10000000

    return 0;
}