//9. **Character Case Check**: Write a program that checks whether a given character is uppercase or lowercase.
#include<stdio.h>
int main(){
    char c;
    printf("enter Character\nu");
    scanf("%c",&c);
    if(c >='A' && c<'Z'){
        printf("It is Uppercase");
    }
    else if(c>='a'&&c<='z'){
        printf("It is lowercase");
    }
    else{
        printf("It is not a letter");
    }
    return 0;
}