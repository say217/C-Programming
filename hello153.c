


// Find common elements in three arrays

#include <stdio.h>

int main() {
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    printf("Common elements are: ");

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                for (int k = 0; k < n3; k++) {
                    if (arr1[i] == arr3[k]) {
                        printf("%d ", arr1[i]);
                        goto next;
                    }
                }
            }
        }
    next:;
    }

    return 0;
}

