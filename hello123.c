

#include <stdio.h>

void printNumbers(int n) {
    if (n == 0)
        return;
    
    printNumbers(n - 1);  // Recursive call
    printf("%d ", n);     // Print after recursive call
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printNumbers(n);
    return 0;
}
