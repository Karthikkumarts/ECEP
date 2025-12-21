 /*#include<stdio.h>
static int x= 10;
int foo()
{
    printf("x %d\n",x);
    x++;
    return 0;
}
int main()
{
    foo();
    foo();
    return 0;
}*/

#include<stdio.h>
//static int x=10; //error
int x=10;
int x;
int foo()
{
    printf("x = %d\n",x);
    x++;
    return 0;
}
int main()
{
    foo();
    foo();
    return 0;
}
