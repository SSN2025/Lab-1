#include <stdio.h>
int main(){
int num,sum=0;
while(num >=0){
sum += num;
printf("Enter a number:");
scanf("%d",&num);
}
printf("Answer: %d",sum);
return 0;
}