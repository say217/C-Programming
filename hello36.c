
#include <stdio.h>

int main() {
int a, b, c, d;

printf("enter first num:");
scanf("%d", &a);
 

printf("enter seconed num:");
scanf("%d", &b);


printf("enter third num:");
scanf("%d", &c);


printf("enter fourth num:");
scanf("%d", &d);


if(a>b && a>c && a>d){
    printf("the greatest of all is %d", a);

}

else if(b>a && b>c && b>d){
    printf("the greatest of all is %d", b);
    
}
else if(c>b && c>a && c>d){
    printf("the greatest of all is %d", c);
    
}

else if(d>b && d>c && d>a){
    printf("the greatest of all is %d", d);
    
}
    return 0;
}











// another way

#include <stdio.h>

int main() {
    int a, b, c, d, max;

    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = a;  // Assume first number is the greatest

    if (b > max) 
        max = b;
    if (c > max) 
        max = c;
    if (d > max) 
        max = d;

    printf("The greatest of all is %d\n", max);
    
    return 0;
}
