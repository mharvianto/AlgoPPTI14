#include<stdio.h>

int main() {
    printf("Hello World!\n");
    char nama[50], buff;
    scanf("%[^\n]", nama); getchar();
    // selama bukan new line
    printf("Nama: %s\n", nama);
    scanf("%[a-zA-Z ]", nama); getchar(); // scanf("%c", &buff);
    // hanya a-z, A-Z, dan space
    // RegEx => Regular Expression
    printf("Nama: %s\n", nama);
    char nim[15];
    scanf("%[0-9]", nim), getchar();
    printf("NIM: %s\n", nim);
    return 0;
}