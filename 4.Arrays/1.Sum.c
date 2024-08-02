//Sum of Elements: Write a program to find the sum of all elements in an array.
#include<stdio.h>
int main()
{
    int arr[50],i=0,n=0,sum=0;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("Sum is %d",sum);
    return 0;
}