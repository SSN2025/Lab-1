#include <stdio.h>
int main(){
    int maths,physics,chem,ee;
    printf("Enter marks in maths:");
    scanf("%d",&maths);
    printf("Enter marks in physics:");
    scanf("%d",&physics);
    printf("Enter marks in chemistry:");
    scanf("%d",&chem);
    printf("Enter marks in entrance exam:");
    scanf("%d",&ee);
    int CM = maths/2 + physics/2 + chem/2 + ee;
    printf("Cutoff: %d",CM);

    return 0; 
}