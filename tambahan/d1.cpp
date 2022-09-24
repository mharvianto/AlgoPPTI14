#include<stdio.h>
#include<string.h>

int main(){
    char kata[100];
    scanf("%s", kata);
    int l = strlen(kata), n=0;
    for (int i = 0; i < l-1; i++) {
        for (int j = 0; j < l-i; j++) {
            int flag = 0;
            for (int k = 0; k < j; k++) {
                for (int m = k; m < k+i; m++) {
                    
                }
            }
            for (int k = j; k <= j+i; k++) {
                printf("%c", kata[k]);
            }
            printf("\n");
        }
    }
    return 0;
}