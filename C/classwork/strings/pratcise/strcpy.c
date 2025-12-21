#include<stdio.h>
#include<string.h>
int main()
{
    char *str="karthik";
    char ch[15];
    strcpy(ch,str);
    printf("ch : %s str : %s\n",ch,str);
}

