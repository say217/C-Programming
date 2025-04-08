

//Remove duplicate elements from an array

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array after removing duplicates: ");
    
    for (int i = 0; i < size; i++) {
        int found = 0;
        
        // Check if arr[i] has appeared before
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }

        // If not duplicate, print it
        if (!found)
            printf("%d ", arr[i]);
    }

    return 0;
}
