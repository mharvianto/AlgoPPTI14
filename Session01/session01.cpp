#include <stdio.h>
// stdio -> standard input output library

// mengetik: 30-40 wpm
// single line comment
/*
multiple line comment
*/

// function
// int  -> return type
// main -> name fuction
int main()
{
    /*
    input
    output
    store/variable/array
    compute
    selection -> condition
    loop
    */
    printf("Hello world! \"Agnes\"\n");
    printf("Discount: 10%%\n");
    // printf -> syntax untuk mencetak
    /*
    Escape Sequence
    \n -> new line
    \t -> tab
    \\ -> \
    \" -> "
    %% -> %
    \a -> alert
    */
    /*
    type data:
    %d  short
    %d  int     angka bulat
    %ld long

    %c  char    huruf/character
    %s  char[]  array of char/kata/string

    %f  float   angka decimal
    %lf double
    */
    // input
    // variable -> [type data] [name]
    int angka;
    scanf("%d", &angka);
    printf("Angka: %d\n", angka);
    char nama[50];
    scanf("%s", nama);
    printf("Nama: %s\n", nama);
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a + b;
    printf("%d + %d = %d\n", a, b, c);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    return 0;
}

// gcc -> compiler C
// g++ -> compiler C++
// javac -> compiler Java

/*
style
*/