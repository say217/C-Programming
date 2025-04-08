#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(0));
    int min , max;
    printf("enter min number: ");
    scanf("%d", &min);

    printf("enter max number: " );
    scanf("%d", &max);
    int randomNumber = min + rand() % (max - min + 1);


    printf("Random number between %d and %d :  %d\n", min, max, randomNumber);
    return 0;
}
