#include<stdio.h>
#include<math.h>
int prefect(int number)
{
    int sum=0,i;
    for(i=1;i<=number/2;i++)
    {
        if(number%i==0)
        {
            sum=sum+i;
        }
    }
    return number==sum;
}
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    if(prefect
(number))
    {
        printf("%d is a perfect number", number);
    }
    else
    {
        printf("%d is not a perfect number", number);
    }
    return 0;
}