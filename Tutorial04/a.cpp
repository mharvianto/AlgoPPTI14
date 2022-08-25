#include<stdio.h>

int main (){
    int t, a, b;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d %d", &a, &b);
        if(a > b){
            printf("Case #%d: Go-Jo\n", tc+1);
        } else {
            printf("Case #%d: Bi-Pay\n", tc+1);
        }
    }
    return 0;
}