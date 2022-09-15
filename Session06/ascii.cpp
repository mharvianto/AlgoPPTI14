#include<stdio.h>

int main(){
    printf("%d\n", '\0');
    for (int i = 0; i < 128; i++) {
        printf("%d: %c\n", i, i);
    }
    return 0;
}