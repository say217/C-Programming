

#include <stdio.h>
int main(){
int r, h;
printf("Cylinder volume and area calculator\n");
printf("Enter the radius of the cylinder: ");
scanf("%d", &r);
printf("Enter the height of the cylinder:");
scanf("%d", &h);
printf("the area of the cylinder is : %f", 3.24*r*r);
printf("\nthe volume of the cylinder with radius %d is : %f", r, 3.14*r*r*h);
    return 0; 
}