//Print ASCII Values
#include<stdio.h>
int main () {
    unsigned char ch;
    for(ch=0;ch<=127;ch++){
        printf("Character: %c, ASCII value:%d\n",ch, (int)ch);
    }
    return 0;
}