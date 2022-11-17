// sorting
// searching
// file
// struct
// recursive
#include<cstdio>
#include<cstdlib>
#include<cstring>

struct Student {
    char name[50];
    int score, rank;
} ppti14[1005];

void swap(Student *a, Student *b) {
    Student t = *a;
    *a = *b;
    *b = t;
}

int partition(Student arr[], int low, int high) {
    int x = (rand() % (high - low + 1)) + low;
    swap(&arr[x], &arr[low]);
    Student p = arr[low];
    int i = low + 1;
    for (int j = low + 1; j <= high; j++) {
        if (p.score < arr[j].score) {
            swap(&arr[j], &arr[i]);
            i++;
        }
    }
    swap(&arr[low], &arr[i - 1]);
    return i - 1;
}

void quickSort(Student arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partitionName(Student arr[], int low, int high) {
    int x = (rand() % (high - low + 1)) + low;
    swap(&arr[x], &arr[low]);
    Student p = arr[low];
    int i = low + 1;
    for (int j = low + 1; j <= high; j++) {
        if (strcmp(p.name, arr[j].name) > 0) {
            swap(&arr[j], &arr[i]);
            i++;
        }
    }
    swap(&arr[low], &arr[i - 1]);
    return i - 1;
}

void quickSortName(Student arr[], int low, int high) {
    if (low < high) {
        int pi = partitionName(arr, low, high);
        quickSortName(arr, low, pi - 1);
        quickSortName(arr, pi + 1, high);
    }
}

int linearSearch(Student arr[], int n, char name[]){
    for (int j = 0; j < n; j++) {
        if (strcmp(name, arr[j].name) == 0) {
            return j;
        }
    }
    return -1;
}

int binarySearch(Student arr[], int n, char name[]) {
    int l = 0, h = n - 1, m;
    while (l <= h) {
        m = (l + h) / 2;
        if (strcmp(name, arr[m].name) == 0) {
            return m;
        } else if (strcmp(name, arr[m].name) < 0) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }
    return -1;
}

int main () {
    int n;
    FILE *f = fopen("testdata.in", "r");
    fscanf(f, "%d", &n); fgetc(f);
    for (int i = 0; i < n; i++) {
        fscanf(f, "%[^#]#%d", ppti14[i].name, &ppti14[i].score); fgetc(f);
    }
    quickSort(ppti14, 0, n-1);
    ppti14[0].rank = 1;
    for (int i = 1; i < n; i++) {
        if (ppti14[i].score == ppti14[i-1].score) {
            ppti14[i].rank = ppti14[i-1].rank;
        } else {
            ppti14[i].rank = i + 1;
        }
    }
    quickSortName(ppti14, 0, n - 1);
    // for (int i = 0; i < n; i++) {
    //     printf("%2d %2d %s\n", ppti14[i].rank, ppti14[i].score, ppti14[i].name);
    // }
    int q;
    fscanf(f, "%d", &q); fgetc(f);
    char name[50];
    for (int i = 0; i < q; i++) {
        fscanf(f, "%[^\n]", name); fgetc(f);
        // int x = linearSearch(ppti14, n, name);
        int x = binarySearch(ppti14, n, name);
        if (x >= 0) {
            printf("%d\n", ppti14[x].rank);
        } else {
            printf("Not found\n");
        }
    }
    fclose(f);
    return 0;
}