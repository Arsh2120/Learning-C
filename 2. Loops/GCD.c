//Greatest Common Divisor (GCD)
#include<stdio.h>
int main(){
    int num1,i,num2,gcd=1;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    int smaller = (num1<num2)? num1:num2;//ternary operator
    for (i=1;i<=smaller;i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    printf("Greatest common divisor of %d and %d is %d",num1,num2,gcd);
    return 0;
}