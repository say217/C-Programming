

//Find the majority element (appears > n/2 times)

#include <stdio.h>

int main() {
    int arr[] = {2, 2, 1, 2, 2, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count, i, j;
    int majority = -1;

    for (i = 0; i < size; i++) {
        count = 0;
        for (j = 0; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > size / 2) {
            majority = arr[i];
            break;
        }
    }

    if (majority != -1)
        printf("Majority element is: %d\n", majority);
    else
        printf("No majority element found.\n");

    return 0;
}
