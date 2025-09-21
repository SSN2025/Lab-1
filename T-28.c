#include <stdio.h>
#include<math.h>
int power(int x, int y){
    int ans =1;
    for(int i=1; i<=y;i++){
        ans = ans*x;
    }
     return ans;
    }

float Armstrong(int o_num,int a[],int size){
    float sum_of_powers=0;
    for(int i=0; i<size; i++){
        sum_of_powers += pow(a[i],size);
    
    }

    if (sum_of_powers == (float)o_num){
        printf("\n Its an Armstong number!!");

    }
    else{
        printf("\n Its not an amnstrong number");
    }
}

int digit_count(int num){
    int i =0;
    while(num/((int)pow(10,i))  !=  0){      
        i++;
    }

    return i;
}



int main(){
int num,s;
printf("Enter a number:");
scanf("%d",&num);

s = digit_count(num) ;
int o_num = num;
int digits[s];
for (int i=s-1;i>=0;i--){
    digits[i] = num/(power(10,i));
    num = num-digits[i]*power(10,i);
}
Armstrong(o_num,digits,s);

return 0;
}
