

#include <stdio.h>
int main(){
int age;
printf("enter the age:");
scanf("%d", &age);
if (age>18){
    printf("The age is greater 18 eligable.");
}

if (age==18){
    printf("elligeble becuse 18");

}
else{
    printf("Not eligable ");
}
    return 0; 
}