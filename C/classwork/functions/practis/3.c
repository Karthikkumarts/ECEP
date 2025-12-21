#include<stdio.h>
int sum();
int sum()
{
    int a=5 ,b=3;
    return a+b;
}
int main()
{
    int res;
    res = sum();
    printf("res = %d\n",res);
}
