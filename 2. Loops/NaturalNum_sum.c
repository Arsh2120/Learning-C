//	2.	Sum of First N Natural Numbers
#include<stdio.h>
int main(){
    int i,n,s;
    s=0;
    i=1;
    printf("Enter the number of natural numbers");
    scanf("%d",&n);
    while(i<=n){
        s=s+i;
        i++;
    }
    printf("sum:%d",s);
    return 0;
}