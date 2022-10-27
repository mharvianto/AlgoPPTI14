#include<stdio.h>

int search (int arr[], int n, int a) {
    for (int j = 0; j < n; j++) {
        if (arr[j] == a) {
            return j;
        }
    }
    return -1;
}

int main() {
    int n, a, count = 0, dict[5005];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) { 
        scanf("%d", &a);
        if (search(dict, count, a) < 0) {
            dict[count++] = a;
        }    
    }
    printf("%d\n", count);
    return 0;
}