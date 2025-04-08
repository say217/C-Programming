

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    switch(num % 2) {
        case 0:
            printf("%d is even.\n", num);
            break;
        case 1:
        case -1:  // Handles negative odd numbers
            printf("%d is odd.\n", num);
            break;
    }
    return 0;
}
