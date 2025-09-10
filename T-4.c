#include <stdio.h>
int main(){
    float F,C;
    printf("Enter temprature in fareheight:");
    scanf("%f", &F);
    C = (5*(F-32))/9;
    printf("Temperature in Celcius: %f",C);

    return 0; 
}