#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void counting(int arr[], int n, int k){ // n * 2 + k
    int count[k+5];
    for (int i = 0; i <= k; i++) { // k
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) { // n
        count[arr[i]]++;
    }
    int x = 0;
    for (int i = 0; i <= k; i++) { // n
        for (int j = 0; j < count[i]; j++) {
            arr[x] = i;
            x++;
        }
    }
}

int main() {
    // srand(time(0));
    // printf("%d\n", rand() % 101 + 100);
    int angka[100005];
    for (int i = 0; i < 100000; i++) {
        angka[i] = (rand() % 100) + 1;
        printf("%d ", angka[i]);
    }
    printf("\n");
    counting(angka, 100000, 100);
    for (int i = 0; i < 100000; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n");
    return 0;
}