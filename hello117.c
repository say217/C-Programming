
#include <stdio.h>

int main() {
    int arr1[5], arr2[5], result[5];
    int i;

    // Taking input for the first array
    printf("Enter 5 elements for the first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    // Taking input for the second array
    printf("Enter 5 elements for the second array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    // Multiplying both arrays element-wise
    for(i = 0; i < 5; i++) {
        result[i] = arr1[i] * arr2[i];
    }

    // Displaying the result array
    printf("Resultant array after multiplication:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
