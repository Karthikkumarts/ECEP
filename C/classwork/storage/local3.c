#include<stdio.h>
char *foo()
{
    //char ch[12]="hello world"; //local variable hence it is deleted once function exists
    char *ch="hello world";
    return ch;
}
int main()
{
    char *ca;
    ca = foo();
    printf("%s",ca);
}
