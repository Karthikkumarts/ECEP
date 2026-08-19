#include<stdio.h>
int *foo()
{

int i=10;
static int *j; //*j=&i doesnt work
// Because i is a local stack variable, its memory address (&i) is dynamic and only decided at runtime when the function is called. The compiler cannot resolve this address during compilation, resulting in a compile-time error.
j=&i;
return j;
}
int main()
{
    int *i;
    i=foo();
    printf("%d",*i);
}
