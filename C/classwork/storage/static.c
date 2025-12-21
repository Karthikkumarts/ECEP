#include<stdio.h>
int *foo()
{
    static int i=10000;
    int *j=&i;
    return j;
}
int main()
{
    int *i;
    i=foo();
    printf("%d",*i);
    return 0;
}

