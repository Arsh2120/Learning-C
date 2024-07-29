//	Armstrong Number
#include<stdio.h>
#include<math.h>
int main(){
    int num,rem,original,arm=0;
    printf("Enter the number\n");
    scanf("%d", &num);
    original=num;
    while (num>0)
    {
        rem=num%10;
        arm=(rem*rem*rem) + arm;
        num/=10;
    }
    if (arm == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    } 
    return 0;
}