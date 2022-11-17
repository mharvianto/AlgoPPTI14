#include<stdio.h>
#include<math.h>

int po[50];
int l;

int f(int x) {
    if (x < 0) return 0;
    if (x == 0) return 1;
    int count = 0;
    for (int i = 2; i <= l; i++) {
        count += f(x - po[i]);
    }
    return count;
}

int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    l = pow(x, 1.0 / n);
    for (int i = 1; i <= l; i++) {
        po[i] = pow(i, n);
    }
    printf("%d\n", f(x));
    return 0;
}