
#include <stdio.h>

 int f(int n){
      switch(n){
         case 1: return 0;
         case 2: return 1;
         default:
            return f(n-1) +f(n-2);
}
}
int main(){
   int n;
   printf("Enter the number of numbers:");
   scanf("%d",&n);
   for (int i=1;i<=n;i++){
      printf("%d \t",f(i));
   }
   return 0;
}


