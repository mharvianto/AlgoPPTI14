#include<stdio.h>

int main(){
    int t;
    char kata[100005];
    int count[30];
    scanf("%d", &t); getchar();
    for (int tc = 0; tc < t; tc++) {
        scanf("%s", kata); getchar();
        for (int i = 0; i < 30; i++) {
            count[i] = 0;
        }
        for (int i = 0; kata[i] != '\0'; i++) {
            count[kata[i] - 'a'] = 1;
        }
        int sum = 0;
        for (int i = 0; i < 30; i++) {
            sum += count[i]; 
        }
        if(sum % 2 == 0){
            printf("Case #%d: Breakable\n", tc + 1);
        } else {
            printf("Case #%d: Unbreakable\n", tc + 1);
        }
    }
    return 0;
}