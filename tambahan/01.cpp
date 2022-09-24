#include<stdio.h>

int main(){
    char kata[] = "05:58:30PM";
    int h, m, s;
    char a;
    sscanf(kata, "%d:%d:%d%cM", &h, &m, &s, &a);
    printf("%02d:%02d:%02d ", h, m, s);
    if(a == 'a') {
        printf("Pagi\n");
    } else {
        printf("Siang\n");
    }
    char result[100];
    sprintf(result, "%02d:%02d:%02d", h, m, s);
    // sprintf(result, "Pagi");    
    printf("%s\n", result);
    return 0;
}