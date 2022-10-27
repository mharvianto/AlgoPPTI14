#include<stdio.h>
// binary search -> sorted
// interpolation search -> sorted
int main(){
    int n, arr[5005], f, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) { // .5 * n * n
        scanf("%d", &arr[i]);

        f = 0;
        for (int j = 0; j < i; j++) { // linear searching
            if (arr[j] == arr[i]) {
                f = 1;
                break;
            }
        }

        if (f == 0) {
            count++;
        }
    }
    printf("%d\n", count);
    
    return 0;
}