#include<stdio.h>
void sum(int * a, int *b,int*c)
{
    int d;
    d = *a+*b;
    *c= *a * *b;
    *a = d;
}
int main()
{
    int a=10,b=5,c;
    sum(&a,&b,&c);
    printf("sum : %d mul : %d\n",a,c);
}
