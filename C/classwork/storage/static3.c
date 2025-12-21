#include<stdio.h>
int *foo()
{

int i=10;
static int *j; //*j=&i doesnt work
j=&i;
return j;
}
int main()
{
    int *i;
    i=foo();
    printf("%d",*i);
}
