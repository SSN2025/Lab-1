#include <stdio.h>
int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if (ch>='a'&& ch <='z'){
        printf("\n its a small letter");
    }
    else if(ch>='A' && ch<='Z'){
        printf("\n its a Capital letter");
    }
    else if(ch>='0' && ch<='9'){
        printf("\n its a digit");
    }
    else {
        printf("\n Special chsracter");
    }


    return 0;
}
