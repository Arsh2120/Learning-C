//	7.	Fibonacci Series
#include<stdio.h>
int main(){
    int num,i,t1=0,t2=1,term;
    printf("Enter the number");
    scanf("%d", &num);
    printf("Fibonacci series\n");
    for(i=0;i<=num;i++){
        printf("%d\n",t1);
        term=t1+t2;
        t1=t2;
        t2=term;
    }

    return 0;
}