#include <stdio.h>
#include <math.h>

void plndrm(int digits[],int size);

int main(){
int num,s;
printf("Enter a number:");
scanf("%d",&num);
printf("Enter number of digits:");
scanf("%d",&s);
int o_num = num;
int digits[s];
for (int i=s-1;i>=0;i--){
    digits[s-i] = num/pow(10,i);
    num = num-digits[s-i]*pow(10,i);
    printf("\n %d",digits[s-i]);
}

plndrm(digits,s);
 



return 0;
}
void plndrm(int digits[],int size){
    for(int i=0; i<size; i++){
        if(digits[i] !=digits[size-1-i]){
           // printf("%d \t \t %d",digits[i], digits[size-1-i]); 
                printf("Not a palindrome");
                return;
        }
    }
printf("Its a palindrome!!!");}