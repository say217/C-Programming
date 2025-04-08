#include <stdio.h>

// Program to reverse the digits of an integer using for loop
int main() {
    int num, reversed = 0, remainder;
    
    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Reverse the digits using for loop
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }
    
    // Print the reversed number
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}