
#include <stdio.h>

int main() {
    int arr[5]; // Declaring a 1D array of size 5
    int i;

    // Taking input from the user
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Displaying the elements of the array
    printf("You entered: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
