#include<stdio.h>

int main() {
    int angka = 100000;
    char nama[20] = "Bin";
    double des = 22.0/7.0;
    printf("Angka: %10d\n", angka); // base 10
    printf("Angka: %o\n", angka);   // octal / base 8
    printf("Angka: %x\n", angka);   // hexadecimal / base 16
    // #ff0099
    printf("Nama: '%5s'\n", nama);
    printf("pi: %.51lf\n", des);
    return 0;
}