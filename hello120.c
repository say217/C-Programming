
#include <stdio.h>

int main() {
    int rows = 3; // You can change this to increase the number of rows
    char ch = 'a';

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
