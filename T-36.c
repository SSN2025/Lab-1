#include <stdio.h>
int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
for (int i=1; i<=num;i=i+2){
printf("%d,",i);
}
return 0; 
}
