//Write a function called count_vowels that counts the number of vowels in a given string.
#include<stdio.h>
void count_vowels(char str[])
{
    int i;
    int vowel=0,consonant=0; 
    for(i=0;str[i]!= '\0';i++)
    {
        char ch;
        ch=str[i];
        (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')?vowel++:
        ((ch>='a'&&ch<='z' || ch>='A'&&ch<='Z')?consonant++:0);
    }
    printf("Number of vowels:%d\nNumber of Consonants:%d", vowel, consonant);
}
int main()
{
    char line[50];
    printf("Enter a line\n");
    fgets(line, sizeof(line), stdin);
    count_vowels(line);
    return 0;
}