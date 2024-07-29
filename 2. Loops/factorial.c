//	3.	Factorial of a Number
#include<stdio.h>
int main(){
    int num,fact=1,i;
    printf("Enter the number\n");
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("factorial of %d is %d", num, fact);
    return 0;

}