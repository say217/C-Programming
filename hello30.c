


#include <stdio.h>
int main(){
int a ;
printf("enter a number");
scanf("%d", &a);

switch(a){
    case 1:
    printf("you enterd 1");
    break;
    case 2:
    printf("you enterd 2");
    break;
    case 3:
    printf("you enterd 3");
    break;
    case 4:
    printf("you enterd 4");
    break;
    default:
    printf("Nothing match");
}


    return 0; 
}