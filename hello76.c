#include <stdio.h>
#include <string.h>

int main() {
    char text[50];

    printf("Enter a word: ");
    scanf("%s", text);

    int len = strlen(text);
    for (int i = 0; i < len / 2; i++) {
        if (text[i] != text[len - i - 1]) {
            printf("%s is not a palindrome!\n", text);
            
        }
    }

    printf("%s is a palindrome!\n", text);
    return 0;
}












