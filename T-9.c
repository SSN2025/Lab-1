#include <stdio.h>


int main(){
    int hrs, min,sec;
    printf(" enter time in hrs: ");
    scanf("%d",&hrs);
    printf(" enter time in minutes: ");
    scanf("%d",&min);
    printf(" enter time in second: ");
    scanf("%d",&sec);
    printf("\n %d seconds", hrs*60*60 + min*60 + sec);
    return 0;
}