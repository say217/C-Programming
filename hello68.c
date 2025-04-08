
#include <stdio.h>
#include <math.h>

int main(){
    int x1, x2, y1, y2;
    double distance;

    printf("enter the coordinates:");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    distance=sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    printf("Distnce of the two points: %f", distance);
    return 0;
 

}