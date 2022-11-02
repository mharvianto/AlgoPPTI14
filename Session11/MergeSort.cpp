#include<stdio.h>
#include<stdlib.h>
#define N 1000

void merge(int arr[], int l, int m, int h) {
    int temp[h - l + 5];
    for (int i = l; i <= h; i++) {
        temp[i - l] = arr[i];
    }
    int i = 0, j = m - l + 1, k = l;
    while (i <= m - l && j <= h - l) {
        if (temp[i] < temp[j]) {
            arr[k] = temp[i];
            i++;
        } else {
            arr[k] = temp[j];
            j++;
        }
        k++;
    }
    
    while (i <= m - l) {
        arr[k] = temp[i];
        i++;
        k++;
    }

    while (j <= h - l) {
        arr[k] = temp[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int h) {
    if (l < h) {
        int m = (l + h) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, h);
        merge(arr, l, m, h);
    }
    
}

int main () {
    int arr[N+5];
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 1000 + 1;
    }
    mergeSort(arr, 0, N - 1);
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}