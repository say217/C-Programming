
//Find a pair in an array that sums to a given value

#include <stdio.h>

int main() {
    int arr[] = {2, 4, 7, 11, 15};
    int size = 5, sum = 9;
    int found = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], sum);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
        printf("No pair found with sum %d\n", sum);

    return 0;
}
