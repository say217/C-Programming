

//Find the second largest and second smallest element

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 5, 8, 30, 25, 15}, size = 7;
    int large = arr[0], secondLarge = -1, small = arr[0], secondSmall = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > large) { secondLarge = large; large = arr[i]; }
        else if (arr[i] > secondLarge && arr[i] != large) secondLarge = arr[i];

        if (arr[i] < small) { secondSmall = small; small = arr[i]; }
        else if (arr[i] < secondSmall && arr[i] != small) secondSmall = arr[i];
    }

    printf("Second Largest: %d\nSecond Smallest: %d\n", secondLarge, secondSmall);
    return 0;
}


