//rite a Program to create a structure called Student to store his/her name, 
//and marks
#include <stdio.h>

// Defining a structure called Student
struct Student {
    char name[50];
    float marks;
};

int main() {
    struct Student s; // Creating a structure variable
    
    // Taking input from user
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);
    
    printf("Enter student marks: ");
    scanf("%f", &s.marks);
    
    // Displaying student details
    printf("\nStudent Details:\n");
    printf("Name: %s", s.name);
    printf("Marks: %.2f\n", s.marks);
    
    return 0;
}
