#include<stdio.h>
int main()
{
    int x=5;
    int *iptr;
    iptr=&x;
    printf("x= %d\n",x);
    printf("*ptr = %d\n",*iptr);
    return 0;
}

