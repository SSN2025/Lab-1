#include <stdio.h>
int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
if (num<=1){printf("It's not a prime number");}
for (int i = 2; i<num; i++){
    if ((num%i) ==0){
        printf("Not a prime number");
        break;
    }
    if (i==num-1){
    printf("Its a Prime Number");}
}

return 0;
}
