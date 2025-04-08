
//rite a Program to check whether any use given input number is 
// Armstrong number or not using user defined function. 


#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, temp, remainder;

    // Count the number of digits using a for loop
    for (temp = num; temp > 0; temp /= 10)
        digits++;

    // Compute the sum of the power of digits using a for loop
    for (temp = num; temp > 0; temp /= 10) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
    }

    return (sum == original);
}

int main() {
    int num;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the number is an Armstrong number
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
