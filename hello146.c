

// Sort 0s, 1s, 2s (Dutch National Flag problem)

#include <stdio.h>

int main() {
    int arr[] = {0, 1, 2, 1, 0, 2, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count0 = 0, count1 = 0, count2 = 0;

    // Count 0s, 1s, and 2s
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }

    // Overwrite the array with counted values
    int i = 0;
    while (count0--) arr[i++] = 0;
    while (count1--) arr[i++] = 1;
    while (count2--) arr[i++] = 2;

    // Print sorted array
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
