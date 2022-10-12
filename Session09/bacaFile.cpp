#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, a, sum = 0;
    FILE *f = fopen("in.txt", "r");
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; i++) {
        fscanf(f, "%d", &a);
        sum += a;
    }
    printf("%d\n", sum);
    return 0;
}