
// a Program to add two numbers using pointers.

#include <stdio.h>

// Function to add two numbers using pointers
int add(int *a, int *b) {
    return *a + *b;
}

int main() {
    int num1, num2, sum;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Adding using function
    sum = add(&num1, &num2);
    
    printf("Sum: %d\n", sum);
    
    return 0;
}

