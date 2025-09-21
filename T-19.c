#include <stdio.h>
int main(){
char c;
printf("Enter character:");
scanf("%c",&c);
(c >='a' && c<='z')?(printf("Small case letter")):(printf("Not a small case letter"));

return 0;
}
