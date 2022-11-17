// See https://aka.ms/new-console-template for more information
using System.Diagnostics;

const int N = 100000;
Random r;

int[] randomArray(int n){
    int[] arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = r.Next(1, 1000000);
    }
    return arr;
}

void swap(ref int a, ref int b) {
    int t = a;
    a = b;
    b = t;
}

int partition(int[] arr, int low, int high) {
    int x = r.Next(low, high);
    swap(ref arr[low], ref arr[x]);
    int pivot = arr[low];
    int i = low + 1;
    for (int j = low + 1; j <= high; j++) {
        if (arr[j] < pivot) {
            swap(ref arr[i], ref arr[j]);
            i++;
        }
    }
    swap(ref arr[i - 1], ref arr[low]);
    return i - 1;
}

void quickSort(int[] arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int linearSearch(int[] arr, int n, int find){
    for (int i = 0; i < n; i++) {
        if (arr[i] == find) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int[] arr, int n, int find){
    int l = 0, h = n - 1, m;
    while (l <= h) {
        m = (l + h) / 2;
        if (arr[m] == find) {
            return m;
        } else if(find < arr[m]) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }
    return -1;
}

int main() {
    int[] arr;
    int k = 1000;
    var sw = new Stopwatch();
    sw.Reset();
    for (int i = 0; i < k; i++) {
        r = new(i);
        arr = randomArray(N);
        sw.Start();
        linearSearch(arr, N, r.Next(1, 1000000));
        sw.Stop();
    }
    Console.WriteLine($"Linear Search        : {sw.Elapsed / k}");
    sw.Reset();
    for (int i = 0; i < k; i++) {
        r = new(i);
        arr = randomArray(N);
        sw.Start();
        quickSort(arr, 0, N - 1);
        binarySearch(arr, N, r.Next(1, 1000000));
        sw.Stop();
    }
    Console.WriteLine($"Binary Search        : {sw.Elapsed / k}");

    sw.Reset();
    for (int i = 0; i < k; i++) {
        r = new(i);
        arr = randomArray(N);
        sw.Start();
        for (int j = 0; j < k; j++) {
            linearSearch(arr, N, r.Next(1, 1000000));
        }
        sw.Stop();
    }
    Console.WriteLine($"{k} x Linear Search : {sw.Elapsed / k}");
    sw.Reset();
    for (int i = 0; i < k; i++) {
        r = new(i);
        arr = randomArray(N);
        sw.Start();
        quickSort(arr, 0, N - 1);
        for (int j = 0; j < k; j++) {
            binarySearch(arr, N, r.Next(1, 1000000));
        }
        sw.Stop();
    }
    Console.WriteLine($"{k} x Binary Search : {sw.Elapsed / k}");
    return 0;
}

main();
