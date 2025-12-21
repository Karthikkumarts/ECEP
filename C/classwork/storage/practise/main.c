#include<stdio.h>
extern int sum(int a,int b);
extern int sub(int a,int b);
extern int a;
extern int b;
int main()
{
    printf("%d\n",sum(a,b));
    printf("%d\n",sub(a,b));
}
