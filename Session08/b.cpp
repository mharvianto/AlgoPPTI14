#include<stdio.h>
#include<string.h>

int main(){
    char kata[15], subs[15][15];
    int n = 0;
    scanf("%s", kata);
    int l = strlen(kata);
    for (int i = 1; i <= l; i++) { // 100
        for (int j = 0; j <= l - i; j++) { // 100
            char temp[15];
            strncpy(temp, kata+j, i); // 100
            // for (int k = 0; k < i; k++){
            //     temp[k] = kata[k+j];
            // }
            temp[j+i] = 0;
            
            int flag = 0;
            for (int k = 0, m = i-1; k <= m; k++, m--) {
                if(temp[k] != temp[m]){
                    flag = 1;
                }
            }
            
            if (flag == 0) {
                int flag2 = 0;
                for (int k = 0; k < n; k++) {
                    if (strcmp(temp, subs[k]) == 0) {
                        flag2 = 1;
                    }
                }
                
                if (flag2 == 0) {
                    strcpy(subs[n], temp);
                    n++;
                }
            }
        }
    }
    printf("%d\n", n);
    return 0;
}