#include<stdio.h>
#include<string.h>

int main(){
    char kata[10005];
    gets(kata);
    int l = strlen(kata);
    for (int i = 0; i < l; i++) {
        if ('a' <= kata[i] && kata[i] <= 'z') {
            kata[i] += 'A' - 'a';
        }
        switch (kata[i]) {
            case 'I': kata[i] = '1';break;
            case 'R': kata[i] = '2';break;
            case 'E': kata[i] = '3';break;
            case 'A': kata[i] = '4';break;
            case 'S': kata[i] = '5';break;
            case 'G': kata[i] = '6';break;
            case 'T': kata[i] = '7';break;
            case 'B': kata[i] = '8';break;
            case 'P': kata[i] = '9';break;
            case 'O': kata[i] = '0';break;
        }
    }
    printf("%s\n", kata);
    return 0;
}