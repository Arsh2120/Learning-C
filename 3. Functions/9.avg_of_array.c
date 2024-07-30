//Write a function called average that takes an array of integers and its size, and returns the average of the elements.
#include<stdio.h>
#include<string.h>
double average(int arr[], int size)
{
    int l=0,total=0,avg=0;
    for(int i=0;i<size;i++)
    {
        int element=arr[i];
        total=total+element;
    }
    printf("Average:%d", total/size);
    return 0;
}
int main()
{
    int arr[50],n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    average(arr,n);
    return 0;
}