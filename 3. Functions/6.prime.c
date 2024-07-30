//Create a function called is_prime that takes an integer as a parameter and returns 1 if it’s a prime number, and 0 otherwise.
#include<stdio.h>
int prime(int n)
{
    int p=1;
    if(n%1!=0)
    {
        p=0;
    } 
    else
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i!=0)
            {
                p=1;
            }
            else
            {
                p=0;
            }
        }
    }
    (p)?printf("It is a prime number"):printf("It is not a prime number");
    return 0;
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    prime(num);
    return 0;
}