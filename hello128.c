
/*  used long long to handle larger values that might result fro
m exponentiation, ensuring the program doesn't overflow when dealing with big numbers.*/
#include <stdio.h>

// Recursive function to calculate x^y
long long power(int x, int y) {
    if (y == 0)
        return 1; // Base case: x^0 = 1
    return x * power(x, y - 1); // Recursive case
}

int main() {
    int x, y;
    
    // User input
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);
    
    // Calculate and display result
    printf("%d^%d = %lld\n", x, y, power(x, y));
    
    return 0;
}
