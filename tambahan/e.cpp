#include<stdio.h>
#include<string.h>

int main(){
    char kata[100];
    scanf("%s", kata);
    int l = strlen(kata);
    int arr[300]={0};
    for(int x=0;x<l;x++){
            arr[kata[x]]++;
    }
    char kata2[100];
    int index=0;
    for(int x=0;x<300;x++){
        if(arr[x]!=0){
            kata2[index]=x;
            index++;
        }
    }
    kata2[index] = 0;
    l = strlen(kata2);
    printf("%s\n", kata2);
    for (int i = 0; i < l-1; i++) {
        for (int j = 0; j < l-i; j++) {
            for (int k = j; k <= j+i; k++) {
                printf("%c", kata2[k]);
            }
            printf("\n");
        }
    }
    return 0;
}