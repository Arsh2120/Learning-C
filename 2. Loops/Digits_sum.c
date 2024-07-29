//	8.	Sum of Digits
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the number\n");
    scanf("%d", &num);
    while(num != 0){
        sum = sum + num%10;
        num /= 10;
    }
    printf("sum: %d\n", sum);
    return 0;
}