



#include <stdio.h>

int main() {

int n, i = 1;
printf("enter the number you want table : ");
scanf("%d", &n);

do{
 printf(" %d  x  %d  =  %d\n",n,  i, n*i);
 i++;
}
while(i<=10);



   
return 0;
}