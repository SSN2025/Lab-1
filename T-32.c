#include <stdio.h>
int max(int nums[],int size,int *pointer);
int max_2nd(int nums[],int size,int *pointer);

int main(){
    int size;
    printf("Enter the number of numbers:");
    scanf("%d",&size);
    int nums[size];
    int i=0;
    while(i != size){
        printf("\n Enter number:");
        scanf("%d",&nums[i]);
        i++;
    }
    int a;
    int *p =&a;
    max(nums,size,p);
    max_2nd(nums,size,p);



    return 0;
}
int max(int nums[],int size, int *pointer){
    int max;
    max= nums[0];
    for (int i =0; i<size; i++){
        if (nums[i]>max){
            max = nums[i];
            *pointer = i;
        }
    }
printf("Max is: %d \n",max);}



int max_2nd(int nums[],int size,int *pointer){
    int max2;
    max2= nums[0];
    for (int i =0; i<size; i++){
        if (nums[i]>max2){
            if (i != *pointer){
            max2 = nums[i];}
            
        }
    }
printf("2nd Max is: %d \n",max2);
}