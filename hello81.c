
// Write a Program to find the vowels in the given string. 



#include <stdio.h>

int main() {
    char text[50];      // String array
    int i;             // Loop variable
    int vowel_count = 0; // Counter for vowels
    
    // Get the string
    printf("Enter a string: ");
    scanf("%s", text);
    
    // Check each character with for loop
    for(i = 0; text[i] != '\0'; i++) {
        // Check if character is a vowel (a, e, i, o, u)
        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || 
           text[i] == 'o' || text[i] == 'u' || 
           text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || 
           text[i] == 'O' || text[i] == 'U') {
            vowel_count++;    // Add 1 to counter
            printf("Vowel found: %c\n", text[i]);  // Show the vowel
        }
    }
    
    // Show total count
    printf("Total number of vowels in '%s': %d\n", text, vowel_count);
    
    return 0;
}