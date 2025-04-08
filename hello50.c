

#include <stdio.h>

int main() {
    int n;
    
    // Take input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
   
    for (int i = 1; i <= n; i++) {
     
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }
    
    return 0;
}
