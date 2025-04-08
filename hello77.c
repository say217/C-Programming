
//. Write a Program to find the length of string. 


#include <stdio.h>
#include <string.h>

int main() {
    char text[50];

    printf("Enter some text: ");
    scanf("%s", text);

    printf("Length of '%s' is %lu\n", text, strlen(text));

    return 0;
}
