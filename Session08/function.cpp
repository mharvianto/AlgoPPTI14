#include<stdio.h>

int f(int x) {
    return x * x;
}

void cetak(){
    printf("Hello world\n");
}

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int abs(int a) {
    if (a < 0) {
        return -a;
    }
    return a;
}

char* upper(char kata[]){
    for (int i = 0; kata[i] != '\0'; i++) {
        if ('a' <= kata[i] && kata[i] <= 'z') {
            kata[i] -= 32;
        }
    }
    return kata;
}

int main(){
    cetak();
    printf("%d\n", f(5));
    printf("%d\n", min(90, 100));
    printf("%d\n", abs(-50));
    char kata[] = "dexter";
    printf("%s\n", upper(kata));
    printf("%s\n", kata);
    return 0;
}