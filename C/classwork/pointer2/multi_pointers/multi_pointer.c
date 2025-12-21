#include<stdio.h>
int main()
{
    int x=5;
    int *ptr;
    int **pptr;
    ptr=&x;
    pptr=&ptr;
    printf("pptr = %p\n",pptr); //pointing to integer
    printf("&ptr = %p\n",&ptr); //pointing to  int*(integer pointer)
    puts("");

    printf("&x = %p\n",&x); 
    printf("ptr = %p\n",ptr); //contains &x
    printf("*pptr = %p\n",*pptr); //*pptr is same as ptr

    printf("*ptr = %d\n",*ptr); //get x using ptr
    printf("**pptr = %d\n",**pptr); //get x using pptr
}
