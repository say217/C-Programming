
//14. Write a program, which reads a number X and prints a number Y. Y=X+10 if X is 6. Y is X*X if X is 
//7. Y is 2*X+4 if X is 12. Otherwise Y is X*6-1. (use switch)


#include <stdio.h>

// Program to calculate Y based on given conditions using switch
int main() {
    int X, Y;
    
    // Read X from the user
    printf("Enter a number X: ");
    scanf("%d", &X);
    
    // Calculate Y using switch-case
    switch (X) {
        case 6:
            Y = X + 10;
            break;
        case 7:
            Y = X * X;
            break;
        case 12:
            Y = 2 * X + 4;
            break;
        default:
            Y = X * 6 - 1;
            break;
    }
    
    // Print the calculated Y
    printf("Y = %d\n", Y);
    
    return 0;
}
