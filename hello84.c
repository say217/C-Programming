
//  perform buvle sort ion c
/* Bubble Sort is a simple sorting
method that helps you arrange a list of
numbers (or other items) in order, like from
smallest to biggest. It's called "bubble" sort
because larger numbers "bubble up" to the end of the
list step by step.*/

#include <stdio.h>

int main() {
    int numbers[5];    // Array for 5 numbers
    int i, j;         // Loop variables
    int temp;         // For swapping
    
    // Get 5 numbers from user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Bubble sort with for loops
    for(i = 0; i < 4; i++) {          // Outer loop for passes
        for(j = 0; j < 4 - i; j++) {  // Inner loop for comparisons
            if(numbers[j] > numbers[j + 1]) {
                // Swap if left number is bigger
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    
    // Show sorted array
    printf("Sorted numbers: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}