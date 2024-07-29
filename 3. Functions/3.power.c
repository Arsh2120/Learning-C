#include<stdio.h>
#include<math.h>
int power(int num, int p)
{
    return pow(num,p);
}
int main()
{
    int num,p;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Enter the power\n");
    scanf("%d", &p);
    printf("Answer: %d", power(num,p));
    return 0;

}