#include<stdio.h>
int main()
{
    void *ptr;
    int x= 10;
    ptr = (void *)(long int)x;
    printf("%p\n",ptr);
}
