#include<stdio.h>
#include<string.h>

int main(){
    int t;
    char kata[1005];
    scanf("%d", &t); getchar();
    for (int tc = 0; tc < t; tc++) {
        scanf("%s", kata); getchar();
        int l = strlen(kata);
        printf("Case #%d: ", tc + 1);
        for (int i = l-1; i >= 0; i--) {
            if('a' <= kata[i] && kata[i] <= 'z') { //  1 < x < 10
                kata[i] += 'A' - 'a';
            } else if('A' <= kata[i] && kata[i] <= 'Z') { //  1 < x < 10
                kata[i] += 'a' - 'A';
            }
            printf("%c", kata[i]);
        }
        printf("\n");
    }
    return 0;
}