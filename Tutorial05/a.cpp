#include<stdio.h>

int main(){
    int n;
    char kata[105];
    for (int i = 0; i < 3; i++) {
        scanf("%d %s", &n, kata); getchar();
        printf("%c%c\n", kata[n-1], kata[0]);
    }
    return 0;
}