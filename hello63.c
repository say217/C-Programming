#include <stdio.h>

// Function to calculate and display the average
void num( float x, float y, float z ){
    

    float average;

    average = (x + y + z) / 3;

    printf("This is the average: %.2f\n", average);
}

int main() {
    float a, b, c;
    printf("Enter three numbers diff space: ");
    scanf("%f %f %f", &a, &b, &c);
    num(a, b, c); // Corrected function call
    return 0;
}

