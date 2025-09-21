#include <stdio.h>
#include <math.h>

int digit_count(int num){
    int i =0;
    while(num/((int)pow(10,i))  !=  0){      
        i++;
    }

    return i;}


int main(){
    double num;
    int sum=0;
    printf("Enter a number:");
    scanf("%lf",&num);
    int s = digit_count(num);
    int digits[s];
    for (int i=s-1;i>=0;i--){
    digits[i] =  (num/(pow(10,i)));
    num = num-digits[i]*pow(10,i);
    sum += digits[i];
}
printf("Sum of digits is:%d",sum);
}