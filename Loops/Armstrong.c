//	Armstrong Number
#include<stdio.h>
#include<math.h>
int main(){
    int num,num1,num2,num3,n,original;
    printf("Enter the number\n");
    scanf("%d", &num);
    original=num;
    while(num!=0){
        num1=num%10;
        num=num/10;
        num2=num%10;
        num3=num/10;
    }
    n= pow(num1,3)+pow(num2,3)+pow(num3,3);
    if(n==original){
        printf("%d is Armstrong", original);
    }
    else{
        printf("%d is not Armstrong", original);
    }
    return 0;
}