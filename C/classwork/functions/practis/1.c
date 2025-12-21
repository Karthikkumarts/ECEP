#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a = 7 , b = 3 , total = 0;
    total = sum(a,b);
    printf("total sum : %d\n",total);
}
