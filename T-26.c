#include <stdio.h>
int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
int Esum=0,Osum=0;
for (int i=1; i<=num;i++){
    if (i%2 ==0){
        Esum += i;
    }
    if (i%2 !=0){
        Osum += i;
    }}
printf ("Sum of All even Numbers: %d \nSum of all odd number: %d",Esum,Osum);
return 0;
}
