//Count Vowels and Consonants in a String
#include<stdio.h>
int main(){
    char str[50];
    int i, vowel=0, consonant=0;
    printf("Enter a line\n");
    fgets(str, sizeof(str), stdin);
    for(i=0; str[i] != '\0';i++){
        char ch=str[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowel++;
            }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonant++;
        }
    }
    printf("number of consonants:%d\n",consonant);
    printf("number of vowels:%d", vowel);
    return 0;
}