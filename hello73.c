


#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (temp = num; temp > 0; temp /= 10) digits++;  // Count digits

    for (temp = num; temp > 0; temp /= 10) 
        sum += pow(temp % 10, digits);  // Compute sum of digits^digits

    printf("%d is %san Armstrong number.\n", num, (sum == num) ? "" : "not ");

    return 0;
}
