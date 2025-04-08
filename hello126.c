#include <stdio.h>

// Function to print stars in a single line
void printStars(int n) {
    if (n == 0)
        return;
    printf("*");
    printStars(n - 1);
}

// Function to print reverse triangle pattern
void printReversePattern(int n) {
    if (n == 0)
        return;
    printStars(n);
    printf("\n");
    printReversePattern(n - 1);
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    printReversePattern(n);
    return 0;
}
