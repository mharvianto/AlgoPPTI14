#include<stdio.h>
#include<stdlib.h>
#define N 100000

void selection(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }            
        }
        // swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int angka[N + 5];
    for (int i = 0; i < N; i++) {
        angka[i] = (rand() % 100) + 1;
        // printf("%d ", angka[i]);
    }
    printf("\n");
    selection(angka, N);
    // for (int i = 0; i < N; i++) {
    //     printf("%d ", angka[i]);
    // }
    // printf("\n");
    return 0;
}