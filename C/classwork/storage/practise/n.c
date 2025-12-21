#include<stdio.h>
static int x =10;
void foo()
{
printf("static : %d\n",x);
x++;
return;
}
int main()
{
    int x;
    x=5;
    printf("%d\n",x);
    foo();
    foo();
}

