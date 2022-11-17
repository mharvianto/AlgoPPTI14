#include<stdio.h>

int cc1(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    return cc1(n - 7) || cc1(n - 5) || cc1(n - 3);
}
// 100 -> 13 * 7 + 3 * 3

int min(int a, int b) {
    return a < b ? a : b;
}

int cc2(int n) {
    if (n < 0) return 400000;
    if (n == 0) return 0;
    return min(cc2(n - 7), min(cc2(n - 5), cc2(n - 3))) + 1;
}

int m = 3;
int arr[10] = {3, 5, 7};
int cc3(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    int count = 0; 
    for (size_t i = 0; i < m; i++) {
        count += cc3(n - arr[i]);
    }
    return count;
    // return cc3(n - 7) + cc3(n - 5) + cc3(n - 3);
}

int main(){
    // 3, 5, 7
    printf("%d\n", cc1(4));
    printf("%d\n", cc2(4));
    printf("%d\n", cc3(4));
    printf("%d\n", cc1(100));
    printf("%d\n", cc2(50));
    printf("%d\n", cc3(50));

    // printf("Hello") || printf("World") || printf("PPTI");
    // printf("\n");
    // printf("Hello1") && printf("World1") && 0 && printf("PPTI1");
    // printf("\n");
    return 0;
}