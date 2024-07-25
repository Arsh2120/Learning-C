//10. **Weekday Name**: Write a program that takes a number (1-7) as input and prints the corresponding weekday name.
#include<stdio.h>
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:    
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;            
    
    default:
        printf("Invalid");
        break;
    }
}