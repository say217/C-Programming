
// 9. Write a Program to perform linear search of 5 elements taken as user input

#include <stdio.h>

int main() {
    int numbers[5], search, i;

    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) scanf("%d", &numbers[i]);

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(i = 0; i < 5; i++)
        if(numbers[i] == search) {
            printf("%d found at position %d\n", search, i + 1);
            return 0;  // Exit early if found
        }

    printf("%d was not found\n", search);
    return 0;
}
