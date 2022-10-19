#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#define N 100000

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void bubble(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
}

int main() {
    int angka[N + 5];
    for (int i = 0; i < N; i++) {
        angka[i] = rand() % 100 + 1;
    }
    // std::sort(angka, angka + 10);
    bubble(angka, N);
    for (int i = 0; i < 100; i++){
        printf("%d ", angka[i]);
    }
    printf("\n");
    return 0 ;
}