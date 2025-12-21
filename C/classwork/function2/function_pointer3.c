#include<stdio.h>
int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int oper(int (*fptr)(int, int), int a, int b)
{
    return fptr(a, b);
}
int main()
{
    int(*fptr)(int,int);
    fptr=add;
    printf("%d\n",oper(fptr,2,4));
     fptr=sub;
    printf("%d\n",oper(fptr,2,4));
}
