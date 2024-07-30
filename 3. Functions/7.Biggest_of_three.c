//Write a function called max_of_three that takes three integers and returns the maximum of the three.
#include<stdio.h>
void max_of_three(int num1,int num2,int num3)
{
    (num1>num2 && num1>num3)?printf("%d is the greatest", num1):
    ((num2>num1&&num2>num3)?printf("%d is greatest",num2):printf("%d is greatest", num3));
}
int main()
{
    int x,y,z;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d", &x, &y, &z);
    max_of_three(x,y,z);
    return 0;
}