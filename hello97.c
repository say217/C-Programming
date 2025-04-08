//Write a Program to print address of an integer variable. 
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Address of the variable: %p\n", (void*)&num);
    
    return 0;
}
