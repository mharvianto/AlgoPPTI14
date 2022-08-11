#include<stdio.h>

int main() {
    // looping
    // for
    // do-while
    // while

    int a; // deklarasi variable
    int b = 10; // deklarasi dan inisialisasi
    b = b + 1;

    // printf("%d %d\n", a, b);

    // shorthand operator
    /*
    a++; post-increment // a = a + 1;
    ++a; pre-increment  // a = a + 1; 
    a--; post-decrement // a = a - 1;
    --a; pre-decrement  // a = a - 1;

    a+=2; // a = a + 2;
    a-=2; // a = a - 2;
    a*=2; // a = a * 2;
    a/=2; // a = a / 2;
    a%=2; // a = a % 2;
    a|=2; // a = a | 2;
    a&=2; // a = a & 2;
    */

    // for([inisialisasi]; [condition]; [statement / increnment])
    for (int i = 1; i <= 10/2; i++) {
        // printf("Loop for %d\n", i);
        printf("Loop for %d\n", (i * 2) - 1);
        // if ( i%2 != 0) {
        //     printf("Loop for %d\n", i);
        // }
    }

    for (int i = 0; i < 10; i++) {
        printf("Loop %d\n", i);
    }

    // for (int i = 10; i > 0; i--) {
    //     printf("Loop %d\n", i);
    // }

    // while([condition])

    int j = 0;
    while(j < 0) {
        printf("Loop while %d\n", j);
        j++;
    }

    // do while([condition]) -> validasi

    int k = 0;
    do {
        printf("Loop do-while %d\n", k);
        k++;
    } while(k < 0);
    
    return 0;

    /*
    input n
    bikin persegi n * n 
    ****
    ****
    ****
    ****

    bikin segitiga siku-siku n * n
    rata kita, rata kanan

    persegi kosong
    ****
    *  *
    *  *
    ****

    segitiga siku-siku yg kosong
    */
}