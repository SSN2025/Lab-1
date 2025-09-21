#include <stdio.h>
float power(float x, int y){
    float ans =1;
    if (y<0){
        x= (float)(1/x);
        y=-y;
    }
    
    for(int i=1; i<=y;i++){
        ans = ans*x;

    }
     return ans;
   

    }


int main(){
    int a,b;
printf("Enter two numbers:");
scanf("%d  %d",&a,&b);
printf("\n %f",power(a,b));
return 0;
}
