#include<stdio.h>
int main()
{
    int x=10;
    int *ptr;
    ptr=&x;
    printf("x= %d\n",x);
    printf("*ptr = %d\n",*ptr);

    printf("&x = %p\n",&x);
    printf("ptr = %p\n",ptr);
    printf("&ptr = %p\n",&ptr);
    return 0;
}

