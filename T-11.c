#include <stdio.h>
int main(){
    int input; 
    printf("enter time in seconds:");
    scanf("%d",&input);
    int hrs = input/(60*60);
    int left_time=input -hrs*(60*60);
    int min = left_time/60;
    int sec= left_time - min*60;
    printf(" %d hrs, %d min, %d sec",hrs,min,sec);
    return 0;

}