/*
0 1 2 3 4 5 6  7  8  9
1 1 2 3 5 8 13 21 34 55
input:
3
5
7
9

output:
8
21
55
*/
#include<stdio.h>

int main(){
    long long arr[105];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= 100; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }

    int t, n;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d", &n);
        printf("%lld\n", arr[n]);
    }
    return 0;
}