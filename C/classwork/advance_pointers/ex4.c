#include<stdio.h>
int main()
{
    int x=10;
    void *p=&x;
    printf("%p\n",*(int *)p);
    printf("%p\n",p);
    printf("%p\n",++p);
}
