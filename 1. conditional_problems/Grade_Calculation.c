//6. **Grade Calculation**: Write a program that takes marks as input and prints the corresponding grade (A, B, C, D, or F) based on predefined ranges.
#include<stdio.h>
int main(){
    int mark; 
    char grade;
    printf("Enter marks obtained: ");
    scanf("%d",&mark);
    switch(mark / 10){
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("Grade: %c\n", grade);
    return 0;
}