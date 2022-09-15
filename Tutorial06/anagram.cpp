#include<stdio.h>
#include<string.h>

int main() {
    int n;
    char kata[10005];
    scanf("%d", &n); getchar();
    for (int i = 0; i < n; i++) {
        scanf("%s", kata); getchar();
        int l = strlen(kata);
        if (l % 2 == 1) {
            printf("-1\n");
        } else {
            int f1[30], f2[30];
            for (int i = 0; i < 30; i++) {
                f1[i] = 0;
                f2[i] = 0;
            }
            for (int j = 0; j < l; j++) {
                if(j < l / 2) {
                    f1[kata[j] - 'a']++;
                } else {
                    f2[kata[j] - 'a']++;
                }
            }
            int count = 0;
            for (int j = 0; j < 26; j++) {
                if (f1[j] < f2[j]) {
                    count += f1[j];
                } else {
                    count += f2[j];
                }
            }
            printf("%d\n", (l / 2) - count);
        }
    }
    return 0;
}