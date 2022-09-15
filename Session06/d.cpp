#include<stdio.h>
#include<ctype.h>

int main(){
    int n, m, a;
    char kata[205];
    scanf("%d %d", &n, &m); getchar();
    scanf("%s", kata); getchar();
    for (int i = 0; i < m; i++) {
        scanf("%d", &a);
        // if ('a' <= kata[a] && kata[a] <= 'z') {
        //     kata[a] += 'A' - 'a';
        // } else {
        //     kata[a] += 'a' - 'A';
        // }
        if (isupper(kata[a])) {
            kata[a] = tolower(kata[a]);
        } else if(islower(kata[a])) {
            kata[a] = toupper(kata[a]);
        }
    }
    printf("%s\n", kata);
    return 0;
}