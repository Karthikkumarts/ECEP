#include<stdio.h>
int main()
{
    int a=2,b=3,c=4,d;
    d = a > b ? (a+b+c) : (b? b : 4);
    printf("%d",d);
}
