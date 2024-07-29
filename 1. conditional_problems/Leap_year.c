//4. **Leap Year**: Write a program that checks whether a given year is a leap year or not.
#include<stdio.h>
int main(){
    int a;
    printf("Enter the year\n");
    scanf("%d",&a);
    if(a%4==0){
        printf("Print it is a leap year");
    }
    else{
        printf("it is not a leap year");
    }
}