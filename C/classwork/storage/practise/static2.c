#include<stdio.h>
static int x =10;
int foo()
{
    return ++x;
}
int main()
{
    printf("%d\n",foo());
    ++x;
    printf("%d\n",x);
}
