
#include <stdio.h>

// Program to determine student's grade based on marks
int main() {
    int marks;
    
    // Read marks from the user
    printf("Enter the marks of the student: ");
    scanf("%d", &marks);
    
    // Determine the grade
    if (marks > 90) {
        printf("Grade: Ex\n");
    } else if (marks >= 80) {
        printf("Grade: A\n");
    } else if (marks >= 70) {
        printf("Grade: B\n");
    } else if (marks >= 60) {
        printf("Grade: C\n");
    } else if (marks >= 50) {
        printf("Grade: D\n");
    } else if (marks >= 35) {
        printf("Grade: P\n");
    } else {
        printf("Grade: F\n");
    }
    
    return 0;
}
