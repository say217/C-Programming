


#include <stdio.h>

// Program to check if angle A is 90 degrees in a triangle
int main() {
    int a, b, c;
    
    // Read sides of the triangle
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Check if angle A is 90 degrees using Pythagoras theorem
    if (a * a == b * b + c * c) {
        printf("Angle A is 90 degrees.\n");
    } else {
        printf("Angle A is not 90 degrees.\n");
    }
    
    return 0;
}
