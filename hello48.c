#include <stdio.h>

int main() {

int  sum=0, n;
printf("enter num : ");
scanf("%d", &n );

for( int i = 1; i<=n; i++){
 sum = sum +i;

}
printf("result %d: ", sum);
return 0;
} 