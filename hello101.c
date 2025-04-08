
// rite a Program to find the factorial of a given number using function 
//and pointers.
#include <stdio.h>

// Function to calculate factorial using pointers
void factorial(int *num, int *result) {
    *result = 1;
    for (int i = 1; i <= *num; i++) {
        *result *= i;
    }
}

int main() {
    int n, fact;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    factorial(&n, &fact);
    
    printf("Factorial of %d is %d\n", n, fact);
    
    return 0;
}
