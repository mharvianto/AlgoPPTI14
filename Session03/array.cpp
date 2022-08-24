#include<stdio.h>
#include<string.h>

int main (){
    char kata[100]; // array of char
    int listScore[50];
    char kata1[10] = "Agnes";
    char kata2[10] = {'J', 'o', 'e', 'l'};
    printf("Size : %lu\n", sizeof(kata1));
    printf("strlen : %lu\n", strlen(kata1));
    // printf("Size : %lu\n", sizeof(kata2));
    // printf("strlen : %lu\n", strlen(kata2));
    int nilai[50] = { 1, 2, 3, 4, 5, };
    int a, b, c, d, e, f, g;

    nilai[0] = 10;
    nilai[1] = 11;
    kata1[3] = 100;
    printf("%d\n", nilai[0]);
    printf("%d\n", kata1[0]);
    printf("%s\n", kata1);
    printf("%s\n", kata2);

    // printf("%ld\n", &a);
    // printf("%ld\n", kata1);
    // printf("%ld\n", &nilai[0]);
    // printf("%ld\n", &nilai[1]);
    return 0;
}