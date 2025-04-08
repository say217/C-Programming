// Write a Program to accept your name and
// print your name using st

#include <stdio.h>

int main()
{
    char name[50];
    printf("Enter your name : ");
    fgets(name, 50 , stdin);

    printf("Enter your name: %s", name);
}