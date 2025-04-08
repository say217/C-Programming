



#include <stdio.h>
int main(){

int a , b, c, d;
printf("enter marks 1:\n");
scanf("%d", &a);
printf("enter marks 2:\n");
scanf("%d", &b);
printf("enter marks 3:\n");
scanf("%d", &c);
printf("enter marks 4:\n");
scanf("%d", &d);

if (a<33 || b<33 || c<33 || d<33){
    printf("you are failed");
}

else if((a +b +c +d)/4 < 40){
    printf(" you failed due to less marks\n");

}
else{
    printf("you are passed");
}

    return 0; 
}



