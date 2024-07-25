//Print Even Numbers from 1 to N
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;

}