#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char kata[105];
    scanf("%[^\n]", kata); getchar();
    int l = strlen(kata);
    for (int i = 0; i < l; i++) {
        if (i % 2 == 0 && 'a' <= kata[i] && kata[i] <= 'z') { // a-z
            kata[i] += 'A' - 'a';
        }
        switch (kata[i]) {
            case 'e': kata[i] = '3';break;
            case 'a': kata[i] = '@';break;
            case 'i': kata[i] = '!';break;
            case 'o': kata[i] = '0';break;
        }
    }
    printf("%s\n", kata);
    // scanf("%[^\n]", kata); getchar();
    // l = strlen(kata);
    // for (int i = 0; i < l; i++) {
    //     kata[i] -= 3;
    // }
    // printf("%s\n", kata);
    return 0;
}