#include<stdio.h>
#include<stdlib.h>

int main() {
    /*
    r - read
    w - write
    a - append

    csv -> comma separator value
    */
    FILE *f = fopen("test.csv", "w");
    char nama[100];
    int score;
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d %[^\n]", &score, nama);
        fprintf(f, "\"%s\",%d\n", nama, score);
    }
    fclose(f);
    return 0;
}
/*
99 Felix gustino            
88 Howan, S.Kom
89 Agnes
70 Keren
50 Dexter
*/