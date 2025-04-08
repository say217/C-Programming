

#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 89, 23, 56, 3, 99, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0], min = arr[0];  // Initialize max and min with first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];  // Update max if a larger element is found
        if (arr[i] < min)
            min = arr[i];  // Update min if a smaller element is found
    }

    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    return 0;
}
