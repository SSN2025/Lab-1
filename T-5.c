#include <stdio.h>
int main(){
    int a, b;
    printf("\nEnter a:");
    scanf ("%d",&a);
    printf("\nEnter b:");
    scanf ("%d",&b);
    int c = a;
    a=b;
    b=c;
    printf("a is %d, b is %d",a,b);

}