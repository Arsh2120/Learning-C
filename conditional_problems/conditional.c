//Even or Odd: Write a program that takes an integer as input and determines whether it is even or odd.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("Number is even %d", a);
    }
    else
    {
        printf("number is odd %d", a);
    }
    return 0;
}