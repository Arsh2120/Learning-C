//	5.	Count Occurrences: Write a program to count the number of occurrences of the numbers in an array.
#include<stdio.h>
int main()
{
    int arr[50],n,i,j,count[50]={0};
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            (arr[i]==arr[j])?count[i]++:0;
        }
    }
    printf("Element\tDistribution\n");
    for(i=0;i<n;i++)
    {
        int is_duplicate=0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j]) 
            {
            is_duplicate = 1;
            break; 
            }
        }
        (!is_duplicate)?printf("%d\t%d\n",arr[i],count[i]):0;
    }
    return 0;
}