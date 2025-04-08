
//Count even and odd numbers

#include <stdio.h>

int main() {
    int arr[] = {3, 6, 8, 5, 1, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even = 0, odd = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
