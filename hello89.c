// write a Program to find XY using user defined function. 

#include <stdio.h>

int power(int x, int y) {
    int result = 1;
    for(int i = 0; i < y; i++) result *= x;
    return result;
}

int main() {
    int x, y;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &y);
    printf("Result: %d\n", power(x, y));
    return 0;
}



