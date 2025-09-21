#include <stdio.h>
int main(){
double sales;
printf("Enter sales:");
scanf("%lf",&sales);

     if (sales <=500 )              { printf ("commission:%lf",sales*0.05);}
else if (sales >500 && sales <=2000){ printf ("commission: %lf",35+(sales-500.0)/10.0);}
else if (sales>2000 && sales<=5000 ){ printf ("commission: %lf",185.0 + 0.12*(sales-2000));}
else if (sales>5000)                { printf ("commission: %lf",sales * 0.125);}



    return 0;
}