//fibonacci serious
//0, 1, 1, 2, 3, 5, 8, 13..............


#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
        printf("%d ", a);
    }

    return 0;
}
