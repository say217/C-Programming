
#include <stdio.h>
void takename(){
    char name[90];
    printf("enter name :");
    scanf("%s", name);

    printf("hello, %s!\n", name);


}

int main(){
    takename();
    return 0;
}