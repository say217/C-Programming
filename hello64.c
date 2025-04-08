
#include <stdio.h>

// Function to convert Celsius to Fahrenheit
void convert(float celsius) {
    float fahrenheit;
    
    // Conversion formula
    fahrenheit = celsius * (9.0 / 5.0) + 32;

    // Displaying result
    printf("Celsius: %.2f°C  -->  Fahrenheit: %.2f°F\n", celsius, fahrenheit);
}

int main() {
    // Calling function with different values
    convert(0);     // Freezing point of water
    convert(37.9);    // Normal human body temperature
    convert(100);   // Boiling point of water
    convert(-40);   // Special case where C and F are the same

    return 0;
}
