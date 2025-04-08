
// rite a Program to add three numbers using function. 

#include <stdio.h>

// Function to add three numbers
int addThreeNumbers(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num1, num2, num3;
    
    // Taking input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Calling the function and printing the result
    printf("Sum = %d\n", addThreeNumbers(num1, num2, num3));
    
    return 0;
}
