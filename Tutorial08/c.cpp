#include<stdio.h>

int b;
void f(int a) {
    if(a == b){
        printf("YES\n");
    } else if(a == 1) {
        printf("NO\n");
    } else if(a % 2 == 0) {
        f(a/2);
    } else {
        f((a * 3) + 1);
    }
}

int main(){
    int t, a;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: ", tc + 1);
        f(a);
    }
    return 0;
}