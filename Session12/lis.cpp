#include<stdio.h>

void printPerm(int perm[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d, ", perm[i]);
    }
    printf("\n");
}

void f(int arr[], int start, int end, int perm[], int n){
    for (int i = start; i <= end; i++) {
        if (n == 0 || (n > 0 && arr[i] > perm[n-1])) {
            perm[n] = arr[i];
            printPerm(perm, n + 1);
            f(arr, i + 1, end, perm, n + 1);
        } else {
            f(arr, i + 1, end, perm, n);
        }
    }
}

int max(int a, int b) {
    return a > b ? a : b;
}

int lis(int arr[], int n, int last) {
    if(n < 0) return 0;
    if( arr[n] < last ) {
        return max(lis(arr, n - 1, arr[n]) + 1, lis(arr, n - 1, last));
    } else {
        return lis(arr, n - 1, last);
    }
}

int main () {
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60, 80, 70};
    // int perm[100] = {};
    // f(arr, 0, 8, perm, 0);
    printf("%d\n", lis(arr, 9, 100));
    return 0;
}