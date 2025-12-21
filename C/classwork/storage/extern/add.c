#include<stdio.h>
extern int sum(int a,int b);
extern int a;
extern int b;
int main()
{
    int add=sum(a,b);
    printf("%d",add);
}

