

#include <stdio.h>

int main() {
    int n;
    
    // Take input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // Generate the number pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line
    }
    
    return 0;
}
