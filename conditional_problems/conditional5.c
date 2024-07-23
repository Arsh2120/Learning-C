//5. **Vowel or Consonant**: Write a program that takes a character as input and checks whether it is a vowel or consonant.

#include<stdio.h>
int main(){
    char c;
    int l,u;
    printf("Enter a character\n");
    scanf("%c",&c);
    l=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    u=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(l||u){
        printf("It is vowel");
    }
    else{
        printf("It is consonant");
    }
    return 0;
}