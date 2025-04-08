//Write a Program to read a text file containing subject and marks of a 
//student and calculate his average marks
#include <stdio.h>

int main() {
    FILE *file;
    char subject[50];
    int marks, count = 0, total = 0;
    float average;
    
    // Open the file in read mode
    file = fopen("input.txt", "r");
    
    // Check if the file exists
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    
    // Read subjects and marks from file and calculate total and count
    printf("Subject and Marks:\n");
    while (fscanf(file, "%s %d", subject, &marks) != EOF) {
        printf("%s: %d\n", subject, marks);
        total += marks;
        count++;
    }
    
    // Calculate and display average marks
    if (count > 0) {
        average = (float)total / count;
        printf("\nAverage Marks: %.2f\n", average);
    } else {
        printf("No data found in file.\n");
    }
    
    // Close the file
    fclose(file);
    
    return 0;
}
