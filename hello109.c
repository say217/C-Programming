

#include <stdio.h>

// Program to check whether a number is even or odd
int main() {
    int num;
    
    // Read an integer from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
    
    return 0;
}
