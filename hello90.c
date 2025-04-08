

// find factorial
#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;

}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Factorial not defined.\n");
    else
        printf("Factorial of %d is %d\n", num, fact(num));
    return 0;
}
