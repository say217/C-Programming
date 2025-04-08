
#include <stdio.h>
#include <math.h>

// Program to calculate the distance between two points
int main() {
    float x1, y1, x2, y2, distance;
    
    // Read coordinates of the two points
    printf("Enter coordinates (x1, y1) and (x2, y2): ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    
    // Calculate distance using the distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Print the distance
    printf("Distance between points: %.2f\n", distance);
    
    return 0;
}