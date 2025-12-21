#include<stdio.h>
extern int a,b;
//extern int sum(int a ,int b);
extern int average(int a,int b);

int main()
{
    printf("%d\n",sum(a,b));
    printf("%d\n",average(a,b));

}


