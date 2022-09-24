#include<stdio.h>
#include<string.h>

int main(){
    char kata[100];
    char subs[100][100];
    scanf("%s", kata);
    int l = strlen(kata), n=0;
    for (int i = 0; i < l-1; i++) {
        for (int j = 0; j < l-i; j++) {
            char temp[100];
            int m = 0;
            for (int k = j; k <= j+i; k++) {
                temp[m] = kata[k];
                m++;
            }
            temp[m] = 0;

            int flag = 0;
            for (int k = 0; k < n; k++) {
                if (strcmp(temp, subs[k]) == 0) {
                    flag = 1;
                }
            }
            if (flag == 0) {
                strcpy(subs[n], temp);
                n++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", subs[i]);
    }
    
    return 0;
}