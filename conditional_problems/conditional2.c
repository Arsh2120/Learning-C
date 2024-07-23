//Positive, Negative, or Zero: Write a program that takes a number as input and prints whether it is positive, negative, or zero.
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is positive\n", a);
    }
    else if(a<0)
    {
        printf("%d is negative\n",  a);
    }
    else 
    {
        printf("It is ZERO\n");
    }
    return 0;
}