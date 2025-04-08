
#include <stdio.h>
#include <math.h>

// Program to calculate the area of a triangle given its sides
int main() {
    float a, b, c, s, area;
    
    // Read sides of the triangle
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    
    // Calculate semi-perimeter
    s = (a + b + c) / 2;
    
    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    // Print the area
    printf("Area of the triangle: %.2f\n", area);
    
    return 0;
}