//Write a Program to copy one string to another string. 


#include <stdio.h>
#include <string.h>

int main() {
    char original[50], copy[50];

    printf("Enter a string: ");
    scanf("%s", original);

    strcpy(copy, original);  // Copy source to target

    printf("Copied string: %s\n", copy);
    return 0;
}
