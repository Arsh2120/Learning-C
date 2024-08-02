//Largest and Smallest: Write a program to find the largest and smallest elements in an array.
#include<stdio.h>
int main()
{
    int n, arr[50],i;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest=arr[0],smallest=arr[0];
    for(i=0;i<n;i++)
    {
        (arr[i]>largest)?largest=arr[i]:0;
        (arr[i]<smallest)?smallest=arr[i]:0;
    }
    printf("Largest:%d\nSmallest:%d",largest,smallest);
    return 0;
}