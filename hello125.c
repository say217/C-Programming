
#include <stdio.h>

// Recursive function to print stars in a line
void printStars(int n) {
    if (n == 0)
        return;
    printStars(n - 1);
    printf("*");
}

// Recursive function to print triangle pattern
void printPattern(int n) {
    if (n == 0)
        return;
    printPattern(n - 1);     // Recursive call for previous rows
    printStars(n);           // Print current row stars
    printf("\n");            // New line after each row
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    printPattern(n);
    return 0;
}
