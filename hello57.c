#include <stdio.h>

int main() {
    int n = 7;  // Change this to any number you want to check
    int prime = 1;  // Assume prime initially

    if (n <= 1) {  // 1 and numbers <= 1 are not prime
        prime = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {  // Loop runs only up to sqrt(n)
            if (n % i == 0) {
                prime = 0;  // Found a factor, so not prime
                break;  // Stop further checks
            }
        }
    }

    if (prime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
