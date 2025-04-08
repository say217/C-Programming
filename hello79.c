
// Write a Program to compare two string. 
#include <stdio.h>
#include <string.h>

int main() {
    char first[50], second[50];

    printf("Enter first string: ");
    scanf("%s", first);

    printf("Enter second string: ");
    scanf("%s", second);

    printf("'%s' and '%s' are %sequal!\n", first, second, strcmp(first, second) ? "not " : "");

    return 0;
}

