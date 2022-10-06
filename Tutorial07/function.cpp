#include<stdio.h>

/*
passing parameter
    - passing by value -> int, float, char
    - passing by reference -> array, address, pointer
default value
*/

int byValue(int a) {
    a += 2;
    return a;
}

int byRef(int a[]) {
    a[0] += 5;
    return a[0];
}

int byRef1(int* a) {
    *a += 10;
    return *a;
}

int min(int a, int b = 0) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    int b = 10;
    printf("%d\n", b);
    printf("%d\n", byValue(b));
    printf("%d\n", b);
    printf("%d\n", byValue(7));
    int c[10] = {1, 2, 3, 4, 5};
    printf("%d\n", byRef(c));
    printf("%p\n", c);
    for (int i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    // for (int i = 0; i < 5; i++) {
    //     int b = 15;
    //     printf("%d\n", b);
    // }
    // {
    //     int b = 5;
    //     printf("%d\n", b);
    // }
    // int *p = &b;
    // printf("%p\n", &b);
    // printf("%p\n", p);
    // printf("%d\n", *p);
    // b = 7;
    // printf("%d\n", *p);
    // *p = 15;
    // printf("%d\n", b);

    printf("byRef1: %d\n", byRef1(&b));
    printf("b: %d\n", b);

    printf("%d\n", min(100));
    return 0;
}