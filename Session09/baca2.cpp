#include<stdio.h>
#include<stdlib.h>

int main() {
    char nama[100];
    int nilai;
    FILE *fp = fopen("in2.txt", "r");
    while (!feof(fp)) {
        int x = fscanf(fp, "%[^#]#%d\n", nama, &nilai);
        // fgetc(fp);
        if (x > 0) {
            printf("%d %s\n", nilai, nama);
        }
    }
    fclose(fp);
    return 0;
}