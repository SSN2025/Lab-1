#include <stdio.h>
#include <math.h>

void plndrm(int digits[],int size);
int power(int x, int y){
    int ans =1;
    for(int i=1; i<=y;i++){
        ans = ans*x;
    }
     return ans;
    }
int digit_count(int num){
    int i =0;
    while(num/(power(10,i))  !=  0){      
        i++;
    }

    return i;}



int main(){
int num,s;
printf("Enter a number:");
scanf("%d",&num);
s = digit_count(num);
int o_num = num;
int digits[s];
for (int i=s-1;i>=0;i--){
    digits[s-1-i] = (num/power(10,i));
    num = num-digits[s-i-1]*power(10,i);
    
}

plndrm(digits,s);
 



return 0;
}
void plndrm(int digits[],int size){
    for(int i=0; i<size; i++){
        if(digits[i] !=digits[size-1-i]){
                printf("\n Not a palindrome");
                return;
        }
    }
printf("Its a palindrome!!!");}