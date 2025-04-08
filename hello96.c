
//Write a Program to implement an array of structures to store the data of 
//multiple students.
#include <stdio.h>

// Defining a structure called Student
struct Student {
    char name[50];
    float marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character left by scanf
    
    struct Student students[n]; // Array of structures
    
    // Taking input for multiple students
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter student name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        printf("Enter student marks: ");
        scanf("%f", &students[i].marks);
        getchar(); // To consume the newline character left by scanf
    }
    
    // Displaying student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
    
    return 0;
}
