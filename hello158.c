



// find n term of odd natural number and find their sum
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("First %d odd natural numbers:\n", n);
    for (int i = 1, count = 0; count < n; i += 2) {
        printf("%d ", i);
        sum += i;
        count++;
    }

    printf("\nSum = %d\n", sum);

    return 0;
}



