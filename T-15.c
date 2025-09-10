#include <stdio.h>
int main(){
    int s1, s2,s3,s4,s5;
    printf("Enter marks of first suject:");
    scanf ("%d",&s1);
    printf("Enter marks of second suject:");
    scanf ("%d",&s2);
    printf("Enter marks of third suject:");
    scanf ("%d",&s3);
    printf("Enter marks of fourth suject:");
    scanf ("%d",&s4);
    printf("Enter marks of fifth suject:");
    scanf ("%d",&s5);
    float avg = (s1+s2+s3+s4+s5)/5.0;
    printf("\n The Average  is: %f",avg);
    return 0;
}