#include<stdio.h>
int fibo(int num)
{
    int t1=0,t2=1,tem;
    for(int i=0;i<num;i++)
    {
        printf("%d\n", t1);
        tem=t1+t2;
        t1=t2;
        t2=tem;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    fibo(n);
    return 0;
}