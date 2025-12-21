#include<stdio.h>
void fun(int a,int b);
#pragma weak fun = function
void function(int a,int b)
{
    printf("entered pragma weak\n");
    printf("%d\n",a+b);
}
int main()
{
    int a=10,b=5;
    fun(a,b);
}

