#include<stdio.h>
#include<string.h>

/*
*/
int main() {
    int n, arr[100005], nGanjil=0, a;
    long long sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a%2==0) {
            sum += a;
        } else {
            arr[nGanjil] = a;
            nGanjil++;
        }
    }
    int j = nGanjil % 2;    
    for (int i = j; i < nGanjil; i++) {
        sum += arr[i];
    }
    printf("%lld\n", sum);
    return 0;
}