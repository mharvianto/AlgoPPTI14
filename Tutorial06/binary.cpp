#include<stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    printf("Hex: %x\n", x);
    printf("Otc: %o\n", x);
    // 10 -> 1010
    int bin = x;
    int arr[100], n = 0;
    while (bin > 0) {
        arr[n] = bin % 2;
        n++;
        bin /= 2;
    }
    printf("Bin: ");
    for (int i = n-1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}