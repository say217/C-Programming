
// asci number 97 to 122 is the samller case 
//charecter a to z


// 48 to 57 number

//65 to 90  upeer case A to Z
#include <stdio.h>

int main() {
    
char ch;
printf("enter charecter one charecter:");
scanf("%c", &ch );

printf("the charecter is %c\n", ch);
printf("the value of charecter is %d\n", ch);

if (ch >= 97 && ch<=122){
    printf("the charecter is lowercase\n");

}
else{
    printf("this charecter is upper case");
}
   
    return 0;
}