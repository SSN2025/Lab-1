#include <stdio.h>
int main(){
    int num;
    int sum=0;
    printf("Entr a number:");
    scanf("%d",&num);
for(;num !=0;){
    sum += num%10;
    num=num/10;}
printf("Sum of digits is:%d",sum);
}