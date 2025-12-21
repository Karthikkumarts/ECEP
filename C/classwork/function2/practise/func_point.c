#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int (*fptr)(int,int);
    fptr=sum;
    int a=10,b=5;
    printf("sum = %d",fptr(a,b));
}
