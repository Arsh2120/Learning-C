#include<stdio.h>
int main()
{
    int arr[50],n,i,choice, pos,ele;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
    while (1)
    {
        printf("Choose 1 for adding\nChoose 2 for deletion\nChoose 3 for display\nChoose 4 for exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the position of the element added: ");
                scanf("%d", &pos);
                printf("Enter the element to be added: ");
                scanf("%d", &ele);
                if(pos<1||pos>n+1)
                {
                    printf("Invalid position");
                    break;
                }
                for(i=n;i>=pos;i--)
                    arr[i] = arr[i - 1];
                arr[pos-1]=ele;
                n++;
                printf("Elements after addition\n");
                for(i=0;i<n;i++)
                printf("%d\n", arr[i]);
                break;
            case 2:
                printf("Choose the position of element to be deleted");
                scanf("%d", &pos);
                if(pos<1 || pos>n)
                {
                printf("Invalid position");
                break;
                }
                for(i=pos-1;i<n-1;i++)
                    arr[i]=arr[i+1];
                n--;
                printf("Array after deletion");
                for(i=0;i<n;i++)
                printf("%d\n", arr[i]);
                break;
            case 3:
                printf("Current elements in the array\n");
                for(i=0;i<n;i++)
                printf("%d\n", arr[i]);
                break;
            case 4:
            return 0;
            default:
            printf("Error");
            break;  
        }    
    }
    return 0;
}