//	12.	Power of a Number
#include<stdio.h>
int main(){
    int base, exponent, result=1,i;
    printf("Enter the base\n");
    scanf("%d", &base);
    printf("Enter the exponent\n");
    scanf("%d", &exponent);
    for (i = 0; i < exponent; i++)
    {
        result*=base;
    }
    printf("%d^%d=%d", base, exponent, result);
    return 0;
}