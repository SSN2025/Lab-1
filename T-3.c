#include <stdio.h>
int main(){
   float b_sallary,dearness_allow,travel_allow,hra;
   printf("Enter basic sallary: ");
   scanf("%f",&b_sallary);
   dearness_allow= 0.2*b_sallary;
   travel_allow = 0.02*b_sallary;
   hra = 0.2*b_sallary;
   printf("Gross Salary: %f",b_sallary+dearness_allow+travel_allow+hra);
   return 0;
}