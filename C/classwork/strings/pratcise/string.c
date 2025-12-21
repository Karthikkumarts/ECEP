#include<stdio.h>
#include<string.h>
int main()
{
    char str[10]={'k','a','r','t','h','i','k','\0'};
    printf("%s\n",str);
    char ch[]="karthik";
    printf("%s\n",ch);
    printf("sizeof str : %d , sizeof ch : %d , strlen str : %d , strlen ch : %d",sizeof(str),sizeof(ch),strlen(str),strlen(ch));
}
