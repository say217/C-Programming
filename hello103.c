//Write a Program to read a text file and display the contents.  


#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    
    // Open the file in read mode
    file = fopen("input.txt", "r");
    
    // Check if the file exists
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    
    // Read and display the file contents
    printf("File contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    // Close the file
    fclose(file);
    
    return 0;
}
