
// .  Write a Program to perform binary search of 5 elements taken as user input

#include <stdio.h>

int main() {
    int numbers[5], i, search, low = 0, high = 4, mid;
    
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) scanf("%d", &numbers[i]);
    
    for(i = 0; i < 4; i++)
        for(int j = 0; j < 4 - i; j++)
            if(numbers[j] > numbers[j + 1])
                numbers[j] ^= numbers[j + 1], numbers[j + 1] ^= numbers[j], numbers[j] ^= numbers[j + 1];
    
    printf("Sorted: ");
    for(i = 0; i < 5; i++) printf("%d ", numbers[i]);
    printf("\nEnter number to search: ");
    
    scanf("%d", &search);
    while(low <= high) {
        mid = (low + high) / 2;
        if(numbers[mid] == search) return printf("Found at position %d\n", mid + 1), 0;
        (numbers[mid] < search) ? (low = mid + 1) : (high = mid - 1);
    }
    printf("Not found\n");
    return 0;
}