#include<stdio.h>
void foo()
{
    static int a=0;
    int b= 0;
    printf("%d %d\n",++a,++b);
}
int main()
{
    foo();
    foo();
    foo();
}
