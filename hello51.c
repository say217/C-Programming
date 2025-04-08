

#include <stdio.h>

int main() {
    int n;
    
    // Take input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // Generate the downward right-angled triangle
    for (int i = n; i ; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }
    
    return 0;
}
