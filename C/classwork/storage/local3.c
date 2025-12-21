#include<stdio.h>
char *foo()
{
    char ch[12]="hello world";
    return ch;
}
int main()
{
    char *ca;
    ca = foo();
    printf("%s",ca);
}
