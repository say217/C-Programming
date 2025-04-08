

//Rotate an array (left or right) by k positions


#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5, k = 2;
    int i;

    // Left Rotation
    printf("Left Rotation by %d: ", k);
    for (i = k; i < size; i++)
        printf("%d ", arr[i]);
    for (i = 0; i < k; i++)
        printf("%d ", arr[i]);

    // Right Rotation
    printf("\nRight Rotation by %d: ", k);
    for (i = size - k; i < size; i++)
        printf("%d ", arr[i]);
    for (i = 0; i < size - k; i++)
        printf("%d ", arr[i]);

    return 0;
}
