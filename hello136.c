


// merege two sorted array

#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7}, arr2[] = {2, 4, 6, 8};
    int size1 = 4, size2 = 4, merged[8];
    int i = 0, j = 0, k = 0;

    for (; i < size1 && j < size2; k++) {
        if (arr1[i] < arr2[j])
            merged[k] = arr1[i++];
        else
            merged[k] = arr2[j++];
    }

    for (; i < size1; k++, i++) merged[k] = arr1[i];
    for (; j < size2; k++, j++) merged[k] = arr2[j];

    for (i = 0; i < size1 + size2; i++)
        printf("%d ", merged[i]);

    return 0;
}
