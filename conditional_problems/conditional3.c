//3. **Largest of Three Numbers**: Write a program that takes three numbers as input and prints the largest of the three.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Random numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>c){
        if (a>b){
            printf("%d is the greatest",a);
        }
        else{
            printf("%d is the greatest",b);
        }
    }
    else if(c>b){
        printf("%d is greatest",c);
    }
    else{
        printf("%d is greatest",b);
    }
    return 0;
}