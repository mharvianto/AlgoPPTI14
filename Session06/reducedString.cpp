#include<stdio.h>
#include<string.h>

int main(){
    char kata[105];
    scanf("%s", kata);
    int l = strlen(kata);
    int n = 0;
    for (int i = 0; i < l; i++) {
        for (int j = i+1; j < l; j++) {
            if(kata[i] == kata[j] && kata[i] != 0){
                kata[i] = 0;
                kata[j] = 0;
                n += 2;
            }
        }
    }
    for (int i = 0; i < l; i++) {
        if (kata[i] != 0) {
            printf("%c", kata[i]);
        }
    }
    if (n == l) {
        printf("Empty String");
    }
    printf("\n");
    return 0;
}