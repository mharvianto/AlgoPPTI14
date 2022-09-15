#include<stdio.h>
#include<string.h>

int main(){
    char kata[1005];
    scanf("%[^\n]", kata);
    int l = strlen(kata);
    int f[30] = {};
    for (int i = 0; i < l; i++) {
        if ('A' <= kata[i] && kata[i] <= 'Z') {
            kata[i] += 32;
        }
        if ('a' <= kata[i] && kata[i] <= 'z') {
            f[kata[i] - 'a'] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; i++) {
        count += f[i];
    }
    if (count == 26) {
        printf("pangram\n");
    } else {
        printf("not pangram\n");
    }
    
    return 0;
}