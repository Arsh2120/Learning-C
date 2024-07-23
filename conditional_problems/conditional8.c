//8. **Quadratic Equation Roots**: Write a program that takes the coefficients of a quadratic equation (a, b, c) and finds its roots.
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,r1,r2;
    printf("Enter the coefficients A, B and C\n");
    scanf("%f %f %f", &a, &b, &c);
    d=(b*b)-(4*a*c);
    if(d>0){
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        printf("roots are real and different\n");
        printf("Root 1: %.2f\n",r1);
        printf("Root 2: %.2f\n",r2);
    }
    else if(d==0){
        r1=-b/(2*a);
        printf("roots are real and same");
        printf("Root; %.2f",r1);
    }
    else{
        printf("Roots are not real");
    }
    return 0;
}