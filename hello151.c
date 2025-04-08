

//Max product subarray
#include <stdio.h>

int main() {
    int arr[] = {2, 3, -2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxProd = arr[0];
    int minProd = arr[0];
    int result = arr[0];

    for (int i = 1; i < size; i++) {
        int temp = maxProd;
        maxProd = arr[i] > arr[i] * maxProd && arr[i] > arr[i] * minProd ? arr[i] : arr[i] * (arr[i] > 0 ? maxProd : minProd);
        minProd = arr[i] < arr[i] * temp && arr[i] < arr[i] * minProd ? arr[i] : arr[i] * (arr[i] < 0 ? temp : minProd);

        if (maxProd > result)
            result = maxProd;
    }

    printf("Maximum product subarray: %d\n", result);
    return 0;
}
