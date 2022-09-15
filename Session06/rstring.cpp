#include<stdio.h>
#include<string.h>

int main(){
    char kata[105];
    scanf("%s", kata);
    int checker = 0;
    do{
        checker = 0;
        int l = strlen(kata);
        char temp[105];
        int j = 0;
        for (int i = 0; i < l; i++) {
            if (kata[i] == kata[i+1]) {
                i++;
                checker = 1;
            } else {
                temp[j] = kata[i];
                j++;
            }
        }
        for (int i = 0; i < j; i++) {
            kata[i] = temp[i];
        }
        kata[j] = 0;
    } while (checker == 1);
    if (strlen(kata) == 0) {
        printf("Empty String\n");
    } else {
        printf("%s\n", kata);
    }
    return 0;
}