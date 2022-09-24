#include<stdio.h>
#include<string.h>

int main(){
    int t;
    char kata[100005];
    scanf("%d", &t); getchar();
    for (int tc = 0; tc < t; tc++) {
        scanf("%s", kata); getchar();
        int l = strlen(kata), f[30] = {};
        for (int i = 0; i < l; i++) {
            f[kata[i] - 'a']++;
        }
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if(f[i] >= 1) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}