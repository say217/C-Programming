

#include <stdio.h>

int main() {
    int a;
    printf("enter year: ");
    scanf("%d", &a);

    if ((a %4==0 && a%100!=0 )|| a %400==0){

        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");

    }
    return 0;
}
