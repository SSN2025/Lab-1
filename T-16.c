#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    float max;
    if (a>=b){
        max = a;
    }
    else{
        max= b;
    }

    if (c>=max){
        max = c;
    }
printf("Maximum no.is: %f",max);

return 0;
}