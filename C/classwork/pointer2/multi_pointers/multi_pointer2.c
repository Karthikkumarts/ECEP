#include<stdio.h>
void foo(int **ptr);
int main()
{
    int x=100;
    int *ptr = &x;
    foo(&ptr);
    printf("x = %d\n",x);
    return 0;
}

void foo(int **ptr)
{
    **ptr=50;
}
