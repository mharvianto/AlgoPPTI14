#include<stdio.h>
#include<string.h>

// bina ustr
int main(){
    char kata[100];
    scanf("%[^\n]", kata);
    int l = strlen(kata);
    for (int i = 0; i < l; i++) {
        int flag = 0;
        for (int j = 0; j < i; j++) {
            if (kata[i] == kata[j]) {
                flag = 1;
            }
        }
        if(flag == 0){
            printf("%c", kata[i]);
        }
    }
    printf("\n");
    return 0;
}