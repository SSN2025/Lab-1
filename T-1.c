#include <stdio.h>
int main(){
    float p_amount,roi,time;
    printf("Enter Principle amount:");
    scanf ("%f",&p_amount);
    printf("\n Enter Rate of interest:");
    scanf ("%f",&roi);
    printf("\n Enter time span:");
    scanf ("%f",&time);
    float simple_in = p_amount*roi*time/100;
    printf("\n The simple interest is : %f",simple_in);
    return 0;
}