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
    // kompleksitas
    // linear -> O(n)
    // binary -> O(log2(n))
    // quick sort -> O(n * log2(2))

    // kompleksitas melakukan pencari 1 kali menggunakan binary search pada data yg tidak terurut (n = 10000)
    // quick sort + binary search
    // O(n*log2(n)) + O(log2(n)) => 10000 * 13 + 13 => 130013

    // kompleksitas melakukan pencari 1 kali menggunakan linear search pada data yg tidak terurut (n = 10000)
    // linear search
    // O(n) => 10000

    // terlihat pada nilai di atas, lebih efektif menggunakan linear search apabila cuma 1 kali melakukan search

    // kompleksitas melakukan pencari 1000 kali menggunakan binary search pada data yg tidak terurut (n = 10000)
    // quick sort + 1000 x binary search
    // n log n + 1000 * log n => 10000 * 13 + 1000 * 13 => 143000

    // kompleksitas melakukan pencari 1000 kali menggunakan linear search pada data yg tidak terurut (n = 10000)
    // 1000 x linaer search
    // 1000 * n = 1000 * 10000 = 10000000

    // terlihat pada nilai di atas, lebih efektif menggunakan binary search apabila cuma 1000 kali melakukan search pada data yg sama

    // Linear Search        : 00:00:00.0003526
    // Binary Search        : 00:00:00.0270795
    // 1000 x Linear Search : 00:00:00.2995440
    // 1000 x Binary Search : 00:00:00.0275389

    return 0;
}