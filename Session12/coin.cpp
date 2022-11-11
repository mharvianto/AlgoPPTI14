#include<stdio.h>

int cc1(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    return cc1(n - 7) || cc1(n - 5) || cc1(n - 3);
}
// 100 -> 13 * 7 + 3 * 3

int main(){
    // 3, 5, 7
    printf("%d\n", cc1(4));
    printf("%d\n", cc1(100));

    printf("Hello") || printf("World") || printf("PPTI");
    printf("\n");
    printf("Hello1") && 0 && printf("World1") && printf("PPTI1");
    printf("\n");
    return 0;
}