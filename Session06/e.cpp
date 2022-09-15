#include<stdio.h>
#include<string.h>

int main(){
    int t;
    char kata[505]; 
    scanf("%d",&t); getchar();
    for (int tc = 0; tc < t; tc++) {
        scanf("%s", kata); getchar();
        int flag = 0;
        int l = strlen(kata);
        for (int i = 0; i < l / 2; i++) {
            if (kata[i] != kata[l - i - 1]) {
                flag = 1;
            }
        }
        
        if (flag == 1) {
            printf("Case #%d: Nah, it's not a palindrome\n", tc+1);
        } else {
            printf("Case #%d: Yay, it's a palindrome\n", tc+1);
        }
    }
    return 0;
}