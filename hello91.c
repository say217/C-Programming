
// greatens common devisor 
#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD: %d\nLCM: %d\n", gcd(a, b), (a * b) / gcd(a, b));
    return 0;
}
