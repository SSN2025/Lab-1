#include <stdio.h>
#include <math.h>
float Y(float x,float n){
    float y;
    if (n==1){
        y= 1+x;
    }
    if (n==2){
        y = 1+x/n;
    }
    if (n==3){
        y = 1+pow(x,n);
    }
    if (n>3 || n<1){
        y=1+n*x;
    }
return y;}


int main(){
float x,n;
printf("Enter x and n:");
scanf("%f %f",&x,&n);
printf("\n Y is: %f",Y(x,n));
return 0;
}
