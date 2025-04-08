

//Find duplicate elements in an array

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate elements: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;  // Avoid printing the same duplicate multiple times
            }
        }
    }

    return 0;
}


