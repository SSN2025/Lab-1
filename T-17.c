#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    float max;
    if (a>=b && a>=c){
        printf("Max number is: %f",a);
    }

    if (b>=a && b>=c){
        printf("Max number is: %f",b);
    }

    if (c>=b && c>=a){
        printf("Max number is: %f",c);
    }

return 0;}