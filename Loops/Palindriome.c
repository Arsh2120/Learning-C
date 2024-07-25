//	9.	Palindrome Number
#include<stdio.h>
int main(){
    int num,rev=0,i,original;
    printf("Enter the number\n");
    scanf("%d", &num);
    original=num;
    while(num!=0){
        rev= rev*10 + num%10;
        num/=10;
    }
    if(rev==original){
        printf("It is a palindrome");
    }
    else{
        printf("It is not a palindrome");
    }
    return 0;
}