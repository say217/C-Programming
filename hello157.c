

// sort array use quik sort algorithm
#include <stdio.h>

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int i = low, j = high, pivot = arr[low];

        while (i < j) {
            while (i <= high && arr[i] <= pivot) i++;
            while (arr[j] > pivot) j--;
            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        arr[low] = arr[j];
        arr[j] = pivot;

        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }
}

int main() {
    int arr[] = {9, 4, 7, 1, 3, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
