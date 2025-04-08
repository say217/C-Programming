

//Find subarray with given sum (Sliding Window)

#include <stdio.h>

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 33;

    int start = 0, sum = arr[0];

    for (int end = 1; end <= size; end++) {
        // Shrink the window from the left if sum is too big
        while (sum > target && start < end - 1)
            sum -= arr[start++];

        // If exact sum found
        if (sum == target) {
            printf("Subarray found from index %d to %d\n", start, end - 1);
            return 0;
        }

        // Expand window to the right
        if (end < size)
            sum += arr[end];
    }

    printf("No subarray with given sum found.\n");
    return 0;
}
