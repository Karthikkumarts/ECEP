#include<stdio.h>
int main()
{
    char ch[2][3]={'k','a','r','t','h','i'};
    printf("%c\n",ch[0][0]);
    printf("%c\n",*(ch[0]+1));
    printf("%c\n",(*(ch + 0))[0]);
}
