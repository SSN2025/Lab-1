#include <stdio.h>
int main(){
float x,y;
char operator,t;
printf("\n Enter first number:");
scanf("%f",&x);
printf("\n Enter second number:");
scanf("%f",&y);
printf("Enter operator:");
//fflush(stdin);
scanf("%c%c",&t,&operator);
float ans;
switch (operator){
    case '+':{
        ans = x+y;
        printf("Ans is: %f ",ans);
        break;
    }
    case '-':{
        ans = x-y;
        printf("Ans is: %f ",ans);
        break;
        
    }
    case '*':{
        ans = x*y;
        printf("Ans is: %f ",ans);
        break;
        
    }
    case '/':{
        if(y ==0){
            printf("Can't divide by zero");
            break;}
        ans = x/y;
        printf("Ans is: %f ",ans);
        break;}
    
    default:
        {printf("Invalid operator");}
}


return 0;
}
