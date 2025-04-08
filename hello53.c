
#include <stdio.h>

int main() {
    int rows;

    // Get user input
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate the equilateral triangle pattern
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("8");
        }
        printf("\n");
    }

    return 0;
}
