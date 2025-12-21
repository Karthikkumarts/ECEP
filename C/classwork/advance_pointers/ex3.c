#include<stdio.h>
int main()
{
    void *ptr;
    int x=10,y;
    ptr=&x;
    y=*(char *)ptr; //address cant be hold
    printf("y = %d\n",y);
    printf("y=%d\n",*(int *)ptr);
}

