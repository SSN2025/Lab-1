#include <stdio.h>
int main(){
float num;
float fact(float n);

printf("Enter a number:");
scanf("%f",&num);
float sum=0;
for (float i=1; i <=num;i++){
    sum += i/fact(i);
}
printf("%f",sum);
return 0; 
}

float fact(float n){
    float value=1;
    for (int i=1;i<=n;i++){
    value = value*i;}
    return value;
}