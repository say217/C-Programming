

// Count Subarrays with Given Sum (Simple O(n²) Approach)

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == target)
                count++;
        }
    }

    printf("Number of subarrays with sum %d: %d\n", target, count);
    return 0;
}
