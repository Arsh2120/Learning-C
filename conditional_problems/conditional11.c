//12. **Simple Calculator**: Write a program that takes two numbers and an operator (+, -, *, /) and performs the corresponding operation.
#include<stdio.h>
int main(){
    double num1,num2,result;
    char operator;
    printf("Enter two numbers\n");
    scanf("%lf %lf",&num1, &num2);
    printf("Enter an operator from +   -   *   /\n");
    scanf(" %c",&operator);
    switch (operator)
    {
    case '+':
        printf("Adding\n %lf",num1+num2);
        break;
    case '-':
        printf("Subtracting\n %lf",num1-num2);
        break;
    case '*':
        printf("Multiplying\n %lf",num1*num2);
        break;
    case '/':
        if(num2!=0){
            printf("Dividing\n %lf",num1/num2);   
        }
        else
        {
            printf("Invalid: 0 is not accepted");
        }
        break;
    default:
        printf("invalid operator");
        break;
    }
    return 0;
}