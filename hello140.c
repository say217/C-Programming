
//Find the subarray with the maximum sum (Kadane’s Algorithm)

#include <stdio.h>

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxSum = arr[0], currentSum = arr[0];

    for (int i = 1; i < size; i++) {
        if (currentSum < 0)
            currentSum = arr[i];
        else
            currentSum += arr[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum subarray sum: %d", maxSum);
    return 0;
}
