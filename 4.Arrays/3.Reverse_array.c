//	3.	Reverse Array: Write a program to reverse the elements of an array.
#include<stdio.h>
int main()
{
    int arr[50],rev[50],i,num,n;
    printf("Enter the number of elements of the array\n");
    scanf("%d", &num);
    n=num;
    printf("Enter the elements\n");
    for(i=0;i<num;i++)
    {
        scanf("%d", &arr[i]);
        rev[n-1]=arr[i];
        n--;
    }
    printf("Reversed array\n");
    for(n=0;n<num;n++)
    {
        printf("%d\n",rev[n]);
    }
    return 0;
}