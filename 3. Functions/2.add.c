#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int a, b;
    printf("Enter two Numbers\n");
    scanf("%d%d", &a,&b);
    printf("Added numbers %d", add(a,b));
    return 0;
}