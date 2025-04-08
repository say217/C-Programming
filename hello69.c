
// find the  sum of the digits


#include <stdio.h>
#include <math.h>

int main(){
  
int num, sum = 0, digit;



printf("enter digit: ");
scanf("%d", &num);

while(num!=0){
    digit = num % 10;
    sum = sum + digit;
    num = num / 10;
}
printf("enter the sum of digit :  %d", sum);

    return 0;


}