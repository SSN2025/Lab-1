#include <stdio.h>
int main(){
    float units;
    printf("Enter units:");
    scanf("%f",&units);
    if (units>0 && units <=200 )        { printf ("Charge:%f", units*0.5);}
else if (units >200 && units <=400)     { printf ("Charge:%f",100 + (units-200)*0.65);}
else if (units>400 && units<=600)       { printf ("Charge:%f",230+(units-400)*0.8);}
else if (units>600)                     {printf ("Charge:%f",425+(units-600)*1.25);}


    return 0;
}