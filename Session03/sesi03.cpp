#include<stdio.h>

int main(){
    int a = 5, b = 7;
    int y = ++a;
    printf("%d %d\n", y, a); // 6
    int z = a++;

    printf("%d %d\n", z, a); // 6
    printf("%d %d %d\n", b++, b++, ++b); // 7 8 10

    if (b > 7) {
        printf("lebih besar\n");
    } else {
        printf("lebih kecil\n");
    }
    b > 7 ? printf("besar\n") : printf("kecil\n");

    int x = b >= 0? b : -b;
    if(b >= 0){
        x = b;
    } else {
        x = -b;
    }
    printf("%d %d\n", ~10, !10);
    return 0;
}