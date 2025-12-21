#include<stdio.h>
int main()
{
    int a=64;
for(int i=8;i>0;i--)
    (a & (1>>i))?printf("1"):printf("0");

}

