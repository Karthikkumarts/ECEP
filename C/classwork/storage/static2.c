#include<stdio.h>
int foo()
{
    static int i=0;
    return i;
}

int main()
{
    static int i = foo(); //must be initialized with constants only
    printf("%d",i);
    return 0;
}
