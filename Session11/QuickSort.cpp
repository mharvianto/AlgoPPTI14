#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int l, int h) {
    int x = (rand() % (h - l + 1)) + l;
    swap(&arr[l], &arr[x]);
    int pivot = arr[l];
    int i = l + 1;

    for (int j = l + 1; j <= h; j++) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[l], &arr[i-1]);
    return i - 1;
}

void quickSort(int arr[], int l, int h) {
    if (l < h) {
        int pivot = partition(arr, l, h);

        quickSort(arr, l, pivot - 1); // left
        quickSort(arr, pivot + 1, h); // right
    }
}

int main() {
    int arr[100005];
    for (int i = 0; i < 100000; i++) {
        arr[i] = rand() % 1000 + 1;
    }
    quickSort(arr, 0, 100000-1);
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    quickSort(arr, 0, 100000-1);
    printf("sort lagi\n");
    return 0;
}