#include<stdio.h>

int main(){
    int n, k, arr[100005] = {};
    char kata[100005];
    scanf("%d %d", &n, &k); getchar();
    scanf("%s", kata);
    int flag = 0;
    for (int i = 0, j = n-1; i <= j; i++, j--) {
        if (kata[i] < kata[j] && k >= 1) {
            kata[i] = kata[j];
            arr[i] = 1;
            k--;
        } else if (kata[i] > kata[j] && k >= 1) {
            kata[j] = kata[i];
            arr[j] = 1;
            k--;
        } else if (kata[i] != kata[j] && k == 0) {
            flag = 1;
        }
    }
    if(flag == 1) {
        printf("-1\n");
    } else {
        for (int i = 0, j = n-1; i <= j; i++, j--) {
            if (kata[i] < '9' && kata[j] < '9') {
                if(i == j && k >= 1){
                    kata[i] = '9';
                    k--;
                } else if(arr[i] == 0 && arr[j] == 0 && k >= 2) {
                    kata[i] = '9';
                    kata[j] = '9';
                    k -= 2;
                } else if(arr[i] == 1 && arr[j] == 0 && k >= 1) {
                    kata[i] = '9';
                    kata[j] = '9';
                    k--;
                } else if(arr[i] == 0 && arr[j] == 1 && k >= 1) {
                    kata[i] = '9';
                    kata[j] = '9';
                    k--;
                }
            }
        }
        printf("%s\n", kata);
    }
    
    return 0;
}