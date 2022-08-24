#include<stdio.h>
/*
Input:
3
5
1 2 3 4 5
3
5 6 7
8
1 2 3 4 5 6 7 8

Output:
15
18
36
*/

int main() {
    int t, n, arr[105], total;
    scanf("%d", &t);
    for (int tCase = 0; tCase < t; tCase++)
    {
        scanf("%d", &n);
        total = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            total += arr[i];
        }
        printf("%d\n", total);
    }
    return 0;
}