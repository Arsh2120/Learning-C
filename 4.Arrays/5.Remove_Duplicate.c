//Remove Duplicates: Write a program to remove duplicate elements from an array.
#include<stdio.h>
int main()
{
    int arr[50],i,j,n,dup,count[50]={0};
    printf("Enter the number the elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            (arr[i]==arr[j])
        }
    }
}