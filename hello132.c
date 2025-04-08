

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];  // Adding each element to sum

    float avg = (float)sum / size;  // Calculating average

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
