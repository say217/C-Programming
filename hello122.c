

#include <stdio.h>
#include <ctype.h>

int main() {
    int rows = 3; // You can modify this for more rows
    char ch = 'A';

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            // Alternate case: even position = uppercase, odd = lowercase
            if ((j + i) % 2 == 0) {
                printf("%c", toupper(ch));
            } else {
                printf("%c", tolower(ch));
            }
            ch++;
        }
        printf("\n");
    }

    return 0;
}
