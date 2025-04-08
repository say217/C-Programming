

#include <stdio.h>

// Program to compute the sum of digits of a user-given number
int main() {
    int num, sum = 0, remainder;
    
    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Calculate the sum of digits using a for loop
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        sum += remainder;
    }
    
    // Print the sum of the digits
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}
