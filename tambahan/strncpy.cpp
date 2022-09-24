#include<stdio.h>
#include<string.h>

int main(){
    // https://cplusplus.com/reference/cstring/strncpy/
    // copy n char of source to dest 
    char kata[100] = "universitas bina nusantara";
    char temp[100];
    strncpy(temp, &kata[12], 8);
    // temp[8] = 0; // add \0 at the end of string
    printf("'%s'\n", temp); // 'bina nus'
    strncpy(temp, &kata[12], 2); // copy 'bi'
    strncpy(&temp[2], &kata[17], 3); // copy 'nus' to index 2
    temp[5] = 0;
    printf("'%s'\n", temp); // 'binus'
    return 0;
}