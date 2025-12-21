#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr;
    ptr=a;
    printf("ptr = %lu  a = %lu\n",ptr,&a+1); //&a+1

} 
