#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    float max;
    (a>=b)?(max=a):(max=b);
    (c>=max)? (max=c):0;
    printf("Max number is: %f",max);


return 0;}