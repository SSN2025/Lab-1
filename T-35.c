#include <stdio.h>


int ans(int num){
    int sum=0;
    for(;num!=0 ;){
        sum += num%10;
        num = num/10;  
    }
    if (sum>=10){
        sum = ans(sum);
    }
return sum;}


int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
printf("Answer is %d",ans(num));

return 0; 
}
