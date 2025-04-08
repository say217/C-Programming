
//Find the intersection and union of two arrays
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int size1 = 5, size2 = 5;

    // Union
    printf("Union: ");
    for (int i = 0; i < size1; i++)
        printf("%d ", arr1[i]);

    for (int i = 0; i < size2; i++) {
        int found = 0;
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found)
            printf("%d ", arr2[i]);
    }

    // Intersection
    printf("\nIntersection: ");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}
