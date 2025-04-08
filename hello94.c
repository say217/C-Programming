
// Write a Program to check whether any use given input number is Peterson 
//number or not using user defined function.


#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is a Peterson number
int isPeterson(int num) {
    int original = num, sum = 0, digit;

    // Calculate sum of factorial of digits
    for (int temp = num; temp > 0; temp /= 10) {
        digit = temp % 10;
        sum += factorial(digit);
    }

    return (sum == original);
}

int main() {
    int num;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the number is a Peterson number
    if (isPeterson(num))
        printf("%d is a Peterson number.\n", num);
    else
        printf("%d is not a Peterson number.\n", num);

    return 0;
}





