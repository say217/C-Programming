

// Find equilibrium index (sum left == sum right)


#include <stdio.h>

int main() {
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < size; i++) {
        int left_sum = 0, right_sum = 0;

        // Calculate sum of elements on left of i
        for (int j = 0; j < i; j++)
            left_sum += arr[j];

        // Calculate sum of elements on right of i
        for (int j = i + 1; j < size; j++)
            right_sum += arr[j];

        if (left_sum == right_sum) {
            printf("Equilibrium index is: %d\n", i);
            return 0;
        }
    }

    printf("No equilibrium index found.\n");
    return 0;
}
