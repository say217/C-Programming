
// 2. Write a Program to reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, j;
    char temp;
    
    printf("Enter a string: ");
    fgets(str, 50, stdin);
    
    // Get length and remove newline
    int len = strlen(str) - 1;  // -1 to exclude newline
    
    // Reverse string
    for(i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    printf("Reversed string: %s", str);
    
    return 0;
}