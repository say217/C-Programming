
//Write a Program to concatenate two string. 


#include <stdio.h>
#include <string.h>

int main() {
    char first[100], second[50];

    printf("Enter first string: ");
    scanf("%s", first);

    printf("Enter second string: ");
    scanf("%s", second);

    strcat(first, second);  // Concatenate second string to first

    printf("Concatenated string: %s\n", first);
    return 0;
}
