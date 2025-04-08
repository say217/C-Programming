

//Find missing number in a range (1 to n)

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 6};  // Missing number is 3
    int n = 6;  // Total numbers should be from 1 to 6
    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}
