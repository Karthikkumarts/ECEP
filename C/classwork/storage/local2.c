#include<stdio.h>
int *foo()
{
    int i=50;
    int *j=&i;
    return j;
}
int main()
{
    int *i;
    i=foo(); //local address of a variable is not returned but it will fetch junk value
    printf("%d",*i);
    return 0;
}
