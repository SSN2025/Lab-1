#include <stdio.h>
int main(){
    int a, b;
    printf("\nEnter a:");
    scanf ("%d",&a);
    printf("\nEnter b:");
    scanf ("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a is %d, b is %d",a,b);

}