#include<stdio.h>
extern int i;
extern int add(int a,int b);
int main()
{
    int a,b=3;
    a = i;
    printf("%d\n",add(a,b));
}
