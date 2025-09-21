#include <stdio.h>
#include <math.h>
int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
for (int i=1; i<=num;i=i+1){
printf("%.0f,",pow(i,2));
}
return 0; 
}