#include<stdio.h>
//#include<string.h>
int main()
{
   // char *str ="hello world"; //constant string
    char str[] = "hello world"; //modifier string
    printf("%s\n",str);
    str[1]='i';
    printf("%s\n",str);
    return 0;
}
