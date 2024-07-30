#include<stdio.h>
int fact(int num)
{
    int fact=1,i;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    printf("Factorial of %d is %d", x, fact(x));
    return 0;
}