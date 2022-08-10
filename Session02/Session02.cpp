#include <stdio.h>

int main() {
    /*
    selection dan loop
    condition operator
    < > <= >= == !=
    !   not 
    ||  or
    &&  and

    arithmatic operator
    + - * / 
    % modulus / sisa bagi

    bitwise operator
    | or
    & and
    ^ xor
    << shift left
    >> shift right

    a | b | a xor b
    1 | 1 | 0
    1 | 0 | 1
    0 | 1 | 1
    0 | 0 | 0
    */
    // printf("%d\n", );

    // selection
    // if else      -> lebih general, bisa untuk range
    // switch case  -> lebih spesifik

    // if else
    int angka;
    scanf("%d", &angka);
    // if (angka <= 5) {
    //     printf("lebih kecil dan sama dengan 5\n");
    // } else {
    //     if (angka > 7) {
    //         printf("lebih dari 7\n");
    //     } else {
    //         printf("lebih kecil dan sama dengan 7 dan lebih besar dari 5\n");
    //     }
    // }

    // if (angka <= 5) {
    //     printf("lebih kecil dan sama dengan 5\n");
    // } else if (angka < 3) {
    //     printf("lebih kecil dari 3\n");
    // } else {
    //     printf("lebih kecil dan sama dengan 7 dan lebih besar dari 5\n");
    // }

    // if (0 <= angka && angka <= 10) {
    //     if (angka >= 9) {
    //         printf("A\n");
    //     } else if (angka >= 7) {
    //         printf("B\n");
    //     } else if (angka >= 5) {
    //         printf("C\n");
    //     } else {
    //         printf("D\n");
    //     }
    // }
    
    // 9 <= angka <= 10 -> 9 <= angka && angka <= 10
    // if (9 <= angka && angka <= 10) {
    //     printf("A\n");
    // } else if (7 <= angka && angka <= 8) {
    //     printf("B\n");
    // } else if (5 <= angka && angka <= 6) {
    //     printf("C\n");
    // } else if (0 <= angka && angka <= 4) {
    //     printf("D\n");
    // }

    // int sisa = angka % 2;
    // if (sisa == 1) {
    //     printf("Ganjil\n");
    // } else {
    //     printf("Genap\n");
    // }

    switch (angka) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4: printf("D\n"); break;
        case 5:
        case 6: printf("C\n"); break;
        case 7:
        case 8: printf("B\n"); break;
        case 9:
        case 10: printf("A\n"); break;
    }
    return 0;
}