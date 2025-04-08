
//Find the frequency of each element in an array


#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 3, 3, 5, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int visited[size]; 

    for (int i = 0; i < size; i++) {
        if (visited[i]) continue;  // Skip already counted elements

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  // Mark as counted
            }
        }
        printf("Element %d occurs %d times\n", arr[i], count);
    }

    return 0;
}
