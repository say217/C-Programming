

#include <stdio.h>
int main(){

    int a, b, temp;

    printf("enter two num: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a =b ;
    b = temp;

    printf("after swapping the number: a =%d, b=%d", a,b);


    
    return 0;
}




#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;  // Store value at x in temp
    *x = *y;        // Assign value of y to x
    *y = temp;      // Assign temp to y
}

int main() {
    int a, b;

    // Get user input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap using function
    swap(&a, &b);

    // Output result
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
