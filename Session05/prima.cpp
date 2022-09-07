#include<stdio.h>

/*

3
2
101
123

*/

int main() {
    int t, a;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d", &a);
        if(a < 2){
            printf("Case #%d: Not Prime\n", tc+1);
        } else if(a != 2 && a % 2 == 0) {
            printf("Case #%d: Not Prime\n", tc+1);
        } else {
            int factor = 2;
            for (int i = 3; i * i <= a; i+=2) {
                if (a % i == 0) {
                    factor++;
                }
            }
            if (factor == 2) {
                printf("Case #%d: Prime\n", tc+1);
            } else {
                printf("Case #%d: Not Prime\n", tc+1);
            }
        }
    }
    return 0;
}