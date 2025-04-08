

// Write a Program to display the Fibonacci series for a given range using 
//function. 
#include <stdio.h>

// Function to generate Fibonacci series up to n terms
void fibonacci(int n) {
    int a = 0, b = 1, next;
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int num;
    
    // Taking input from the user
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    
    // Checking for valid input
    if (num <= 0)
        printf("Please enter a positive number.\n");
    else
        fibonacci(num);

    return 0;
}

