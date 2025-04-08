
// check the palindrome or not

#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, digit;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number

    // Reverse the number
    while (num != 0) {
        digit = num % 10;                 // Extract the last digit
        reversedNum = reversedNum * 10 + digit; // Build reversed number
        num /= 10;                        // Remove the last digit
    }

    // Check if the original number matches the reversed number
    if (originalNum == reversedNum)
        printf("%d is a Palindrome number.\n", originalNum);
    else
        printf("%d is NOT a Palindrome number.\n", originalNum);

    return 0;
}
