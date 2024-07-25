//	6.	Check Prime Number
#include<stdio.h>
int main(){
    int num,i,prime=1;
    printf("Enter the num: ");
    scanf("%d", &num);
    if (num<=1){
        prime=0;
    }
    else{
        for(i=2;i<num;i++){
            if(num%i==0){
                prime=0;
                break;
            }
        }
    }
    if(prime){
        printf("It is prime number");
    }
    else{
        printf("It is not prime number");
    }
    
}