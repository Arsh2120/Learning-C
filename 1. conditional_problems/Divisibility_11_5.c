//7. **Divisibility Check**: Write a program that checks whether a given number is divisible by 5 and 11.
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number  ");
    scanf("%d",&a);
    if(a%5==0){
        printf("It is divisible by 5 \n");
    }
    else{
        printf("It is not divisible by 5\n");
    }
    if(a%11==0){
        printf("It is divisible by 11");
    }
    else{
        printf("It is not divisible by 11");
    }
    return 0;
}