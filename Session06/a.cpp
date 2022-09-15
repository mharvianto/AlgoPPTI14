#include<stdio.h>

int main() {
    int t;
    char kata[1005];
    scanf("%d", &t); getchar();
    for (int tc = 0; tc < t; tc++) {
        scanf("%s", kata); getchar(); // gets(kata);
        printf("Case %d: ", tc+1);
        int l = 0;
        for (int i = 0; kata[i] != 0; i++) {
            l++;
        }
        for (int i = l - 1; i >= 0; i--) {
            printf("%d", kata[i] % 2);
        }
        printf("\n");
    }
    return 0;
}