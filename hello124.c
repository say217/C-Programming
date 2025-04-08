
#include <stdio.h>

// Recursive function to find sum of natural numbers
int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers is %d\n", n, sum(n));

    return 0;
}
