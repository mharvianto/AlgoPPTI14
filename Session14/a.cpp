#include<stdio.h>

int arr[400005], n;
long long m, c[400005];

long long f() {
    long long max = 0, sum = 0;
    int i = n, j = n, k = 0;
    while (i >= 0) {
        if (sum == m) {
            return sum;
        } else if (sum < m) {
            i--;
            k++;
            sum += arr[i] * k;
        } else {
            k--;
            sum -= (c[i] - c[j]);
            j--;
        }
        if (sum > max && sum < m) {
            max = sum;
        }
    }
    return max;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    long long sum = 0;
    c[n] = 0;
    for (int i = n-1; i >= 0; i--) {
        sum += arr[i];
        c[i] = sum;
    }
    scanf("%lld", &m);
    printf("%lld\n", f());
    return 0;
}

/*
5
6 1 3 4 6
10

5
1 2 3 4 5
14

*/