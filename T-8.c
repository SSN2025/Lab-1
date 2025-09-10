#include <stdio.h>
int main(){
    int input = 31558150;
    int days = input/(60*60*24);
    int left_time = input - days*(60*60*24);
    int hrs = left_time/(60*60);
    left_time=left_time-hrs*(60*60);
    int min = left_time/60;
    int sec= left_time - min*60;
    printf("31558150 second is %d days, %d hrs, %d min, %d sec",days,hrs,min,sec);
    return 0;

}