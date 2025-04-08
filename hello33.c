#include <stdio.h>

int main() {
    int a;
    float tax = 0; // Use float for accuracy

    printf("Enter income: ");
    scanf("%d", &a);

    if (a < 230000) {
        tax = 0;
    }
    else if (a >= 230000 && a < 890000) {
        tax = 0.05 * (a - 230000);
    }
    else if (a >= 890000 && a < 4000000) {
        tax = (0.05 * (890000 - 230000)) + (0.2 * (a - 890000));
    }
    else { // a >= 4000000
        tax = (0.05 * (890000 - 230000)) + (0.2 * (4000000 - 890000)) + (0.3 * (a - 4000000));
    }

    printf("The total tax you need to pay is: %.2f\n", tax);
    
    return 0;
}
